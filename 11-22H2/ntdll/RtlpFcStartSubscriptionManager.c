/*
 * XREFs of RtlpFcStartSubscriptionManager @ 0x18005B990
 * Callers:
 *     RtlpFcEnsureSubscriptionManagerStarted @ 0x18005B660 (RtlpFcEnsureSubscriptionManagerStarted.c)
 * Callees:
 *     RtlQueryWnfStateData @ 0x18005BB10 (RtlQueryWnfStateData.c)
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18005BC2C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 */

NTSTATUS RtlpFcStartSubscriptionManager()
{
  NTSTATUS result; // eax
  ULONG ChangeStamp; // [rsp+50h] [rbp-28h] BYREF
  _WNF_TYPE_ID TypeId; // [rsp+58h] [rbp-20h] BYREF

  TypeId = (_WNF_TYPE_ID)RtlpFcWnfTypeId;
  result = RtlQueryWnfStateData(&ChangeStamp, WNF_CMFC_FEATURE_CONFIGURATION_CHANGED, RtlpFcNoopCallback, 0LL, &TypeId);
  if ( result >= 0 )
    return RtlpSubscribeWnfStateChangeNotificationInternal(
             (unsigned int)&unk_180182EA8,
             WNF_CMFC_FEATURE_CONFIGURATION_CHANGED.Data[0],
             ChangeStamp,
             (unsigned int)&RtlpFcWnfCallback,
             (__int64)&RtlpFcProcessManager,
             0LL,
             0,
             4,
             17);
  return result;
}
