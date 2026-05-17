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
  unsigned int v0; // ebx
  int started; // eax
  __int64 v3; // rdx

  v0 = RtlRunOnceBeginInitialize(&qword_180182EA0, 0LL, 0LL);
  if ( v0 )
  {
    started = RtlpFcStartSubscriptionManager();
    v3 = 4LL;
    v0 = started;
    if ( started >= 0 )
      v3 = 0LL;
    RtlRunOnceComplete(&qword_180182EA0, v3);
  }
  return v0;
}
