/*
 * XREFs of RtlpFcEnsureSubscriptionManagerStarted @ 0x180060E30
 * Callers:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x180060D20 (RtlRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     RtlRunOnceBeginInitialize @ 0x180060E90 (RtlRunOnceBeginInitialize.c)
 *     RtlpFcStartSubscriptionManager @ 0x180061160 (RtlpFcStartSubscriptionManager.c)
 *     RtlRunOnceComplete @ 0x180061210 (RtlRunOnceComplete.c)
 */

__int64 RtlpFcEnsureSubscriptionManagerStarted()
{
  unsigned int v0; // ebx
  int started; // eax
  __int64 v3; // rdx

  v0 = RtlRunOnceBeginInitialize(&qword_180185EE0, 0LL, 0LL);
  if ( v0 )
  {
    started = RtlpFcStartSubscriptionManager();
    v3 = 4LL;
    v0 = started;
    if ( started >= 0 )
      v3 = 0LL;
    RtlRunOnceComplete(&qword_180185EE0, v3);
  }
  return v0;
}
