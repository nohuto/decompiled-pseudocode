/*
 * XREFs of RtlpFcEnsureSubscriptionManagerStarted @ 0x180059A04
 * Callers:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x1800598A0 (RtlRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     RtlRunOnceComplete @ 0x1800154F0 (RtlRunOnceComplete.c)
 *     RtlRunOnceBeginInitialize @ 0x180059A60 (RtlRunOnceBeginInitialize.c)
 *     RtlpFcStartSubscriptionManager @ 0x180059B2C (RtlpFcStartSubscriptionManager.c)
 */

__int64 RtlpFcEnsureSubscriptionManagerStarted()
{
  unsigned __int32 v0; // ebx
  int started; // eax
  ULONG v3; // edx

  v0 = RtlRunOnceBeginInitialize(&RunOnce, 0, 0LL);
  if ( v0 )
  {
    started = RtlpFcStartSubscriptionManager();
    v3 = 4;
    v0 = started;
    if ( started >= 0 )
      v3 = 0;
    RtlRunOnceComplete(&RunOnce, v3, 0LL);
  }
  return v0;
}
