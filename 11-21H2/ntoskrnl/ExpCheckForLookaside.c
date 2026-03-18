/*
 * XREFs of ExpCheckForLookaside @ 0x14063E4D0
 * Callers:
 *     ExpFreePoolChecks @ 0x140216974 (ExpFreePoolChecks.c)
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 * Callees:
 *     ExpCheckForLookasideList @ 0x14063E53C (ExpCheckForLookasideList.c)
 *     VfCheckForLookaside @ 0x140A9EFF8 (VfCheckForLookaside.c)
 */

__int64 __fastcall ExpCheckForLookaside(ULONG_PTR a1, ULONG_PTR a2)
{
  __int64 result; // rax

  if ( (MmVerifierData & 0x800) == 0 || (result = VfCheckForLookaside(a1, a2), !(_DWORD)result) )
  {
    ExpCheckForLookasideList(a1, a2, &ExNPagedLookasideListHead, &ExNPagedLookasideLock);
    return ExpCheckForLookasideList(a1, a2, &ExPagedLookasideListHead, &ExPagedLookasideLock);
  }
  return result;
}
