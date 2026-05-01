/*
 * XREFs of ?OnPointerUp@TabletModeCoverWindow@@AEAAXXZ @ 0x18052155C
 * Callers:
 *     ?v_WndProc@TabletModeCoverWindow@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x180069140 (-v_WndProc@TabletModeCoverWindow@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800C27AC (-IsPPIEdition@@YA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ShowLauncherOnMonitor@@YAJPEAUIImmersiveMonitor@@W4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180506B30 (-ShowLauncherOnMonitor@@YAJPEAUIImmersiveMonitor@@W4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUN.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TabletModeCoverWindow::OnPointerUp(TabletModeCoverWindow *this)
{
  void (__fastcall *v2)(TabletModeCoverWindow *, GUID *, IUnknown **); // rbx
  HRESULT v3; // eax
  char v4; // bl
  int v5; // r8d
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  IUnknown *punk; // [rsp+48h] [rbp+28h] BYREF
  void *ppvOut; // [rsp+50h] [rbp+30h] BYREF

  if ( *((_BYTE *)this + 220) && !IsPPIEdition() )
  {
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
    punk = 0LL;
    v2 = *(void (__fastcall **)(TabletModeCoverWindow *, GUID *, IUnknown **))(*(_QWORD *)this + 32LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
    v2(this, &GUID_00000000_0000_0000_c000_000000000046, &punk);
    v3 = IUnknown_QueryService(
           punk,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &ppvOut);
    if ( v3 >= 0 )
    {
      v4 = 1;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1E2,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
        (const char *)(unsigned int)v3);
      v4 = 0;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
    if ( v4 )
    {
      v6 = ShowLauncherOnMonitor((IUnknown *)ppvOut, 4u, v5);
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1E8,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
          (const char *)(unsigned int)v6);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
  }
  *((_BYTE *)this + 220) = 0;
}
