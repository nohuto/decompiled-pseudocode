/*
 * XREFs of RtlpLockAtomTable @ 0x180003BFC
 * Callers:
 *     RtlQueryAtomInAtomTable @ 0x180003390 (RtlQueryAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x1800036A0 (RtlDeleteAtomFromAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x18000375C (RtlAddAtomToAtomTableEx.c)
 *     RtlLookupAtomInAtomTable @ 0x180003980 (RtlLookupAtomInAtomTable.c)
 *     RtlDestroyAtomTable @ 0x18008C3D0 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x18008C490 (RtlEmptyAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1800F6E10 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpLockAtomTable(__int64 a1)
{
  if ( !a1 || *(_DWORD *)a1 != 1836020801 )
    return 0;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 8));
  return 1;
}
