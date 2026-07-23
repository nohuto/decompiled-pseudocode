/*
 * XREFs of RtlQueryFeatureUsageNotificationSubscriptions @ 0x180070D20
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x180070F10 (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x18007130C (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet @ 0x18012E008 (RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet.c)
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
    RtlpFcBufferManagerDereferenceBuffers(&unk_180182DE8, v6);
  return AllFeatureUsageSubscriptionNotificationsFromBufferSet;
}
