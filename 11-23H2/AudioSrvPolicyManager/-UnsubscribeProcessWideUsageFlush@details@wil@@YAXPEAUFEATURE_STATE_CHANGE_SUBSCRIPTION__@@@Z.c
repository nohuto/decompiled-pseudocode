/*
 * XREFs of ?UnsubscribeProcessWideUsageFlush@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x180039934
 * Callers:
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x180013A84 (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 * Callees:
 *     ?Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x1800398A0 (-Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSC.c)
 */

void __fastcall wil::details::UnsubscribeProcessWideUsageFlush(
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *a2)
{
  if ( this )
  {
    if ( qword_1800600B0 )
      wil::details_abi::SubscriptionList::Unsubscribe(
        (struct _RTL_CRITICAL_SECTION *)qword_1800600B0 + 5,
        (RTL_SRWLOCK *)qword_1800600B0,
        this);
  }
}
