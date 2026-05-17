/*
 * XREFs of RtlSubscribeForFeatureUsageNotification @ 0x18010E800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSubscribeForFeatureUsageNotification(__int64 a1, __int64 a2)
{
  return RtlpFcUpdateUsageSubscriptions(a1, a2, 0LL);
}
