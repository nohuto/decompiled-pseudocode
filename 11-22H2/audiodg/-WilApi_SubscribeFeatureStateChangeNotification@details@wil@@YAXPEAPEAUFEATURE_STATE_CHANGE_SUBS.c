/*
 * XREFs of ?WilApi_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x140059E90
 * Callers:
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_details_FeatureReportingCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x14002A9A8 (-RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_detail.c)
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x140058CE8 (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
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
