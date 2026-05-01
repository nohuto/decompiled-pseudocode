/*
 * XREFs of ?QueryInsertApp@PPILayoutOperation@@AEAAJPEAUIApplicationView@@@Z @ 0x1805CC8E8
 * Callers:
 *     ?InsertApp@PPILayoutOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x1805CC6F0 (-InsertApp@PPILayoutOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FindLeastRecentlyActivatedItem@PPILayoutOperation@@AEAAJPEAPEAUIApplicationView@@@Z @ 0x1805CC55C (-FindLeastRecentlyActivatedItem@PPILayoutOperation@@AEAAJPEAPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall PPILayoutOperation::QueryInsertApp(PPILayoutOperation *this, struct IApplicationView *a2)
{
  int v4; // eax
  __int64 *v5; // rcx
  __int64 v6; // r11
  int v7; // ebx
  __int64 v8; // rdx
  int LeastRecentlyActivatedItem; // eax
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v13; // [rsp+50h] [rbp+18h] BYREF
  struct IApplicationView *v14; // [rsp+58h] [rbp+20h] BYREF

  if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 184LL))(*((_QWORD *)this + 8)) )
    return 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 8) + 168LL))(
         *((_QWORD *)this + 8),
         0LL,
         &v13);
  v5 = (__int64 *)*((_QWORD *)this + 8);
  v6 = *v5;
  if ( v4 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, struct IApplicationView *, __int64))(v6 + 248))(v5, 0LL, a2, 1LL);
    if ( v7 < 0 )
    {
      v8 = 206LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"pcshell\\twinui\\tabletmode\\lib\\ppilayoutoperation.cpp",
        (const char *)(unsigned int)v7);
      return (unsigned int)v7;
    }
    return 0LL;
  }
  if ( (*(unsigned int (**)(void))(v6 + 72))() > 1 )
  {
    v14 = 0LL;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v14);
    LeastRecentlyActivatedItem = PPILayoutOperation::FindLeastRecentlyActivatedItem(this, &v14);
    v7 = LeastRecentlyActivatedItem;
    if ( LeastRecentlyActivatedItem >= 0 )
    {
      LeastRecentlyActivatedItem = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, struct IApplicationView *, __int64))(**((_QWORD **)this + 8) + 248LL))(
                                     *((_QWORD *)this + 8),
                                     v14,
                                     a2,
                                     1LL);
      v7 = LeastRecentlyActivatedItem;
      if ( LeastRecentlyActivatedItem >= 0 )
      {
        v7 = 0;
        goto LABEL_16;
      }
      v11 = 221LL;
    }
    else
    {
      v11 = 220LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\tabletmode\\lib\\ppilayoutoperation.cpp",
      (const char *)(unsigned int)LeastRecentlyActivatedItem);
LABEL_16:
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v14);
    return (unsigned int)v7;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, __int64))(**((_QWORD **)this + 8) + 232LL))(
         *((_QWORD *)this + 8),
         a2,
         1LL);
  if ( v7 < 0 )
  {
    v8 = 213LL;
    goto LABEL_5;
  }
  return 0LL;
}
