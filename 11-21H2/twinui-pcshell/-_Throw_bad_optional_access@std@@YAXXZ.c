/*
 * XREFs of ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1802EBABC
 * Callers:
 *     ?CommitInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180151010 (-CommitInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV-$unique_any_t@V-$unique_storage@.c)
 *     ?GetTaskbarTelemetryFromContext@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@9@@Z @ 0x1801C836C (-GetTaskbarTelemetryFromContext@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AE.c)
 *     std::optional__anonymous_namespace_::DashboardExtensionVersion_::value @ 0x1801D0148 (std--optional__anonymous_namespace_--DashboardExtensionVersion_--value.c)
 *     ?value@?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@QEGAAAEAW4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@XZ @ 0x1801D0168 (-value@-$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@QEGAAAEAW4Das.c)
 *     ?value@?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@QEGBAAEBW4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@XZ @ 0x1801D0188 (-value@-$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@QEGBAAEBW4Das.c)
 *     ?ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x180341874 (-ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt.c)
 *     ?ApplySizeConstraints@JointResize@@AEAAXXZ @ 0x180527CB8 (-ApplySizeConstraints@JointResize@@AEAAXXZ.c)
 *     api_alchemy_config::_anonymous_namespace_::specifiers::specifiers_0 @ 0x1805DD254 (api_alchemy_config--_anonymous_namespace_--specifiers--specifiers_0.c)
 *     ?InitConfig@api_alchemy_config@@YAXV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0Uapi_spec@api_alchemy@@@Z @ 0x1805DDC50 (-InitConfig@api_alchemy_config@@YAXV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 */

void __noreturn std::_Throw_bad_optional_access(void)
{
  void **pExceptionObject; // [rsp+20h] [rbp-28h] BYREF
  __int128 v1; // [rsp+28h] [rbp-20h]

  pExceptionObject = &std::bad_optional_access::`vftable';
  v1 = 0LL;
  throw (std::bad_optional_access *)&pExceptionObject;
}
