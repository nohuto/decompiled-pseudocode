/*
 * XREFs of ?IsPPIWin32VtcSidebarPresentInLayout@TabletModePositioner@@AEAA_NXZ @ 0x1805BD808
 * Callers:
 *     ?SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z @ 0x1805C1B38 (-SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsSideBarView@PPISideBarHelpers@@SA_NPEAUIApplicationView@@@Z @ 0x180564DE0 (-IsSideBarView@PPISideBarHelpers@@SA_NPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall TabletModePositioner::IsPPIWin32VtcSidebarPresentInLayout(TabletModePositioner *this)
{
  __int64 v1; // rdi
  __int64 (__fastcall *v2)(__int64, __int64 *); // rbx
  int v3; // eax
  wil::details::in1diag3 *v4; // rcx
  __int64 v5; // rdx
  char v6; // si
  unsigned int v8; // r14d
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, _QWORD, GUID *, struct IApplicationView **); // rdi
  int v11; // eax
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  unsigned int v14; // [rsp+60h] [rbp+30h] BYREF
  int v15; // [rsp+68h] [rbp+38h] BYREF
  struct IApplicationView *v16; // [rsp+70h] [rbp+40h] BYREF
  __int64 v17; // [rsp+78h] [rbp+48h] BYREF

  v17 = 0LL;
  v1 = *((_QWORD *)this + 42);
  v2 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v1 + 24LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
  v3 = v2(v1, &v17);
  v4 = retaddr;
  if ( v3 < 0 )
  {
    v5 = 1721LL;
LABEL_5:
    wil::details::in1diag3::_Log_Hr(
      v4,
      (void *)v5,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v3);
LABEL_6:
    v6 = 0;
    goto LABEL_7;
  }
  v3 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v17 + 24LL))(v17, &v14);
  v4 = retaddr;
  if ( v3 < 0 )
  {
    v5 = 1724LL;
    goto LABEL_5;
  }
  v8 = 0;
  if ( !v14 )
    goto LABEL_6;
  v6 = 1;
  while ( 1 )
  {
    v16 = 0LL;
    v9 = v17;
    v10 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IApplicationView **))(*(_QWORD *)v17 + 32LL);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v16);
    v11 = v10(v9, v8, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v16);
    if ( v11 >= 0 )
      break;
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x6C1,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v11);
LABEL_13:
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v16);
    if ( ++v8 >= v14 )
      goto LABEL_6;
  }
  if ( !PPISideBarHelpers::IsSideBarView((__int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))v16) )
    goto LABEL_13;
  v12 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)v16 + 88LL))(v16, &v15);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x6C5,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_18;
  }
  if ( !v15 )
LABEL_18:
    v6 = 0;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v16);
LABEL_7:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
  return v6;
}
