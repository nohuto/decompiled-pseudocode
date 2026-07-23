/*
 * XREFs of sub_14080051C @ 0x14080051C
 * Callers:
 *     sub_140800338 @ 0x140800338 (sub_140800338.c)
 *     sub_140818E88 @ 0x140818E88 (sub_140818E88.c)
 *     sub_14093C640 @ 0x14093C640 (sub_14093C640.c)
 * Callees:
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 */

char __fastcall sub_14080051C(unsigned __int64 a1)
{
  _QWORD *v1; // rax
  unsigned int v2; // r8d

  v1 = (_QWORD *)sub_140313C70(a1);
  return sub_1402BB6D0((__int64)&qword_140C534C0, v1, v2);
}
