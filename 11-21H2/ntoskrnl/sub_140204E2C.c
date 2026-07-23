/*
 * XREFs of sub_140204E2C @ 0x140204E2C
 * Callers:
 *     sub_140204870 @ 0x140204870 (sub_140204870.c)
 *     sub_140204B30 @ 0x140204B30 (sub_140204B30.c)
 * Callees:
 *     sub_140204EA0 @ 0x140204EA0 (sub_140204EA0.c)
 *     sub_14064A67C @ 0x14064A67C (sub_14064A67C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall sub_140204E2C(__int64 a1, char a2)
{
  _QWORD *v3; // rsi
  _QWORD *result; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // rdx
  char v8; // al

  v3 = (_QWORD *)(a1 + 32);
  while ( 1 )
  {
    result = (_QWORD *)*v3;
    if ( (_QWORD *)*v3 == v3 )
      break;
    v6 = result - 2;
    v7 = result - 2;
    if ( a2 )
      v8 = sub_140204EA0(a1, v7);
    else
      v8 = sub_14064A67C(a1, v7);
    if ( v8 )
      ExFreePoolWithTag(v6, 0);
  }
  return result;
}
