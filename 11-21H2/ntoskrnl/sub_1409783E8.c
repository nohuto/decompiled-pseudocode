/*
 * XREFs of sub_1409783E8 @ 0x1409783E8
 * Callers:
 *     sub_14096029C @ 0x14096029C (sub_14096029C.c)
 *     sub_140B03C68 @ 0x140B03C68 (sub_140B03C68.c)
 * Callees:
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     sub_14096ED20 @ 0x14096ED20 (sub_14096ED20.c)
 */

char __fastcall sub_1409783E8(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rax

  v1 = a1 - 24576;
  sub_14096ED20(a1 - 24576, 0x6000uLL);
  v2 = (_QWORD *)sub_140313C70(v1 - 4096);
  return sub_1402BB6D0((__int64)&qword_140C534C0, v2, 1u);
}
