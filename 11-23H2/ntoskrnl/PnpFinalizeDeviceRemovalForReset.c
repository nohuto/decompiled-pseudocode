/*
 * XREFs of PnpFinalizeDeviceRemovalForReset @ 0x1409579DC
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1408676B8 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     IopEnumerateRelations @ 0x1408685D0 (IopEnumerateRelations.c)
 *     IopLogDeviceResetComplete @ 0x1409575D4 (IopLogDeviceResetComplete.c)
 *     IopMarkDeviceToBeReset @ 0x140957670 (IopMarkDeviceToBeReset.c)
 */

NTSTATUS __fastcall PnpFinalizeDeviceRemovalForReset(__int64 a1, unsigned int **a2)
{
  int v5; // [rsp+50h] [rbp+18h] BYREF
  int v6; // [rsp+54h] [rbp+1Ch]
  ULONG_PTR MaxDataSize; // [rsp+58h] [rbp+20h] BYREF

  MaxDataSize = 0LL;
  v6 = 0;
  v5 = 1;
  while ( IopEnumerateRelations(a2, &v5, &MaxDataSize, 0LL, 0LL) )
    IopMarkDeviceToBeReset(MaxDataSize);
  return IopLogDeviceResetComplete(a1, 0);
}
