/*
 * XREFs of RtlUnsubscribeFromFeatureUsageNotifications @ 0x18010FEF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUnsubscribeFromFeatureUsageNotifications(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  return RtlpFcUpdateUsageSubscriptions(a1, a2, a3);
}
