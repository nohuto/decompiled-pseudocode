/*
 * XREFs of MiValidateSpecialPurposeMemoryAttributes @ 0x14059A640
 * Callers:
 *     MmManagePartitionInitialAddMemory @ 0x14098259C (MmManagePartitionInitialAddMemory.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiValidateSpecialPurposeMemoryAttributes(_QWORD *a1)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( *a1 && a1[1] )
  {
    if ( a1[2] )
      return a1[3] != 0LL;
  }
  return result;
}
