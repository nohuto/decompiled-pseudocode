/*
 * XREFs of sub_180030EEC @ 0x180030EEC
 * Callers:
 *     sub_18003155C @ 0x18003155C (sub_18003155C.c)
 *     sub_18007007C @ 0x18007007C (sub_18007007C.c)
 *     sub_1800C8BC0 @ 0x1800C8BC0 (sub_1800C8BC0.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_18002F250 @ 0x18002F250 (sub_18002F250.c)
 */

__int64 *__fastcall sub_180030EEC(__int64 *a1)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = sub_18002F250(1uLL);
  v3 = sub_18001090C(v2);
  *(_QWORD *)v3 = v3;
  *(_QWORD *)(v3 + 8) = v3;
  *(_QWORD *)(v3 + 16) = v3;
  *(_WORD *)(v3 + 24) = 257;
  *a1 = v3;
  return a1;
}
