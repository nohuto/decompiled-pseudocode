/*
 * XREFs of sub_18009F818 @ 0x18009F818
 * Callers:
 *     sub_18009FAC0 @ 0x18009FAC0 (sub_18009FAC0.c)
 * Callees:
 *     sub_18009D8CC @ 0x18009D8CC (sub_18009D8CC.c)
 *     sub_18009DCC0 @ 0x18009DCC0 (sub_18009DCC0.c)
 *     sub_18009E068 @ 0x18009E068 (sub_18009E068.c)
 *     sub_18009E414 @ 0x18009E414 (sub_18009E414.c)
 *     sub_18009E7A0 @ 0x18009E7A0 (sub_18009E7A0.c)
 *     sub_18009EAF8 @ 0x18009EAF8 (sub_18009EAF8.c)
 *     sub_18009ED34 @ 0x18009ED34 (sub_18009ED34.c)
 *     sub_18009EFA4 @ 0x18009EFA4 (sub_18009EFA4.c)
 *     sub_18009F340 @ 0x18009F340 (sub_18009F340.c)
 *     sub_18009F520 @ 0x18009F520 (sub_18009F520.c)
 *     sub_18009FB00 @ 0x18009FB00 (sub_18009FB00.c)
 */

void **__fastcall sub_18009F818(_QWORD *a1)
{
  _QWORD *v1; // r13
  _QWORD *v2; // r12
  _QWORD *v3; // rbp
  _QWORD *v4; // r15
  _QWORD *v5; // r14
  _QWORD *v6; // rsi
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx

  *a1 = &Spectre::Engine::CommandListState::`vftable';
  v1 = a1 + 579;
  a1[579] = &Spectre::Engine::CommandListState::`vftable';
  v2 = a1 + 1157;
  a1[1157] = &Spectre::Engine::CommandListState::`vftable';
  v3 = a1 + 1213;
  a1[1213] = &Spectre::Engine::CommandListState::`vftable';
  v4 = a1 + 1222;
  a1[1222] = &Spectre::Engine::CommandListState::`vftable';
  v5 = a1 + 1231;
  a1[1231] = &Spectre::Engine::CommandListState::`vftable';
  v6 = a1 + 1809;
  a1[1809] = &Spectre::Engine::CommandListState::`vftable';
  a1[8] = &Spectre::Engine::CommandListState::`vftable';
  v7 = a1 + 1817;
  a1[1817] = &Spectre::Engine::CommandListState::`vftable';
  a1[145] = &Spectre::Engine::CommandListState::`vftable';
  v8 = a1 + 1828;
  a1[1828] = &Spectre::Engine::CommandListState::`vftable';
  sub_18009FB00();
  sub_18009F520(v8);
  sub_18009F340(v7);
  sub_18009EAF8(v6);
  sub_18009E414(v5);
  sub_18009D8CC(v4);
  sub_18009ED34(v3);
  sub_18009EFA4(v2);
  sub_18009E068(v1);
  sub_18009DCC0(a1 + 145);
  sub_18009E7A0(a1 + 8);
  return sub_18009DAA0(a1);
}
