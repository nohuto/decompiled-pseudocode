/*
 * XREFs of CmFcpManagerArmFeatureUsageProviderFlushNotification @ 0x140419F5C
 * Callers:
 *     RtlArmFeatureUsageProviderFlushNotification @ 0x1404117C0 (RtlArmFeatureUsageProviderFlushNotification.c)
 *     CmFcManagerRecordFeatureUsage @ 0x140419DE8 (CmFcManagerRecordFeatureUsage.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x14020B9A0 (ObGetCurrentIrql.c)
 *     KeInsertQueueDpc @ 0x140254830 (KeInsertQueueDpc.c)
 *     CmFcpManagerArmFeatureUsageProviderFlushTimer @ 0x140419FE0 (CmFcpManagerArmFeatureUsageProviderFlushTimer.c)
 */

void __fastcall CmFcpManagerArmFeatureUsageProviderFlushNotification(__int64 a1, char a2, unsigned int a3)
{
  unsigned __int8 CurrentIrql; // al
  char v5; // al
  char v6; // bl

  if ( (a2 & 1) != 0 )
  {
    CurrentIrql = ObGetCurrentIrql();
    if ( CurrentIrql >= 2u )
    {
      if ( CurrentIrql < 0xFu )
        a3 |= 4u;
    }
    else
    {
      a3 |= 2u;
    }
  }
  if ( a3 )
  {
    _m_prefetchw(&dword_140C14680);
    v5 = _InterlockedOr(&dword_140C14680, a3);
    v6 = ~v5 & a3;
    if ( (v6 & 2) != 0 )
    {
      CmFcpManagerArmFeatureUsageProviderFlushTimer(CmFcSystemManager);
    }
    else if ( (v6 & 4) != 0 && (v5 & 2) == 0 )
    {
      KeInsertQueueDpc(&stru_140C14530, 0LL, 0LL);
    }
  }
}
