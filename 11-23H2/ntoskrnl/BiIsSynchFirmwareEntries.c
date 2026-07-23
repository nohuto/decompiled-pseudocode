/*
 * XREFs of BiIsSynchFirmwareEntries @ 0x140373DE0
 * Callers:
 *     BcdCloseStore @ 0x1408030C4 (BcdCloseStore.c)
 *     BcdForciblyUnloadStore @ 0x140A5C540 (BcdForciblyUnloadStore.c)
 * Callees:
 *     <none>
 */

bool __fastcall BiIsSynchFirmwareEntries(char a1)
{
  return (a1 & 2) == 0;
}
