/*
 * XREFs of sub_1407A9178 @ 0x1407A9178
 * Callers:
 *     sub_1407A8B00 @ 0x1407A8B00 (sub_1407A8B00.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1407A9178(__int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  v1 = (_QWORD *)(a1 + 160);
  result = (_QWORD *)*v1;
  if ( (_QWORD *)*v1 == v1 || !result )
    return 0LL;
  return result;
}
