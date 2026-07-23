/*
 * XREFs of sub_1406BBDFC @ 0x1406BBDFC
 * Callers:
 *     sub_1407A4914 @ 0x1407A4914 (sub_1407A4914.c)
 * Callees:
 *     sub_1407A7F84 @ 0x1407A7F84 (sub_1407A7F84.c)
 */

__int64 __fastcall sub_1406BBDFC(ULONG_PTR a1, _QWORD *a2)
{
  if ( *(_QWORD *)(a1 + 40) != *a2 )
    return 0LL;
  if ( !sub_1407A7F84(a1) )
    return 3221226029LL;
  a2[1] = a1;
  return 3221225473LL;
}
