/*
 * XREFs of RtlpFcEnsureSubscriptionManagerStarted @ 0x18005B660
 * Callers:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x18005B550 (RtlRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     RtlRunOnceBeginInitialize @ 0x18005B6C0 (RtlRunOnceBeginInitialize.c)
 *     RtlpFcStartSubscriptionManager @ 0x18005B990 (RtlpFcStartSubscriptionManager.c)
 *     RtlRunOnceComplete @ 0x18005BA40 (RtlRunOnceComplete.c)
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
