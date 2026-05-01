/*
 * XREFs of ??4?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitor@@@Z @ 0x1800D5664
 * Callers:
 *     ?RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x180056E00 (-RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@PEAUIIm.c)
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x18005731C (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@_K@Z @ 0x18006E200 (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 *     ?SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_DATA@@W4MonitorChangeOptions@@@Z @ 0x180075220 (-SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_D.c)
 *     ?ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z @ 0x1800D4FC0 (-ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z.c)
 *     ?MoveToMonitor@CFallbackWindow@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x1800D55A0 (-MoveToMonitor@CFallbackWindow@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?Reinitialize@CClassicWindow@@UEAAJPEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CLASSIC_WINDOW_STATE@@@Z @ 0x18022AA40 (-Reinitialize@CClassicWindow@@UEAAJPEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CLASSIC_WINDOW_S.c)
 *     ?Show@CAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x180231DC0 (-Show@CAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@.c)
 *     ?SetMonitorOverride@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x1802E7D70 (-SetMonitorOverride@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x1804384F0 (-Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW.c)
 *     ?Show@CPPIAllUpViewHost@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x1804A6380 (-Show@CPPIAllUpViewHost@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?SetMonitorFilter@SwitchItemFilteredCollection@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@@Z @ 0x1804AB360 (-SetMonitorFilter@SwitchItemFilteredCollection@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiv.c)
 *     ?_SwitchToMonitor@CAppTransitionManager@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1804E1034 (-_SwitchToMonitor@CAppTransitionManager@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?_GetMonitorForAppSwitch@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@PEAUIImmersiveApplication@@PEAPEAU2@@Z @ 0x1804E50C0 (-_GetMonitorForAppSwitch@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@PEAUIImmersiveApplicatio.c)
 *     ?_GetMonitorForAppSwitch@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@PEBGPEAPEAU2@@Z @ 0x1804E5294 (-_GetMonitorForAppSwitch@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@PEBGPEAPEAU2@@Z.c)
 *     ShellPositionerManager::DoWorkForEachMonitor__lambda_818fa40c33a0f4ba0d57a43a0a00bca6___ @ 0x1804E9FD0 (ShellPositionerManager--DoWorkForEachMonitor__lambda_818fa40c33a0f4ba0d57a43a0a00bca6___.c)
 *     ?TargetMonitorChanged@CDragVisual@@UEAAXPEAUIImmersiveMonitor@@@Z @ 0x180533F60 (-TargetMonitorChanged@CDragVisual@@UEAAXPEAUIImmersiveMonitor@@@Z.c)
 *     ?RuntimeClassInitialize@CSnappedWindow@@QEAAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@@Z @ 0x1805AB698 (-RuntimeClassInitialize@CSnappedWindow@@QEAAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IImmersiveMonitor>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v4 = *a1;
  if ( *a1 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v4 = *a1;
    }
    v6 = v4;
    *a1 = a2;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
  }
  return a1;
}
