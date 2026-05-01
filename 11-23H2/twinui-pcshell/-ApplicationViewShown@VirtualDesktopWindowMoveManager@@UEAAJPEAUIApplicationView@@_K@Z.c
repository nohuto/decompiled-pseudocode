/*
 * XREFs of ?ApplicationViewShown@VirtualDesktopWindowMoveManager@@UEAAJPEAUIApplicationView@@_K@Z @ 0x180178EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TrimPendingMoves@VirtualDesktopWindowMoveManager@@AEAAX_K@Z @ 0x180178FE4 (-TrimPendingMoves@VirtualDesktopWindowMoveManager@@AEAAX_K@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveAt@?$CTSimpleArray@UPendingMove@VirtualDesktopWindowMoveManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingMove@VirtualDesktopWindowMoveManager@@@@V?$CSimpleArrayStandardCompareHelper@UPendingMove@VirtualDesktopWindowMoveManager@@@@V?$CSimpleArrayStandardMergeHelper@UPendingMove@VirtualDesktopWindowMoveManager@@@@@@QEAAJ_K@Z @ 0x1806161C0 (-RemoveAt@-$CTSimpleArray@UPendingMove@VirtualDesktopWindowMoveManager@@$0PPPPPPPO@V-$CTPolicyCo.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopWindowMoveManager::ApplicationViewShown(
        VirtualDesktopWindowMoveManager *this,
        struct IApplicationView *a2,
        unsigned __int64 a3)
{
  __int64 (__fastcall *v5)(struct IApplicationView *, GUID *, __int64 *); // rbx
  int v6; // ebx
  int v7; // eax
  _QWORD **v8; // r8
  unsigned __int64 v9; // rcx
  _QWORD *v11; // rdx
  __int64 v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64, char *, __int64 *); // rbx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // [rsp+20h] [rbp-29h] BYREF
  __int64 v20; // [rsp+28h] [rbp-21h] BYREF
  _QWORD v21[6]; // [rsp+30h] [rbp-19h] BYREF
  __int128 v22; // [rsp+60h] [rbp+17h] BYREF
  __int128 v23; // [rsp+70h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  if ( !*((_QWORD *)this + 8) )
  {
    v6 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x57,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
      (const char *)0x8007139FLL);
    return (unsigned int)v6;
  }
  VirtualDesktopWindowMoveManager::TrimPendingMoves(this, a3);
  v20 = 0LL;
  v5 = **(__int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v20);
  v6 = v5(a2, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &v20);
  if ( v6 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v20 + 24LL))(v20, v21);
    v6 = v7;
    if ( v7 < 0 )
    {
      v12 = 95LL;
      goto LABEL_19;
    }
    v8 = (_QWORD **)((char *)this + 88);
    v9 = 0LL;
    if ( !*((_QWORD *)this + 12) )
    {
LABEL_5:
      v6 = -2147319765;
      goto LABEL_6;
    }
    v11 = *v8;
    while ( *v11 != v21[0] )
    {
      ++v9;
      v11 += 4;
      if ( v9 >= *((_QWORD *)this + 12) )
        goto LABEL_5;
    }
    v13 = *v8;
    v22 = *(_OWORD *)&(*v8)[4 * v9];
    v23 = *(_OWORD *)&v13[4 * v9 + 2];
    CTSimpleArray<VirtualDesktopWindowMoveManager::PendingMove,4294967294,CTPolicyCoTaskMem<VirtualDesktopWindowMoveManager::PendingMove>,CSimpleArrayStandardCompareHelper<VirtualDesktopWindowMoveManager::PendingMove>,CSimpleArrayStandardMergeHelper<VirtualDesktopWindowMoveManager::PendingMove>>::RemoveAt(
      (char *)this + 88,
      v9);
    v14 = *((_QWORD *)&v22 + 1) - 0x4CF966F2C2DDEA68LL;
    if ( *((_QWORD *)&v22 + 1) == 0x4CF966F2C2DDEA68LL )
      v14 = v23 + 0x534404FF02E49B7ELL;
    if ( !v14 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 6) + 208LL))(
             *((_QWORD *)this + 6),
             a2);
      v6 = v7;
      if ( v7 >= 0 )
        goto LABEL_6;
      v12 = 110LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
        (const char *)(unsigned int)v7);
      goto LABEL_6;
    }
    v19 = 0LL;
    v15 = *((_QWORD *)this + 7);
    v16 = *(__int64 (__fastcall **)(__int64, char *, __int64 *))(*(_QWORD *)v15 + 88LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v19);
    v17 = v16(v15, (char *)&v22 + 8, &v19);
    v6 = v17;
    if ( v17 >= 0 )
    {
      v17 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, __int64))(**((_QWORD **)this + 6) + 192LL))(
              *((_QWORD *)this + 6),
              a2,
              v19);
      v6 = v17;
      if ( v17 >= 0 )
      {
LABEL_25:
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v19);
        goto LABEL_6;
      }
      v18 = 116LL;
    }
    else
    {
      v18 = 115LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
      (const char *)(unsigned int)v17);
    goto LABEL_25;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v20);
  return (unsigned int)v6;
}
