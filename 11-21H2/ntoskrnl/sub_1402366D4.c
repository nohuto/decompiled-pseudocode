/*
 * XREFs of sub_1402366D4 @ 0x1402366D4
 * Callers:
 *     sub_1406AD6BC @ 0x1406AD6BC (sub_1406AD6BC.c)
 * Callees:
 *     sub_140236710 @ 0x140236710 (sub_140236710.c)
 *     sub_140236764 @ 0x140236764 (sub_140236764.c)
 */

_QWORD *__fastcall sub_1402366D4(unsigned int a1)
{
  _QWORD *i; // rcx
  _QWORD *result; // rax
  _QWORD *v4; // rdi

  for ( i = 0LL; ; i = v4 )
  {
    result = (_QWORD *)sub_140236710(i);
    v4 = result;
    if ( !result )
      break;
    sub_140236764(*result, a1);
  }
  return result;
}
