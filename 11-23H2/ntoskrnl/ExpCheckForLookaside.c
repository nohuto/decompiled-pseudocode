/*
 * XREFs of ExpCheckForLookaside @ 0x14060B8E8
 * Callers:
 *     ExpFreePoolChecks @ 0x1402AC630 (ExpFreePoolChecks.c)
 *     ExFreeHeapPool @ 0x140323340 (ExFreeHeapPool.c)
 * Callees:
 *     ExpCheckForLookasideList @ 0x14060B954 (ExpCheckForLookasideList.c)
 *     VfCheckForLookaside @ 0x140AE2198 (VfCheckForLookaside.c)
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
