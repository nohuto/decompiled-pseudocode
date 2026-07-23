/*
 * XREFs of sub_14099F860 @ 0x14099F860
 * Callers:
 *     sub_14099F3A0 @ 0x14099F3A0 (sub_14099F3A0.c)
 *     sub_14099F6D8 @ 0x14099F6D8 (sub_14099F6D8.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_14099F860(_QWORD **a1)
{
  _QWORD *result; // rax
  _QWORD *v2; // rdx

  while ( 1 )
  {
    result = *a1;
    if ( *a1 == a1 )
      break;
    if ( (_QWORD **)result[1] != a1 || (v2 = (_QWORD *)*result, *(_QWORD **)(*result + 8LL) != result) )
      __fastfail(3u);
    *a1 = v2;
    v2[1] = a1;
    result[1] = result;
    *result = result;
  }
  return result;
}
