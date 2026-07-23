/*
 * XREFs of sub_140915D20 @ 0x140915D20
 * Callers:
 *     sub_14067DE90 @ 0x14067DE90 (sub_14067DE90.c)
 *     sub_140714980 @ 0x140714980 (sub_140714980.c)
 *     sub_14071FAA0 @ 0x14071FAA0 (sub_14071FAA0.c)
 *     sub_1407C0160 @ 0x1407C0160 (sub_1407C0160.c)
 *     sub_14090EF60 @ 0x14090EF60 (sub_14090EF60.c)
 * Callees:
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB42D0 @ 0x140AB42D0 (sub_140AB42D0.c)
 *     sub_140AB4300 @ 0x140AB4300 (sub_140AB4300.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 *     sub_140AB45A0 @ 0x140AB45A0 (sub_140AB45A0.c)
 */

bool __fastcall sub_140915D20(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // di
  bool v5; // bl
  __int64 v6; // rbp
  __int64 v7; // rcx
  bool v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9

  v3 = 0;
  v5 = 0;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
  sub_140AB4370(a1, a2, a3);
  sub_140AB42D0(*(_QWORD *)(a1 + 8));
  if ( !(unsigned __int8)sub_140AB45A0(a1, 0LL) )
    v5 = (*(_BYTE *)(v6 + 4112) & 0x10) != 0;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = 0;
  if ( !*(_WORD *)(v7 + 66) )
    v8 = v5;
  if ( (*(_DWORD *)(a1 + 48) & 0x10) == 0 )
    v3 = v8;
  sub_140AB4300(v7);
  sub_140AB4260(v10, v9, v11, v12);
  return v3;
}
