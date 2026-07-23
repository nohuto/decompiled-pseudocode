/*
 * XREFs of RtlRetrieveNtUserPfn @ 0x18008EE80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlRetrieveNtUserPfn(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  if ( !byte_18019C1D8 )
    return 3221225485LL;
  *a1 = &NtDllUserStubs;
  *a2 = &off_180133A80;
  *a3 = &off_180133B40;
  return 0LL;
}
