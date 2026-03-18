/*
 * XREFs of _lambda_ed419e8dc31e70bbfd3394c14ddbfc24_::operator() @ 0x1C039F780
 * Callers:
 *     ?BuildDynamicVideoPresentTargetChildRelations@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C039F7D8 (-BuildDynamicVideoPresentTargetChildRelations@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAKPEAIPEAW4_CONN.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_ed419e8dc31e70bbfd3394c14ddbfc24_::operator()(unsigned int **a1, int a2)
{
  unsigned int *v2; // r8
  unsigned int v5; // r9d
  __int64 v6; // rcx
  __int64 result; // rax

  v2 = *a1;
  v5 = **a1;
  if ( v5 <= *a1[1] )
  {
    WdLogSingleEntry0(1LL);
    v2 = *a1;
    v5 = **a1;
  }
  v6 = *(_QWORD *)a1[2];
  result = v5 - 1;
  *v2 = result;
  *(_DWORD *)(v6 + 4 * result) = a2;
  return result;
}
