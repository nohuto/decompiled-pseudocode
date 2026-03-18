/*
 * XREFs of RtlArmFeatureUsageProviderFlushNotification @ 0x140411580
 * Callers:
 *     <none>
 * Callees:
 *     CmFcpManagerArmFeatureUsageProviderFlushNotification @ 0x140419BCC (CmFcpManagerArmFeatureUsageProviderFlushNotification.c)
 */

__int64 __fastcall RtlArmFeatureUsageProviderFlushNotification(__int64 a1, __int64 a2)
{
  _m_prefetchw((const void *)(a1 + 104));
  return CmFcpManagerArmFeatureUsageProviderFlushNotification(
           a1,
           a2,
           (_InterlockedOr((volatile signed __int32 *)(a1 + 104), 1u) & 1) == 0);
}
