/*
 * XREFs of sub_18002CF04 @ 0x18002CF04
 * Callers:
 *     sub_18002CE90 @ 0x18002CE90 (sub_18002CE90.c)
 *     sub_18002E0C0 @ 0x18002E0C0 (sub_18002E0C0.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 */

__int64 __fastcall sub_18002CF04(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = a1;
  *(_QWORD *)a2 = *(_QWORD *)a3;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a3 + 8);
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a3 + 24);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(a3 + 32);
  *(_OWORD *)(a2 + 48) = *(_OWORD *)(a3 + 48);
  *(_OWORD *)(a2 + 64) = *(_OWORD *)(a3 + 64);
  *(_OWORD *)(a2 + 80) = *(_OWORD *)(a3 + 80);
  *(_OWORD *)(a2 + 96) = *(_OWORD *)(a3 + 96);
  *(_QWORD *)(a2 + 112) = *(_QWORD *)(a3 + 112);
  *(_BYTE *)(a2 + 120) = *(_BYTE *)(a3 + 120);
  *(_QWORD *)(a2 + 128) = *(_QWORD *)(a3 + 128);
  *(_QWORD *)(a2 + 136) = 0LL;
  *(_QWORD *)(a2 + 144) = 0LL;
  v10 = (__int64 *)sub_180011088(0x58uLL);
  sub_18001DE8C(v10, (__int64 *)&v10);
  sub_18001DE8C((__int64 *)(v5 + 8), (__int64 *)&v10);
  sub_18001DE8C((__int64 *)(v6 + 16), (__int64 *)&v10);
  *(_WORD *)(v7 + 24) = 257;
  *(_QWORD *)(a2 + 136) = v7;
  *(_QWORD *)(a2 + 136) = *(_QWORD *)(a3 + 136);
  result = *(_QWORD *)(a3 + 144);
  *(_QWORD *)(a3 + 136) = v7;
  v9 = *(_QWORD *)(a2 + 144);
  *(_QWORD *)(a2 + 144) = result;
  *(_QWORD *)(a3 + 144) = v9;
  return result;
}
