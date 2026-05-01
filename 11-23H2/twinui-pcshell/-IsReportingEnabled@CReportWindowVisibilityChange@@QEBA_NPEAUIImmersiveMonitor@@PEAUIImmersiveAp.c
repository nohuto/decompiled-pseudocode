/*
 * XREFs of ?IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180020560
 * Callers:
 *     ?ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x18001FAA0 (-ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAU.c)
 *     ?s_IsVisibilityOverrideOn@CImmersiveApp@@SA_NPEAV1@@Z @ 0x180020430 (-s_IsVisibilityOverrideOn@CImmersiveApp@@SA_NPEAV1@@Z.c)
 *     ?IsApplicationInteractive@CImmersiveApp@@UEAA_NXZ @ 0x1800204C0 (-IsApplicationInteractive@CImmersiveApp@@UEAA_NXZ.c)
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180021550 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_DATA@@W4MonitorChangeOptions@@@Z @ 0x18005EF10 (-SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_D.c)
 *     ?ReportVisibilityOverride@CImmersiveApp@@UEAA_NW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@W4OVERRIDE_IMMUNITY_CHANGE@@W4ReportVisibilityOverrideOptions@@@Z @ 0x1802D0FD0 (-ReportVisibilityOverride@CImmersiveApp@@UEAA_NW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE.c)
 *     ?RefreshMonitorMappings@CApplicationManager@@UEAAJXZ @ 0x18039E830 (-RefreshMonitorMappings@CApplicationManager@@UEAAJXZ.c)
 *     ?ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x1803A58DC (-ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImme.c)
 *     ?OnOverrideImmunityChanged@CImmersiveWindowManager@@UEAAXPEAUIImmersiveApplicationInternal@@W4SESSION_IDLE_STATE@@W4OVERRIDE_IMMUNITY_CHANGE@@@Z @ 0x1803A7750 (-OnOverrideImmunityChanged@CImmersiveWindowManager@@UEAAXPEAUIImmersiveApplicationInternal@@W4SE.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CReportWindowVisibilityChange::IsReportingEnabled(
        CReportWindowVisibilityChange *this,
        struct IUnknown *a2,
        struct IUnknown *a3)
{
  __int64 v6; // rbp
  struct IUnknown **v7; // r14
  struct IUnknown **v8; // rsi
  bool v12; // bl
  struct IUnknown *v13; // [rsp+50h] [rbp+8h] BYREF
  struct IUnknown **v14; // [rsp+60h] [rbp+18h]

  v6 = *((_QWORD *)this + 1);
  if ( !a3 )
    goto LABEL_4;
  v7 = (struct IUnknown **)*((_QWORD *)this + 7);
  v8 = (struct IUnknown **)*((_QWORD *)this + 6);
  if ( v8 != v7 )
  {
    v14 = &v13;
    do
    {
      v13 = *v8;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
      v12 = (unsigned int)SHIsSameObject(a3, v13) != 0;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
      if ( v12 )
        break;
      ++v8;
    }
    while ( v8 != v7 );
  }
  if ( v8 != *((struct IUnknown ***)this + 7) )
    return 1;
LABEL_4:
  if ( v6 )
    return *(_DWORD *)(*(_QWORD *)this + 4 * v6 - 4) == 1;
  if ( *((_DWORD *)this + 8) && (unsigned int)SHIsSameObject(a2, *((struct IUnknown **)this + 5)) )
    return *((_DWORD *)this + 8) == 1;
  return *((_DWORD *)this + 9) == 1;
}
