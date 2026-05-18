/*
 * XREFs of sub_18002D678 @ 0x18002D678
 * Callers:
 *     sub_18003678C @ 0x18003678C (sub_18003678C.c)
 * Callees:
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 */

_QWORD *__fastcall sub_18002D678(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // rax

  sub_180010DD0(a1, (__int64)"Integer Result Code");
  a1[4] = 0LL;
  a1[6] = 0LL;
  a1[7] = 0LL;
  *((_OWORD *)a1 + 2) = *(_OWORD *)a3;
  *((_OWORD *)a1 + 3) = *(_OWORD *)(a3 + 16);
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_BYTE *)a3 = 0;
  result = a1;
  *(_QWORD *)(a3 + 24) = 15LL;
  return result;
}
