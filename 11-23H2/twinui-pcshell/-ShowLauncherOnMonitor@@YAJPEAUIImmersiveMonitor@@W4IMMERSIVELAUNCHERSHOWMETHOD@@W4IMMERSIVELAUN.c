/*
 * XREFs of ?ShowLauncherOnMonitor@@YAJPEAUIImmersiveMonitor@@W4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x1805BED70
 * Callers:
 *     ?ShowLauncher@TabletModePositioner@@AEAAJ_N@Z @ 0x1805BECA8 (-ShowLauncher@TabletModePositioner@@AEAAJ_N@Z.c)
 *     ?OnPointerUp@TabletModeCoverWindow@@AEAAXXZ @ 0x1805D9F2C (-OnPointerUp@TabletModeCoverWindow@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShowLauncherOnMonitor(IUnknown *a1, unsigned int a2, int a3)
{
  HRESULT v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  void *v8; // rbx
  __int64 (__fastcall *v9)(void *, __int64 *); // rdi
  __int64 *AddressOf; // rax
  int v11; // eax
  __int64 v12; // rdx
  void *ppvOut; // [rsp+20h] [rbp-10h] BYREF
  __int64 v15; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  int v17; // [rsp+60h] [rbp+30h] BYREF
  int v18; // [rsp+68h] [rbp+38h] BYREF

  v17 = a3;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
  v5 = IUnknown_QueryService(
         a1,
         (const GUID *const)&SID_ImmersiveLauncher,
         &GUID_d8d60399_a0f1_f987_5551_321fd1b49864,
         &ppvOut);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 83LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\tabletmode\\lib\\common.h",
      (const char *)(unsigned int)v5);
    goto LABEL_22;
  }
  v17 = 0;
  v5 = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)ppvOut + 56LL))(ppvOut, &v18);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 87LL;
    goto LABEL_20;
  }
  if ( !v18 )
    goto LABEL_15;
  v15 = 0LL;
  v8 = ppvOut;
  v9 = *(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)ppvOut + 88LL);
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v15);
  v11 = v9(v8, AddressOf);
  v6 = v11;
  if ( v11 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v15 + 96LL))(v15, v15, &v17);
    v6 = v11;
    if ( v11 < 0 )
    {
      v12 = 92LL;
      goto LABEL_13;
    }
    if ( !v17 )
    {
      v11 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)ppvOut + 48LL))(ppvOut);
      v6 = v11;
      if ( v11 < 0 )
      {
        v12 = 96LL;
        goto LABEL_13;
      }
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
LABEL_15:
    if ( !v17 )
    {
      v5 = (*(__int64 (__fastcall **)(void *, IUnknown *))(*(_QWORD *)ppvOut + 80LL))(ppvOut, a1);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 103LL;
        goto LABEL_20;
      }
      v5 = (*(__int64 (__fastcall **)(void *, _QWORD, __int64))(*(_QWORD *)ppvOut + 24LL))(ppvOut, a2, 4LL);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 104LL;
        goto LABEL_20;
      }
    }
    v6 = 0;
    goto LABEL_22;
  }
  v12 = 91LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"pcshell\\twinui\\tabletmode\\lib\\common.h",
    (const char *)(unsigned int)v11);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
LABEL_22:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
  return v6;
}
