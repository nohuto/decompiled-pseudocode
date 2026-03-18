/*
 * XREFs of VfUtilAddressRangeFit @ 0x140AC23F4
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x1405D1828 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x1405D1988 (ViDeadlockRemoveMemoryRangeThreads.c)
 *     ViDeadlockSearchResource @ 0x140AD9DB0 (ViDeadlockSearchResource.c)
 *     ViDeadlockSearchThread @ 0x140AD9E58 (ViDeadlockSearchThread.c)
 *     ViIrpDatabaseFindPointer @ 0x140AE1AF4 (ViIrpDatabaseFindPointer.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall VfUtilAddressRangeFit(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 result; // rax
  unsigned int v4; // r9d

  result = *a1;
  v4 = 0;
  if ( *a1 )
  {
    if ( a2 <= result )
    {
      if ( a3 >= a1[1] )
        return 1;
      if ( a2 < result )
      {
LABEL_6:
        if ( a3 <= result || a3 > a1[1] )
          return v4;
        return 1;
      }
    }
    if ( a2 >= a1[1] )
      goto LABEL_6;
    return 1;
  }
  return result;
}
