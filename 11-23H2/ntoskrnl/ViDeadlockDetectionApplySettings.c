/*
 * XREFs of ViDeadlockDetectionApplySettings @ 0x140AD8DAC
 * Callers:
 *     ViDeadlockPluginUnload @ 0x1405D1D80 (ViDeadlockPluginUnload.c)
 *     VfDeadlockInitialize @ 0x140AD749C (VfDeadlockInitialize.c)
 *     VfDeadlockPluginEntry @ 0x140AD78E8 (VfDeadlockPluginEntry.c)
 *     VfSettingsCheckForChanges @ 0x140ADADC4 (VfSettingsCheckForChanges.c)
 * Callees:
 *     ViLowerIrql @ 0x1405D2028 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x1405D20A0 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockDetectionLock @ 0x140AD8DF8 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x140AD8E30 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockEmptyDatabase @ 0x140AD8E60 (ViDeadlockEmptyDatabase.c)
 */

__int64 __fastcall ViDeadlockDetectionApplySettings(int a1)
{
  unsigned __int8 v1; // bl

  if ( !a1 )
    return ViDeadlockEmptyDatabase();
  v1 = ViRaiseIrqlToDpcLevel();
  ViDeadlockDetectionLock(1LL);
  ViDeadlockDetectionEnabled = 1;
  ViDeadlockDetectionUnlock(1LL);
  return ViLowerIrql(v1);
}
