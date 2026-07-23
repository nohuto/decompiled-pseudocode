/*
 * XREFs of BiReleaseBcdSyncMutant @ 0x140807C5C
 * Callers:
 *     BcdQueryObject @ 0x14080447C (BcdQueryObject.c)
 *     BcdDeleteObject @ 0x140805284 (BcdDeleteObject.c)
 *     BcdCreateObject @ 0x1408052E0 (BcdCreateObject.c)
 *     BcdCloseStore @ 0x140805378 (BcdCloseStore.c)
 *     BcdOpenStore @ 0x14080561C (BcdOpenStore.c)
 *     BiDeleteElement @ 0x140805C00 (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x14080669C (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14080723C (BcdGetElementDataWithFlags.c)
 *     BcdCloseObject @ 0x140807480 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x1408074C4 (BcdOpenObject.c)
 *     SepSecureBootCorrectBcd @ 0x1409D0A14 (SepSecureBootCorrectBcd.c)
 *     BcdFlushStore @ 0x140A5C298 (BcdFlushStore.c)
 *     BcdForciblyUnloadStore @ 0x140A5C300 (BcdForciblyUnloadStore.c)
 *     BcdSetSystemStore @ 0x140A5C3E0 (BcdSetSystemStore.c)
 *     BcdEnumerateObjects @ 0x140A5C4A0 (BcdEnumerateObjects.c)
 * Callees:
 *     ZwReleaseMutant @ 0x14041AAA0 (ZwReleaseMutant.c)
 */

NTSTATUS __fastcall BiReleaseBcdSyncMutant(char a1)
{
  NTSTATUS result; // eax

  if ( !a1 && BcdMutantHandle != (HANDLE)-1LL )
    return ZwReleaseMutant(BcdMutantHandle, 0LL);
  return result;
}
