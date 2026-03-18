/*
 * XREFs of BiIsSynchFirmwareEntries @ 0x140373C40
 * Callers:
 *     BcdCloseStore @ 0x140802DF4 (BcdCloseStore.c)
 *     BcdForciblyUnloadStore @ 0x140A5C290 (BcdForciblyUnloadStore.c)
 * Callees:
 *     <none>
 */

bool __fastcall BiIsSynchFirmwareEntries(char a1)
{
  return (a1 & 2) == 0;
}
