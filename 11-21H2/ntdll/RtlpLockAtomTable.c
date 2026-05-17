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

char __fastcall RtlpLockAtomTable(_DWORD *a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  if ( !a1 || *a1 != 1836020801 )
    return 0;
  RtlAcquireSRWLockExclusive((unsigned __int64)(a1 + 2), a2, a3, a4);
  return 1;
}
