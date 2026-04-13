/*
 * XREFs of ?WilApiImpl_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x180047360
 * Callers:
 *     <none>
 * Callees:
 *     ?Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x180046EEC (-Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSC.c)
 */

void __fastcall wil::details::WilApiImpl_UnsubscribeFeatureStateChangeNotification(
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *a2)
{
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v2; // r8
  struct _RTL_CRITICAL_SECTION *v3; // rcx

  if ( ((unsigned int)this & 0x80000000) != 0 )
  {
    if ( !wil::details::g_featureStateManager )
      return;
    v2 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)((unsigned __int64)this & 0xFFFFFFFF7FFFFFFFuLL);
    v3 = &stru_1801AD890;
  }
  else
  {
    if ( !wil::details::g_featureStateManager )
      return;
    v2 = this;
    v3 = &CriticalSection;
  }
  wil::details_abi::SubscriptionList::Unsubscribe(v3, &stru_1801AD818, v2);
}
