/*
 * XREFs of wil::details::_dynamic_initializer_for__g_header_init_InitializeStagingHeaderInternalApi__ @ 0x180001970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void (__fastcall *wil::details::_dynamic_initializer_for__g_header_init_InitializeStagingHeaderInternalApi__())(unsigned int, unsigned int, unsigned __int8)
{
  void (__fastcall *result)(unsigned int, unsigned int, unsigned __int8); // rax

  g_wil_details_internalGetFeatureEnabledState = (enum FEATURE_ENABLED_STATE (*)(unsigned int, enum FEATURE_CHANGE_TIME, int *))wil::details::WilApiImpl_GetFeatureEnabledState;
  g_wil_details_internalRecordFeatureUsage = (void (*)(unsigned int, unsigned int, unsigned int, const char *))wil::details::WilApiImpl_RecordFeatureUsage;
  g_wil_details_internalSubscribeFeatureStateChangeNotification = (void (*)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **, void (*)(void *), void *))wil::details::WilApiImpl_SubscribeFeatureStateChangeNotification;
  g_wil_details_internalUnsubscribeFeatureStateChangeNotification = (void (*)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *))wil::details::WilApiImpl_UnsubscribeFeatureStateChangeNotification;
  result = wil_StagingConfig_LogStagedFeatureUsage;
  g_wil_details_realtimeFeatureUsageHook = (void (*)(unsigned int, unsigned int, unsigned __int8))wil_StagingConfig_LogStagedFeatureUsage;
  return result;
}
