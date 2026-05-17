/*
 * XREFs of RtlpFcStartSubscriptionManager @ 0x180059B2C
 * Callers:
 *     RtlpFcEnsureSubscriptionManagerStarted @ 0x180059A04 (RtlpFcEnsureSubscriptionManagerStarted.c)
 * Callees:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x180059C2C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlQueryWnfStateData @ 0x18005A3B0 (RtlQueryWnfStateData.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 */

__int64 RtlpFcStartSubscriptionManager()
{
  __int64 result; // rax
  int v1; // [rsp+50h] [rbp-28h] BYREF
  __int128 v2; // [rsp+58h] [rbp-20h] BYREF

  v2 = RtlpFcWnfTypeId;
  result = RtlQueryWnfStateData(
             (unsigned int)&v1,
             WNF_CMFC_FEATURE_CONFIGURATION_CHANGED,
             (unsigned int)RtlpFcNoopCallback,
             0,
             (__int64)&v2);
  if ( (int)result >= 0 )
    return RtlpSubscribeWnfStateChangeNotificationInternal(
             (unsigned int)&unk_180178C28,
             WNF_CMFC_FEATURE_CONFIGURATION_CHANGED,
             v1,
             (unsigned int)RtlpFcWnfCallback,
             (__int64)&RtlpFcProcessManager,
             0LL,
             0,
             4,
             17);
  return result;
}
