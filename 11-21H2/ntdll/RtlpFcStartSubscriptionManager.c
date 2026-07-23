/*
 * XREFs of RtlpFcStartSubscriptionManager @ 0x180059B2C
 * Callers:
 *     RtlpFcEnsureSubscriptionManagerStarted @ 0x180059A04 (RtlpFcEnsureSubscriptionManagerStarted.c)
 * Callees:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x180059C2C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlQueryWnfStateData @ 0x18005A3B0 (RtlQueryWnfStateData.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
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
             (unsigned int)&unk_180178C28,
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
