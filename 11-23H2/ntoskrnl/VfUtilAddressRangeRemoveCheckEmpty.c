/*
 * XREFs of VfUtilAddressRangeRemoveCheckEmpty @ 0x140AC246C
 * Callers:
 *     IovpCompleteRequest2 @ 0x140ACCB1C (IovpCompleteRequest2.c)
 *     VfIoFreeIrp @ 0x140ACD804 (VfIoFreeIrp.c)
 *     VfPendingMoreProcessingRequired @ 0x140AD1990 (VfPendingMoreProcessingRequired.c)
 *     ViPendingCompleteAfterWait @ 0x140AD1C0C (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140AE190C (VfIrpDatabaseEntryReleaseLock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfUtilAddressRangeRemoveCheckEmpty(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r9
  __int64 *v4; // r8

  result = *a1;
  v3 = a2 + 208;
  v4 = a1 + 1;
  if ( a2 == *a1 )
  {
    if ( v3 == *v4 )
    {
      *a1 = 0LL;
      *v4 = 0LL;
      return result;
    }
    *a1 = result + 208;
  }
  result = *v4;
  if ( v3 == *v4 )
  {
    result -= 208LL;
    *v4 = result;
  }
  return result;
}
