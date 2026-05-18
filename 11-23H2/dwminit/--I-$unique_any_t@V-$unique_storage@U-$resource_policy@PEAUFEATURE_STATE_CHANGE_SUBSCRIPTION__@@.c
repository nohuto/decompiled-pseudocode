/*
 * XREFs of ??I?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAU1@@Z$1?WilApi_UnsubscribeFeatureStateChangeNotification@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@XZ @ 0x180004918
 * Callers:
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x180005674 (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x18000D9FC (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18000F9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<FEATURE_STATE_CHANGE_SUBSCRIPTION__ *,void (*)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *),&void wil::details::WilApi_UnsubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *),wistd::integral_constant<unsigned __int64,0>,FEATURE_STATE_CHANGE_SUBSCRIPTION__ *,FEATURE_STATE_CHANGE_SUBSCRIPTION__ *,0,std::nullptr_t>>>::operator&(
        __int64 *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rdx
  DWORD LastError; // esi

  v1 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    if ( g_wil_details_internalUnsubscribeFeatureStateChangeNotification )
    {
      g_wil_details_internalUnsubscribeFeatureStateChangeNotification(v1);
    }
    else if ( g_wil_details_apiUnsubscribeFeatureStateChangeNotification )
    {
      g_wil_details_apiUnsubscribeFeatureStateChangeNotification(v1, v3);
    }
    SetLastError(LastError);
  }
  *a1 = 0LL;
  return a1;
}
