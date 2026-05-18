/*
 * XREFs of sub_180071120 @ 0x180071120
 * Callers:
 *     sub_1800733CC @ 0x1800733CC (sub_1800733CC.c)
 * Callees:
 *     sub_180071B9C @ 0x180071B9C (sub_180071B9C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180071120(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  char v6; // [rsp+58h] [rbp+10h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  sub_180071B9C((unsigned int)&v6, *a2, a2[1], (_DWORD)a1, a4);
  return a1;
}
