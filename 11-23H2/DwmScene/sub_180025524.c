/*
 * XREFs of sub_180025524 @ 0x180025524
 * Callers:
 *     sub_180025598 @ 0x180025598 (sub_180025598.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_1800E0D60 @ 0x1800E0D60 (sub_1800E0D60.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180025524(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax

  *a1 = &Spectre::Engine::RenderDevice::QueryPool::`vftable';
  sub_1800E0D60(a1 + 1);
  a1[2] = a2;
  a1[3] = 0LL;
  a1[4] = 0LL;
  v4 = sub_18001090C(0x40uLL);
  *(_QWORD *)v4 = v4;
  *(_QWORD *)(v4 + 8) = v4;
  *(_QWORD *)(v4 + 16) = v4;
  *(_WORD *)(v4 + 24) = 257;
  a1[3] = v4;
  return a1;
}
