/*
 * XREFs of sub_18009EAA8 @ 0x18009EAA8
 * Callers:
 *     sub_18009F624 @ 0x18009F624 (sub_18009F624.c)
 * Callees:
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18009EB80 @ 0x18009EB80 (sub_18009EB80.c)
 */

_QWORD *__fastcall sub_18009EAA8(_QWORD *a1, __int64 a2)
{
  *a1 = &Spectre::Engine::RenderStateState::`vftable';
  sub_18001246C(a1 + 1, (_QWORD *)(a2 + 720));
  a1[3] = 0LL;
  a1[4] = 0LL;
  *(_QWORD *)((char *)a1 + 44) = 0LL;
  *(_QWORD *)((char *)a1 + 52) = 0LL;
  sub_18009EB80(a1);
  return a1;
}
