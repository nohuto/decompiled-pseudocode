/*
 * XREFs of sub_1407A4E68 @ 0x1407A4E68
 * Callers:
 *     sub_140663FAC @ 0x140663FAC (sub_140663FAC.c)
 *     sub_1407A4E8C @ 0x1407A4E8C (sub_1407A4E8C.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1407A4E68(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *result; // rax

  v2 = (_QWORD *)(a1 + 56);
  for ( result = (_QWORD *)*v2; result != v2; result = (_QWORD *)*result )
  {
    if ( result[3] == a2 )
      return result;
  }
  return 0LL;
}
