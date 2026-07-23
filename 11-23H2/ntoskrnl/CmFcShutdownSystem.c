/*
 * XREFs of CmFcShutdownSystem @ 0x140A11EF8
 * Callers:
 *     CmShutdownSystem0 @ 0x1406160EC (CmShutdownSystem0.c)
 *     CmShutdownSystem1 @ 0x140616114 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x14061636C (CmShutdownSystem2.c)
 * Callees:
 *     TlgAggregateFlush @ 0x140677850 (TlgAggregateFlush.c)
 *     CmFcManagerPublishAllFeatureUsageData @ 0x14067F778 (CmFcManagerPublishAllFeatureUsageData.c)
 *     CmFcManagerDrainAllFeatureUsageNotifications @ 0x140A27010 (CmFcManagerDrainAllFeatureUsageNotifications.c)
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
