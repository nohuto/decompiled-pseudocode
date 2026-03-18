/*
 * XREFs of ViDeadlockDetectionApplySettings @ 0x140AD8DBC
 * Callers:
 *     ViDeadlockPluginUnload @ 0x1405D1810 (ViDeadlockPluginUnload.c)
 *     VfDeadlockInitialize @ 0x140AD74AC (VfDeadlockInitialize.c)
 *     VfDeadlockPluginEntry @ 0x140AD78F8 (VfDeadlockPluginEntry.c)
 *     VfSettingsCheckForChanges @ 0x140ADADD4 (VfSettingsCheckForChanges.c)
 * Callees:
 *     ViLowerIrql @ 0x1405D1AB8 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x1405D1B30 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockDetectionLock @ 0x140AD8E08 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x140AD8E40 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockEmptyDatabase @ 0x140AD8E70 (ViDeadlockEmptyDatabase.c)
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
