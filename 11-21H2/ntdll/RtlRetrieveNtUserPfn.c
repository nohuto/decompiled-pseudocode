/*
 * XREFs of RtlRetrieveNtUserPfn @ 0x180093730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlRetrieveNtUserPfn(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  if ( !byte_18018F1D8 )
    return 3221225485LL;
  *a1 = &NtDllUserStubs;
  *a2 = &off_18012C9F0;
  *a3 = &off_18012CAB0;
  return 0LL;
}
