/*
 * XREFs of BiAcquireBcdSyncMutant @ 0x140805634
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
 *     ZwWaitForSingleObject @ 0x14041ADE0 (ZwWaitForSingleObject.c)
 *     BiGetCurrentBcdMutantHandle @ 0x140805694 (BiGetCurrentBcdMutantHandle.c)
 */

NTSTATUS __fastcall BiAcquireBcdSyncMutant(char a1)
{
  NTSTATUS result; // eax
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0LL;
  if ( a1 )
    return 0;
  result = BiGetCurrentBcdMutantHandle(&v2);
  if ( result < 0 )
    return result;
  if ( v2 == -1 )
    return 0;
  Timeout.QuadPart = -600000000LL;
  result = ZwWaitForSingleObject(BcdMutantHandle, 0, &Timeout);
  if ( result == 258 )
    return -1073741823;
  return result;
}
