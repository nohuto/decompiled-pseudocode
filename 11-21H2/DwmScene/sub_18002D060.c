/*
 * XREFs of sub_18002D060 @ 0x18002D060
 * Callers:
 *     sub_18002D0B8 @ 0x18002D0B8 (sub_18002D0B8.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18002C2F4 @ 0x18002C2F4 (sub_18002C2F4.c)
 *     sub_18002C694 @ 0x18002C694 (sub_18002C694.c)
 */

_QWORD *__fastcall sub_18002D060(_QWORD *a1, _QWORD *a2)
{
  int v4; // eax

  v4 = sub_18002C694(*a2 + 24LL);
  sub_18002C2F4((__int64)(a1 + 1), v4);
  a1[8] = 0LL;
  a1[9] = 0LL;
  *a1 = &Spectre::Engine::IRenderOutput::`vftable';
  sub_180010910((__int64)a2);
  return a1;
}
