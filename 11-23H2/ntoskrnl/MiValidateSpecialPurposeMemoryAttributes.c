/*
 * XREFs of MiValidateSpecialPurposeMemoryAttributes @ 0x1406610D0
 * Callers:
 *     MmManagePartitionInitialAddMemory @ 0x140A4597C (MmManagePartitionInitialAddMemory.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiValidateSpecialPurposeMemoryAttributes(_QWORD *a1)
{
  bool result; // al

  result = 0;
  if ( *a1 && a1[1] )
  {
    if ( a1[2] )
      return a1[3] != 0LL;
  }
  return result;
}
