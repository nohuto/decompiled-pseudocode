/*
 * XREFs of ?IsBamoEnabled@@YA_NXZ @ 0x1800D2E84
 * Callers:
 *     ?UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIActivationRequestedEventArgs@WindowManagement@ApplicationModel@56@@Z @ 0x18009D834 (-UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLife.c)
 *     ?TryPushWindowResizingState@UwpWindowWrapperBase@@AEAAXXZ @ 0x1800A0E34 (-TryPushWindowResizingState@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     ??0UwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@W4AppModelKind@WindowManagement@ApplicationModel@56@UUwpWindowContextId@3456@PEAUIWindow@9ApplicationModel@56@UWindowId@9ApplicationModel@56@PEBGW4WindowCreatedType@@_K@Z @ 0x1800A1100 (--0UwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindow.c)
 *     ?RuntimeClassInitialize@UwpWindowManagerBridge@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@@Z @ 0x1800A44BC (-RuntimeClassInitialize@UwpWindowManagerBridge@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@@Z.c)
 *     ?PushWindowVisibility@UwpWindowManagerBridge@@AEAAXPEAUIUwpWindowWrapperInternal@@_N@Z @ 0x1800D4BF8 (-PushWindowVisibility@UwpWindowManagerBridge@@AEAAXPEAUIUwpWindowWrapperInternal@@_N@Z.c)
 *     ?RuntimeClassInitialize@UwpWindowEventDispatcher@@QEAAJXZ @ 0x1800E62B8 (-RuntimeClassInitialize@UwpWindowEventDispatcher@@QEAAJXZ.c)
 *     ?Uninitialize@UwpWindowManagerBridge@@UEAAXXZ @ 0x180177540 (-Uninitialize@UwpWindowManagerBridge@@UEAAXXZ.c)
 *     ?OnUwpWindowEnumerationCompleted@UwpWindowManagerBridge@@AEAAJPEAUIUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1801776B0 (-OnUwpWindowEnumerationCompleted@UwpWindowManagerBridge@@AEAAJPEAUIUwpWindowLifecycleWatcher@Uwp.c)
 *     ?OnWindowEnumerationCompleted@UwpWindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180177730 (-OnWindowEnumerationCompleted@UwpWindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@A.c)
 *     ?StartWindowWatcher@UwpWindowManagerBridge@@UEAAJXZ @ 0x1801997B0 (-StartWindowWatcher@UwpWindowManagerBridge@@UEAAJXZ.c)
 *     ?ApplyPresenter@UwpWindowWrapperBase@@UEAAJW4ApplicationWindowPresenterKindInternal@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Z @ 0x1804F0AD0 (-ApplyPresenter@UwpWindowWrapperBase@@UEAAJW4ApplicationWindowPresenterKindInternal@WindowingEnv.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_BamoWMOnDesktop@@@details@wil@@QEAA_NXZ @ 0x1800D2C6C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_BamoWMOnDesktop@@@details@wil@@QE.c)
 *     ?IsWindowManagementInProcEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x1800D2ED8 (-IsWindowManagementInProcEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ParentBamoMoveUwlm@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800D3164 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ParentBamoMoveUwlm@@@details@wil@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ParentBamoMoveUwlm@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800D326C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ParentBamoMoveUwlm@@@details@wil@@QEAAX_N.c)
 */

char IsBamoEnabled(void)
{
  char v0; // bl
  __int64 v1; // rdx
  __int64 v2; // r8
  Windows::Internal::ApplicationModel::WindowManagement *v3; // rcx

  v0 = 1;
  LOBYTE(v1) = (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ParentBamoMoveUwlm>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ParentBamoMoveUwlm>::GetImpl'::`2'::impl) != 0;
  LOBYTE(v2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ParentBamoMoveUwlm>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_ParentBamoMoveUwlm>::GetImpl'::`2'::impl,
    v1,
    v2);
  if ( !Windows::Internal::ApplicationModel::WindowManagement::IsWindowManagementInProcEnabled(v3)
    || !wil::details::FeatureImpl<__WilFeatureTraits_Feature_BamoWMOnDesktop>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_BamoWMOnDesktop>::GetImpl'::`2'::impl) )
  {
    return 0;
  }
  return v0;
}
