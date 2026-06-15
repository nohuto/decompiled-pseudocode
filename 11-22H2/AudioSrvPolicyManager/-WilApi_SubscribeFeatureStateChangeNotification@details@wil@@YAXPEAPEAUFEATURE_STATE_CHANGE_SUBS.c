/*
 * XREFs of ?WilApi_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x18003A924
 * Callers:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@EnabledStateManager@details@wil@@QEAAIXZ @ 0x1800355AC (-EnsureSubscribedToFeatureConfigurationChanges@EnabledStateManager@details@wil@@QEAAIXZ.c)
 *     ?EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z @ 0x1800356E4 (-EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::WilApi_SubscribeFeatureStateChangeNotification(
        wil::details *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **a2,
        void (*a3)(void *),
        void *a4)
{
  void (*v4)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **, void (*)(void *), void *); // rax

  v4 = g_wil_details_internalSubscribeFeatureStateChangeNotification;
  if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
    || (v4 = g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
  {
    ((void (__fastcall *)(wil::details *, struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **, void (*)(void *), void *))v4)(
      this,
      a2,
      a3,
      a4);
  }
  else
  {
    *(_QWORD *)this = 0LL;
  }
}
