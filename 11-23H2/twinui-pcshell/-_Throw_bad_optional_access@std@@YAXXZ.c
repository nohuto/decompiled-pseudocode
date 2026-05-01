/*
 * XREFs of ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1803A45A8
 * Callers:
 *     ?IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x180061910 (-IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NX.c)
 *     ?CommitInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18009D174 (-CommitInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV-$unique_any_t@V-$unique_storage@.c)
 *     std::optional__anonymous_namespace_::DashboardExtensionVersion_::value @ 0x1801BBA18 (std--optional__anonymous_namespace_--DashboardExtensionVersion_--value.c)
 *     ?value@?$optional@VPinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@@std@@QEGAAAEAVPinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@XZ @ 0x1802534D0 (-value@-$optional@VPinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@@std@@QEGAAAEAVPinMan.c)
 *     ??$process@AEAU_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@input_archive@tson@@AEAAXAEAU_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@Z @ 0x18028C0FC (--$process@AEAU_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windo.c)
 *     ??$serialize@Voutput_archive@tson@@@_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x18028C324 (--$serialize@Voutput_archive@tson@@@_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups.c)
 *     ?ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x18040F4D0 (-ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt.c)
 *     ?value@?$optional@_N@std@@QEGAAAEA_NXZ @ 0x180413180 (-value@-$optional@_N@std@@QEGAAAEA_NXZ.c)
 *     ?OnPrimaryViewSystemLevelShowRequested@TabTipAdapter@KeyboardHosting@@QEAAJPEA_NAEBUhstring@winrt@@V?$optional@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@std@@@Z @ 0x180527DF8 (-OnPrimaryViewSystemLevelShowRequested@TabTipAdapter@KeyboardHosting@@QEAAJPEA_NAEBUhstring@winr.c)
 *     ?ApplySizeConstraints@JointResize@@AEAAXXZ @ 0x1805E1970 (-ApplySizeConstraints@JointResize@@AEAAXXZ.c)
 *     ?GetInvokeTypeFromContextAndAnimationProperties@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@UShellViewAnimationProperties@3UI@WindowsUdk@6@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1806962D8 (-GetInvokeTypeFromContextAndAnimationProperties@DashboardManager@implementation@Shell@Internal@W.c)
 *     ?IsDashboardExtensionVersionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180697178 (-IsDashboardExtensionVersionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt.c)
 *     ?value@?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@QEGAAAEAW4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@XZ @ 0x180698FD0 (-value@-$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@QEGAAAEAW4Das.c)
 *     ?value@?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@QEGBAAEBW4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@XZ @ 0x180698FF0 (-value@-$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@QEGBAAEBW4Das.c)
 *     ?value@?$optional@V?$variant@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@std@@@std@@QEGBAAEBV?$variant@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@2@XZ @ 0x1806AE8C0 (-value@-$optional@V-$variant@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHBITMAP__@.c)
 *     api_alchemy_config::_anonymous_namespace_::specifiers::specifiers_0 @ 0x1806E1524 (api_alchemy_config--_anonymous_namespace_--specifiers--specifiers_0.c)
 *     ?InitConfig@api_alchemy_config@@YAXV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0Uapi_spec@api_alchemy@@@Z @ 0x1806E2BA0 (-InitConfig@api_alchemy_config@@YAXV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     ?GetAppThatWasDeleted@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$optional@Uhstring@winrt@@@std@@PEAUHKEY__@@PEBG@Z @ 0x1806F2848 (-GetAppThatWasDeleted@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$op.c)
 *     ?RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4RegistryChangeKind@wil@@PEAUHKEY__@@PEBGAEAV?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@8@@Z @ 0x1806F5924 (-RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4R.c)
 *     ?evaluate@_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x180785898 (-evaluate@_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@wi.c)
 *     ?value@?$optional@W4PinOperation@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@std@@QEGAAAEAW4PinOperation@TIP@TaskGroups@Shell@Internal@Windows@winrt@@XZ @ 0x180785E30 (-value@-$optional@W4PinOperation@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@std@@QEGAAAEAW4Pi.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 */

void __noreturn std::_Throw_bad_optional_access(void)
{
  void **pExceptionObject; // [rsp+20h] [rbp-28h] BYREF
  __int128 v1; // [rsp+28h] [rbp-20h]

  pExceptionObject = &std::bad_optional_access::`vftable';
  v1 = 0LL;
  throw (std::bad_optional_access *)&pExceptionObject;
}
