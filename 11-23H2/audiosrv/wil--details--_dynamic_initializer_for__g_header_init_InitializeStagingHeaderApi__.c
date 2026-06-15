/*
 * XREFs of wil::details::_dynamic_initializer_for__g_header_init_InitializeStagingHeaderApi__ @ 0x180001270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void (__fastcall *wil::details::_dynamic_initializer_for__g_header_init_InitializeStagingHeaderApi__())(wil::details *__hidden this, unsigned int, unsigned int, unsigned __int8)
{
  void (__fastcall *result)(wil::details *__hidden, unsigned int, unsigned int, unsigned __int8); // rax

  g_wil_details_apiGetFeatureEnabledState = (__int64)wil::details::GetFeatureEnabledStateHelper;
  g_wil_details_apiRecordFeatureUsage = (__int64)RecordFeatureUsage;
  g_wil_details_apiRecordFeatureError = (__int64)RecordFeatureError;
  g_wil_details_apiSubscribeFeatureStateChangeNotification = (__int64)SubscribeFeatureStateChangeNotification;
  g_wil_details_apiUnsubscribeFeatureStateChangeNotification = (__int64)UnsubscribeFeatureStateChangeNotification;
  result = wil::details::LogStagedFeatureUsage;
  g_wil_details_realtimeFeatureUsageHook = (__int64)wil::details::LogStagedFeatureUsage;
  return result;
}
