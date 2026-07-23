/*
 * XREFs of BiAcquireBcdSyncMutant @ 0x140805904
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
 *     ZwWaitForSingleObject @ 0x14041B170 (ZwWaitForSingleObject.c)
 *     BiGetCurrentBcdMutantHandle @ 0x140805964 (BiGetCurrentBcdMutantHandle.c)
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
