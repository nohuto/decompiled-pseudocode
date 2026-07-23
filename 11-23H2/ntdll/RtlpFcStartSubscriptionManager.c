/*
 * XREFs of RtlpFcStartSubscriptionManager @ 0x180061160
 * Callers:
 *     RtlpFcEnsureSubscriptionManagerStarted @ 0x180060E30 (RtlpFcEnsureSubscriptionManagerStarted.c)
 * Callees:
 *     RtlQueryWnfStateData @ 0x1800612E0 (RtlQueryWnfStateData.c)
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x1800613FC (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
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
             (unsigned int)&unk_180185EE8,
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
