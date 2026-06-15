/*
 * XREFs of __tailMerge_api_ms_win_core_featurestaging_l1_1_0_dll @ 0x1800681C4
 * Callers:
 *     __imp_load_GetFeatureEnabledState @ 0x1800681B8 (__imp_load_GetFeatureEnabledState.c)
 *     __imp_load_RecordFeatureUsage @ 0x180068250 (__imp_load_RecordFeatureUsage.c)
 *     __imp_load_RecordFeatureError @ 0x180068270 (__imp_load_RecordFeatureError.c)
 *     __imp_load_SubscribeFeatureStateChangeNotification @ 0x180068290 (__imp_load_SubscribeFeatureStateChangeNotification.c)
 *     __imp_load_UnsubscribeFeatureStateChangeNotification @ 0x1800682B0 (__imp_load_UnsubscribeFeatureStateChangeNotification.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180054FA0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_core_featurestaging_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_core_featurestaging_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
