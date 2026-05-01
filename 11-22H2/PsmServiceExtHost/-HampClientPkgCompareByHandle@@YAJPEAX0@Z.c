/*
 * XREFs of ?HampClientPkgCompareByHandle@@YAJPEAX0@Z @ 0x180013CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HampClientPkgCompareByHandle(unsigned __int64 *a1, _QWORD *a2)
{
  unsigned __int64 v2; // rax

  v2 = a2[6];
  if ( v2 == *a1 )
    return 0LL;
  else
    return v2 < *a1 ? -1 : 1;
}
