/*
 * XREFs of sub_140AA1B48 @ 0x140AA1B48
 * Callers:
 *     sub_140AA17D0 @ 0x140AA17D0 (sub_140AA17D0.c)
 *     sub_140AA1F1C @ 0x140AA1F1C (sub_140AA1F1C.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

_QWORD *__fastcall sub_140AA1B48(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // rax

  result = (_QWORD *)ExAllocatePool2(64LL, 0x18uLL, 0x72734956u);
  if ( result )
  {
    *result = a1;
    result[1] = a2;
    result[2] = a3;
  }
  return result;
}
