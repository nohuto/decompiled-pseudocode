/*
 * XREFs of BiReleaseBcdSyncMutant @ 0x1408056DC
 * Callers:
 *     BcdQueryObject @ 0x140801EF8 (BcdQueryObject.c)
 *     BcdDeleteObject @ 0x140802D00 (BcdDeleteObject.c)
 *     BcdCreateObject @ 0x140802D5C (BcdCreateObject.c)
 *     BcdCloseStore @ 0x140802DF4 (BcdCloseStore.c)
 *     BcdOpenStore @ 0x140803098 (BcdOpenStore.c)
 *     BiDeleteElement @ 0x14080367C (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x140804118 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x140804CBC (BcdGetElementDataWithFlags.c)
 *     BcdCloseObject @ 0x140804F00 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x140804F44 (BcdOpenObject.c)
 *     SepSecureBootCorrectBcd @ 0x1409D0964 (SepSecureBootCorrectBcd.c)
 *     BcdFlushStore @ 0x140A5C228 (BcdFlushStore.c)
 *     BcdForciblyUnloadStore @ 0x140A5C290 (BcdForciblyUnloadStore.c)
 *     BcdSetSystemStore @ 0x140A5C370 (BcdSetSystemStore.c)
 *     BcdEnumerateObjects @ 0x140A5C430 (BcdEnumerateObjects.c)
 * Callees:
 *     ZwReleaseMutant @ 0x14041B160 (ZwReleaseMutant.c)
 */

__int64 __fastcall BiReleaseBcdSyncMutant(char a1)
{
  __int64 result; // rax

  if ( !a1 && BcdMutantHandle != (HANDLE)-1LL )
    return ZwReleaseMutant((__int64)BcdMutantHandle, 0LL);
  return result;
}
