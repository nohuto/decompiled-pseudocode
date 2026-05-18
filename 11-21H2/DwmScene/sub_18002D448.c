/*
 * XREFs of sub_18002D448 @ 0x18002D448
 * Callers:
 *     sub_18002CE1C @ 0x18002CE1C (sub_18002CE1C.c)
 *     sub_18002E0C0 @ 0x18002E0C0 (sub_18002E0C0.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_18002CAB8 @ 0x18002CAB8 (sub_18002CAB8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002D448(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = (__int64 *)a1;
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
  *(_QWORD *)(a1 + 112) = *(_QWORD *)(a2 + 112);
  *(_BYTE *)(a1 + 120) = *(_BYTE *)(a2 + 120);
  *(_QWORD *)(a1 + 128) = *(_QWORD *)(a2 + 128);
  v4 = (_QWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  v10 = (__int64 *)sub_180011088(0x58uLL);
  sub_18001DE8C(v10, (__int64 *)&v10);
  sub_18001DE8C((__int64 *)(v5 + 8), (__int64 *)&v10);
  sub_18001DE8C((__int64 *)(v6 + 16), (__int64 *)&v10);
  *(_WORD *)(v7 + 24) = 257;
  *v4 = v7;
  sub_18002CAB8(v4, (_QWORD *)(a2 + 136), (char)v10, v8);
  return a1;
}
