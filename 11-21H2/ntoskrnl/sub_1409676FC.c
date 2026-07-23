/*
 * XREFs of sub_1409676FC @ 0x1409676FC
 * Callers:
 *     sub_140967584 @ 0x140967584 (sub_140967584.c)
 * Callees:
 *     sub_1407A7F84 @ 0x1407A7F84 (sub_1407A7F84.c)
 */

_QWORD *__fastcall sub_1409676FC(__int64 a1, _QWORD **a2)
{
  _QWORD *v2; // rbx

  v2 = *a2;
  if ( *a2 == a2 )
    return 0LL;
  while ( v2[4] != a1 || !sub_1407A7F84((ULONG_PTR)v2) )
  {
    v2 = (_QWORD *)*v2;
    if ( v2 == a2 )
      return 0LL;
  }
  return v2;
}
