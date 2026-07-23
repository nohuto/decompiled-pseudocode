/*
 * XREFs of RtlRetrieveNtUserPfn @ 0x18008E680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlRetrieveNtUserPfn(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  if ( !byte_1801991D8 )
    return 3221225485LL;
  *a1 = &NtDllUserStubs;
  *a2 = &off_180131AA0;
  *a3 = &off_180131B60;
  return 0LL;
}
