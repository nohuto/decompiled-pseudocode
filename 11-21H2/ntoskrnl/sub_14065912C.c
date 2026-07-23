/*
 * XREFs of sub_14065912C @ 0x14065912C
 * Callers:
 *     sub_1407A8B00 @ 0x1407A8B00 (sub_1407A8B00.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_14065912C(__int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *v2; // rax

  v1 = (_QWORD *)(a1 + 384);
  v2 = (_QWORD *)*v1;
  if ( (_QWORD *)*v1 == v1 || !v2 )
    return 0LL;
  else
    return v2 - 10;
}
