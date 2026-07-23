/*
 * XREFs of RtlpLockAtomTable @ 0x180062B48
 * Callers:
 *     RtlQueryAtomInAtomTable @ 0x180062260 (RtlQueryAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x180062570 (RtlDeleteAtomFromAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x18006267C (RtlAddAtomToAtomTableEx.c)
 *     RtlLookupAtomInAtomTable @ 0x180062890 (RtlLookupAtomInAtomTable.c)
 *     RtlDestroyAtomTable @ 0x180091C70 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x180091D30 (RtlEmptyAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1800F5CB0 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpLockAtomTable(__int64 a1)
{
  if ( !a1 || *(_DWORD *)a1 != 1836020801 )
    return 0;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 8));
  return 1;
}
