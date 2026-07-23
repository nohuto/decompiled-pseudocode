/*
 * XREFs of ViDeadlockDetectionApplySettings @ 0x140AD9D8C
 * Callers:
 *     ViDeadlockPluginUnload @ 0x1405D18A0 (ViDeadlockPluginUnload.c)
 *     VfDeadlockInitialize @ 0x140AD847C (VfDeadlockInitialize.c)
 *     VfDeadlockPluginEntry @ 0x140AD88C8 (VfDeadlockPluginEntry.c)
 *     VfSettingsCheckForChanges @ 0x140ADBDA4 (VfSettingsCheckForChanges.c)
 * Callees:
 *     ViLowerIrql @ 0x1405D1B48 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x1405D1BC0 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockDetectionLock @ 0x140AD9DD8 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x140AD9E10 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockEmptyDatabase @ 0x140AD9E40 (ViDeadlockEmptyDatabase.c)
 */

void __fastcall ViDeadlockDetectionApplySettings(int a1)
{
  unsigned __int8 v1; // bl

  if ( a1 )
  {
    v1 = ViRaiseIrqlToDpcLevel();
    ViDeadlockDetectionLock(1LL);
    ViDeadlockDetectionEnabled = 1;
    ViDeadlockDetectionUnlock(1LL);
    ViLowerIrql(v1);
  }
  else
  {
    ViDeadlockEmptyDatabase();
  }
}
