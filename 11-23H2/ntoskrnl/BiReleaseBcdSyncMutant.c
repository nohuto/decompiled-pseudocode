/*
 * XREFs of BiReleaseBcdSyncMutant @ 0x1408059AC
 * Callers:
 *     BcdQueryObject @ 0x1408021C8 (BcdQueryObject.c)
 *     BcdDeleteObject @ 0x140802FD0 (BcdDeleteObject.c)
 *     BcdCreateObject @ 0x14080302C (BcdCreateObject.c)
 *     BcdCloseStore @ 0x1408030C4 (BcdCloseStore.c)
 *     BcdOpenStore @ 0x140803368 (BcdOpenStore.c)
 *     BiDeleteElement @ 0x14080394C (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x1408043E8 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x140804F8C (BcdGetElementDataWithFlags.c)
 *     BcdCloseObject @ 0x1408051D0 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x140805214 (BcdOpenObject.c)
 *     SepSecureBootCorrectBcd @ 0x1409D0B64 (SepSecureBootCorrectBcd.c)
 *     BcdFlushStore @ 0x140A5C4D8 (BcdFlushStore.c)
 *     BcdForciblyUnloadStore @ 0x140A5C540 (BcdForciblyUnloadStore.c)
 *     BcdSetSystemStore @ 0x140A5C620 (BcdSetSystemStore.c)
 *     BcdEnumerateObjects @ 0x140A5C6E0 (BcdEnumerateObjects.c)
 * Callees:
 *     ZwReleaseMutant @ 0x14041B4F0 (ZwReleaseMutant.c)
 */

NTSTATUS __fastcall BiReleaseBcdSyncMutant(char a1)
{
  NTSTATUS result; // eax

  if ( !a1 && BcdMutantHandle != (HANDLE)-1LL )
    return ZwReleaseMutant(BcdMutantHandle, 0LL);
  return result;
}
