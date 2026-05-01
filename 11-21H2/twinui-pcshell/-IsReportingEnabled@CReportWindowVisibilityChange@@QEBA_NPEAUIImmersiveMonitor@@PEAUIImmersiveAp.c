/*
 * XREFs of ?IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@@Z @ 0x1800746A0
 * Callers:
 *     ?ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x18002C0A8 (-ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAU.c)
 *     ?s_IsVisibilityOverrideOn@CImmersiveApp@@SA_NPEAV1@@Z @ 0x18002F520 (-s_IsVisibilityOverrideOn@CImmersiveApp@@SA_NPEAV1@@Z.c)
 *     ?SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_DATA@@W4MonitorChangeOptions@@@Z @ 0x180075220 (-SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_D.c)
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180076880 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?ReportVisibilityOverride@CImmersiveApp@@UEAA_NW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@W4OVERRIDE_IMMUNITY_CHANGE@@W4ReportVisibilityOverrideOptions@@@Z @ 0x180187B10 (-ReportVisibilityOverride@CImmersiveApp@@UEAA_NW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE.c)
 *     ?RefreshMonitorMappings@CApplicationManager@@UEAAJXZ @ 0x1802E6840 (-RefreshMonitorMappings@CApplicationManager@@UEAAJXZ.c)
 *     ?ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x1802ECC8C (-ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImme.c)
 *     ?OnOverrideImmunityChanged@CImmersiveWindowManager@@UEAAXPEAUIImmersiveApplicationInternal@@W4SESSION_IDLE_STATE@@W4OVERRIDE_IMMUNITY_CHANGE@@@Z @ 0x1802EECA0 (-OnOverrideImmunityChanged@CImmersiveWindowManager@@UEAAXPEAUIImmersiveApplicationInternal@@W4SE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
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
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v13);
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
