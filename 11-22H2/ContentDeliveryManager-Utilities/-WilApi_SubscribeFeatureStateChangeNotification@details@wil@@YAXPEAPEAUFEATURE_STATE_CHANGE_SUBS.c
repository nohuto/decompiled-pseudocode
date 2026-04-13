/*
 * XREFs of ?WilApi_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x180042280
 * Callers:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@EnabledStateManager@details@wil@@QEAAIXZ @ 0x180031728 (-EnsureSubscribedToFeatureConfigurationChanges@EnabledStateManager@details@wil@@QEAAIXZ.c)
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_details_FeatureReportingCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x18003B7C8 (-RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_detail.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::WilApi_SubscribeFeatureStateChangeNotification(
        wil::details *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **a2,
        void (*a3)(void *),
        void *a4)
{
  void (__fastcall *v4)(wil::details *, struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **, void (*)(void *), void *); // rax

  v4 = (void (__fastcall *)(wil::details *, struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **, void (*)(void *), void *))g_wil_details_internalSubscribeFeatureStateChangeNotification;
  if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
    || (v4 = (void (__fastcall *)(wil::details *, struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **, void (*)(void *), void *))g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
  {
    v4(this, a2, a3, a4);
  }
  else
  {
    *(_QWORD *)this = 0LL;
  }
}
