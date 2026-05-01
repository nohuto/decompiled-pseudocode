/*
 * XREFs of ?ApplicationViewShown@VirtualDesktopWindowMoveManager@@UEAAJPEAUIApplicationView@@_K@Z @ 0x1801590D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TrimPendingMoves@VirtualDesktopWindowMoveManager@@AEAAX_K@Z @ 0x1801591BC (-TrimPendingMoves@VirtualDesktopWindowMoveManager@@AEAAX_K@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveAt@?$CTSimpleArray@UPendingMove@VirtualDesktopWindowMoveManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingMove@VirtualDesktopWindowMoveManager@@@@V?$CSimpleArrayStandardCompareHelper@UPendingMove@VirtualDesktopWindowMoveManager@@@@V?$CSimpleArrayStandardMergeHelper@UPendingMove@VirtualDesktopWindowMoveManager@@@@@@QEAAJ_K@Z @ 0x180559FCC (-RemoveAt@-$CTSimpleArray@UPendingMove@VirtualDesktopWindowMoveManager@@$0PPPPPPPO@V-$CTPolicyCo.c)
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
  unsigned __int64 v8; // rdx
  __int64 v10; // rdx
  _QWORD *v11; // r9
  _QWORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, char *, __int64 *); // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // [rsp+20h] [rbp-29h] BYREF
  __int64 v19; // [rsp+28h] [rbp-21h] BYREF
  _QWORD v20[6]; // [rsp+30h] [rbp-19h] BYREF
  __int128 v21; // [rsp+60h] [rbp+17h] BYREF
  __int128 v22; // [rsp+70h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  if ( !*((_QWORD *)this + 8) )
  {
    v6 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x57,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
      (const char *)0x8007139FLL);
    return (unsigned int)v6;
  }
  VirtualDesktopWindowMoveManager::TrimPendingMoves(this, a3);
  v19 = 0LL;
  v5 = **(__int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v19);
  v6 = v5(a2, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &v19);
  if ( v6 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v19 + 24LL))(v19, v20);
    v6 = v7;
    if ( v7 < 0 )
    {
      v10 = 95LL;
      goto LABEL_19;
    }
    v8 = 0LL;
    if ( !*((_QWORD *)this + 12) )
    {
LABEL_5:
      v6 = -2147319765;
      goto LABEL_6;
    }
    v11 = (_QWORD *)*((_QWORD *)this + 11);
    v12 = v11;
    while ( *v12 != v20[0] )
    {
      ++v8;
      v12 += 4;
      if ( v8 >= *((_QWORD *)this + 12) )
        goto LABEL_5;
    }
    v21 = *(_OWORD *)&v11[4 * v8];
    v22 = *(_OWORD *)&v11[4 * v8 + 2];
    CTSimpleArray<VirtualDesktopWindowMoveManager::PendingMove,4294967294,CTPolicyCoTaskMem<VirtualDesktopWindowMoveManager::PendingMove>,CSimpleArrayStandardCompareHelper<VirtualDesktopWindowMoveManager::PendingMove>,CSimpleArrayStandardMergeHelper<VirtualDesktopWindowMoveManager::PendingMove>>::RemoveAt((char *)this + 88);
    v13 = *((_QWORD *)&v21 + 1) - 0x4CF966F2C2DDEA68LL;
    if ( *((_QWORD *)&v21 + 1) == 0x4CF966F2C2DDEA68LL )
      v13 = v22 + 0x534404FF02E49B7ELL;
    if ( !v13 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 6) + 184LL))(
             *((_QWORD *)this + 6),
             a2);
      v6 = v7;
      if ( v7 >= 0 )
        goto LABEL_6;
      v10 = 110LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
        (const char *)(unsigned int)v7);
      goto LABEL_6;
    }
    v18 = 0LL;
    v14 = *((_QWORD *)this + 7);
    v15 = *(__int64 (__fastcall **)(__int64, char *, __int64 *))(*(_QWORD *)v14 + 96LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
    v16 = v15(v14, (char *)&v21 + 8, &v18);
    v6 = v16;
    if ( v16 >= 0 )
    {
      v16 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, __int64))(**((_QWORD **)this + 6) + 168LL))(
              *((_QWORD *)this + 6),
              a2,
              v18);
      v6 = v16;
      if ( v16 >= 0 )
      {
LABEL_25:
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
        goto LABEL_6;
      }
      v17 = 116LL;
    }
    else
    {
      v17 = 115LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
      (const char *)(unsigned int)v16);
    goto LABEL_25;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v19);
  return (unsigned int)v6;
}
