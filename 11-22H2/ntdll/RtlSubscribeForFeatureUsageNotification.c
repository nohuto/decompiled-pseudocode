/*
 * XREFs of RtlSubscribeForFeatureUsageNotification @ 0x18010EA30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlSubscribeForFeatureUsageNotification(
        PRTL_FEATURE_USAGE_SUBSCRIPTION_DETAILS SubscriptionDetails,
        SIZE_T SubscriptionCount)
{
  return RtlpFcUpdateUsageSubscriptions(SubscriptionDetails, SubscriptionCount, 0LL);
}
