/*
 * XREFs of rimCheckForExplicitRimConflictInProcess @ 0x1C00563E0
 * Callers:
 *     RIMCreateHidDesc @ 0x1C0056014 (RIMCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C019B10C (RIMIDECreateHIDDesc.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     rimIsExplicitRimUsagesMatchingUsages @ 0x1C0056498 (rimIsExplicitRimUsagesMatchingUsages.c)
 */

__int64 __fastcall rimCheckForExplicitRimConflictInProcess(
        struct _LIST_ENTRY *a1,
        unsigned __int16 a2,
        unsigned __int16 a3)
{
  struct _LIST_ENTRY *Flink; // r11
  struct _LIST_ENTRY *v7; // rcx
  unsigned int v8; // ebx

  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimList.Flink;
  while ( Flink != &gObRimList )
  {
    v7 = Flink - 1;
    Flink = Flink->Flink;
    if ( !BYTE1(v7[5].Flink)
      && !LOBYTE(v7[5].Flink)
      && v7[2].Flink == a1
      && (unsigned int)rimIsExplicitRimUsagesMatchingUsages(v7, a2, a3) )
    {
      v8 = 1;
      goto LABEL_9;
    }
  }
  v8 = 0;
LABEL_9:
  qword_1C029A118 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  return v8;
}
