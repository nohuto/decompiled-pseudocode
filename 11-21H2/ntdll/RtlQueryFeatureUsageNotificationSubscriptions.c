/*
 * XREFs of RtlQueryFeatureUsageNotificationSubscriptions @ 0x180076330
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x18007674C (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x180076890 (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet @ 0x18012A0B4 (RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet.c)
 */

NTSTATUS __cdecl RtlQueryFeatureUsageNotificationSubscriptions(
        PRTL_FEATURE_USAGE_SUBSCRIPTION_DETAILS Subscriptions,
        PSIZE_T SubscriptionCount)
{
  PSIZE_T v2; // rsi
  NTSTATUS AllFeatureUsageSubscriptionNotificationsFromBufferSet; // ebx
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  v2 = SubscriptionCount;
  LOBYTE(SubscriptionCount) = 1;
  v6 = 0LL;
  AllFeatureUsageSubscriptionNotificationsFromBufferSet = RtlpFcReferenceFeatureConfigurationBuffers(
                                                            Subscriptions,
                                                            SubscriptionCount,
                                                            &v7,
                                                            &v6);
  if ( AllFeatureUsageSubscriptionNotificationsFromBufferSet >= 0 )
  {
    AllFeatureUsageSubscriptionNotificationsFromBufferSet = RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet(
                                                              v6,
                                                              Subscriptions,
                                                              v2);
    if ( AllFeatureUsageSubscriptionNotificationsFromBufferSet >= 0 )
      AllFeatureUsageSubscriptionNotificationsFromBufferSet = 0;
  }
  if ( v6 )
    RtlpFcBufferManagerDereferenceBuffers(&unk_180178B68, v6);
  return AllFeatureUsageSubscriptionNotificationsFromBufferSet;
}
