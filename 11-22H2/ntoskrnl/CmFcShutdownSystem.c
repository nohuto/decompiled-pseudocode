/*
 * XREFs of CmFcShutdownSystem @ 0x140A11CF8
 * Callers:
 *     CmShutdownSystem0 @ 0x140615C0C (CmShutdownSystem0.c)
 *     CmShutdownSystem1 @ 0x140615C34 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x140615E8C (CmShutdownSystem2.c)
 * Callees:
 *     TlgAggregateFlush @ 0x140677370 (TlgAggregateFlush.c)
 *     CmFcManagerPublishAllFeatureUsageData @ 0x14067F778 (CmFcManagerPublishAllFeatureUsageData.c)
 *     CmFcManagerDrainAllFeatureUsageNotifications @ 0x140A26E10 (CmFcManagerDrainAllFeatureUsageNotifications.c)
 */

void __fastcall CmFcShutdownSystem(int a1)
{
  if ( a1 == 1 )
  {
    CmFcManagerDrainAllFeatureUsageNotifications();
    if ( !PopShutdownCleanly )
      CmFcManagerPublishAllFeatureUsageData();
    TlgAggregateFlush((__int64)&dword_140C04358);
  }
}
