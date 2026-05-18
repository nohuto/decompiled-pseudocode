/*
 * XREFs of sub_1800B17E0 @ 0x1800B17E0
 * Callers:
 *     sub_1800B1A80 @ 0x1800B1A80 (sub_1800B1A80.c)
 * Callees:
 *     sub_1800AF11C @ 0x1800AF11C (sub_1800AF11C.c)
 *     sub_1800AF664 @ 0x1800AF664 (sub_1800AF664.c)
 *     sub_1800AFAEC @ 0x1800AFAEC (sub_1800AFAEC.c)
 *     sub_1800AFF7C @ 0x1800AFF7C (sub_1800AFF7C.c)
 *     sub_1800B041C @ 0x1800B041C (sub_1800B041C.c)
 *     sub_1800B0810 @ 0x1800B0810 (sub_1800B0810.c)
 *     sub_1800B0AC8 @ 0x1800B0AC8 (sub_1800B0AC8.c)
 *     sub_1800B0E00 @ 0x1800B0E00 (sub_1800B0E00.c)
 *     sub_1800B1320 @ 0x1800B1320 (sub_1800B1320.c)
 *     sub_1800B14E8 @ 0x1800B14E8 (sub_1800B14E8.c)
 *     sub_1800B1AC0 @ 0x1800B1AC0 (sub_1800B1AC0.c)
 */

__int64 __fastcall sub_1800B17E0(_QWORD *a1)
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
  sub_1800B1AC0();
  sub_1800B14E8(v8);
  sub_1800B1320(v7);
  sub_1800B0810(v6);
  sub_1800AFF7C(v5);
  sub_1800AF11C(v4);
  sub_1800B0AC8(v3);
  sub_1800B0E00(v2);
  sub_1800AFAEC(v1);
  sub_1800AF664(a1 + 145);
  sub_1800B041C(a1 + 8);
  return sub_1800AF3B0(a1);
}
