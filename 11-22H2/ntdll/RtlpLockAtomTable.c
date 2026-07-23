/*
 * XREFs of RtlpLockAtomTable @ 0x180003A9C
 * Callers:
 *     RtlQueryAtomInAtomTable @ 0x180003270 (RtlQueryAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x180003540 (RtlDeleteAtomFromAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x1800035FC (RtlAddAtomToAtomTableEx.c)
 *     RtlLookupAtomInAtomTable @ 0x180003820 (RtlLookupAtomInAtomTable.c)
 *     RtlDestroyAtomTable @ 0x18008BBD0 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x18008BC90 (RtlEmptyAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1800F5A00 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpLockAtomTable(__int64 a1)
{
  if ( !a1 || *(_DWORD *)a1 != 1836020801 )
    return 0;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 8));
  return 1;
}
