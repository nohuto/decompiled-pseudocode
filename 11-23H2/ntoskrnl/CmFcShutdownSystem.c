/*
 * XREFs of CmFcShutdownSystem @ 0x140A11C48
 * Callers:
 *     CmShutdownSystem0 @ 0x140615B9C (CmShutdownSystem0.c)
 *     CmShutdownSystem1 @ 0x140615BC4 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x140615E1C (CmShutdownSystem2.c)
 * Callees:
 *     TlgAggregateFlush @ 0x140677300 (TlgAggregateFlush.c)
 *     CmFcManagerPublishAllFeatureUsageData @ 0x14067F778 (CmFcManagerPublishAllFeatureUsageData.c)
 *     CmFcManagerDrainAllFeatureUsageNotifications @ 0x140A26D60 (CmFcManagerDrainAllFeatureUsageNotifications.c)
 */

void __fastcall CmFcShutdownSystem(int a1)
{
  if ( a1 == 1 )
  {
    CmFcManagerDrainAllFeatureUsageNotifications();
    if ( !PopShutdownCleanly )
      CmFcManagerPublishAllFeatureUsageData();
    TlgAggregateFlush((__int64)&dword_140C04390);
  }
}
