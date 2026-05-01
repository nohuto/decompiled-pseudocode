/*
 * XREFs of ?_QueryEvictAppFromLayout@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x180516E64
 * Callers:
 *     ?EvictApp@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x180515040 (-EvictApp@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?SwapVTCPanel@PPIWin32VtcLayoutOperation@@UEAAJXZ @ 0x180515C30 (-SwapVTCPanel@PPIWin32VtcLayoutOperation@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_IsViewMeetingWindow@PPIWin32VtcLayoutOperation@@AEAA_NPEAUIApplicationView@@@Z @ 0x180516A00 (-_IsViewMeetingWindow@PPIWin32VtcLayoutOperation@@AEAA_NPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall PPIWin32VtcLayoutOperation::_QueryEvictAppFromLayout(
        PPIWin32VtcLayoutOperation *this,
        __int64 (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *),
        bool *a3)
{
  bool v6; // di
  int v7; // eax
  unsigned int v8; // ebp
  char v10; // al
  __int64 v11; // r9
  int v12; // edi
  __int64 v13; // rdx
  PPIWin32VtcLayoutOperation *v14; // rcx
  int v15; // eax
  unsigned int v16; // esi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v18; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0;
  v7 = (*(__int64 (__fastcall **)(PPIWin32VtcLayoutOperation *, __int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *), _QWORD, char *))(*(_QWORD *)this + 128LL))(
         this,
         a2,
         0LL,
         &v18);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x232,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
  v10 = (*(__int64 (__fastcall **)(PPIWin32VtcLayoutOperation *, __int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *)))(*(_QWORD *)this + 168LL))(
          this,
          a2);
  v11 = *(_QWORD *)this;
  if ( v10 )
  {
    v12 = (*(__int64 (__fastcall **)(PPIWin32VtcLayoutOperation *, __int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *)))(v11 + 104))(
            this,
            a2);
    if ( v12 < 0 )
    {
      v13 = 566LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
        (const char *)(unsigned int)v12);
      return (unsigned int)v12;
    }
LABEL_12:
    v6 = 1;
    goto LABEL_13;
  }
  if ( (*(int (__fastcall **)(PPIWin32VtcLayoutOperation *, _QWORD, _QWORD))(v11 + 160))(this, 0LL, 0LL) < 0
    && !PPIWin32VtcLayoutOperation::_IsViewMeetingWindow(v14, a2) )
  {
    v12 = (*(__int64 (__fastcall **)(PPIWin32VtcLayoutOperation *, __int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *)))(*(_QWORD *)this + 104LL))(
            this,
            a2);
    if ( v12 < 0 )
    {
      v13 = 583LL;
      goto LABEL_6;
    }
    (*(void (__fastcall **)(PPIWin32VtcLayoutOperation *, __int64))(*(_QWORD *)this + 120LL))(this, 4LL);
    goto LABEL_12;
  }
  v15 = (*(__int64 (__fastcall **)(PPIWin32VtcLayoutOperation *, __int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *)))(*(_QWORD *)this + 112LL))(
          this,
          a2);
  v16 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23F,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
      (const char *)(unsigned int)v15);
    return v16;
  }
LABEL_13:
  if ( a3 )
    *a3 = v6;
  (*(void (__fastcall **)(PPIWin32VtcLayoutOperation *, __int64))(*(_QWORD *)this + 120LL))(this, 2LL);
  return 0LL;
}
