/*
 * XREFs of sub_1800A2938 @ 0x1800A2938
 * Callers:
 *     sub_1800A29C8 @ 0x1800A29C8 (sub_1800A29C8.c)
 *     sub_1800A305C @ 0x1800A305C (sub_1800A305C.c)
 * Callees:
 *     sub_1800A28EC @ 0x1800A28EC (sub_1800A28EC.c)
 */

__int64 __fastcall sub_1800A2938(__int64 a1, __int64 a2)
{
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
  sub_1800A28EC((__int64 *)(a1 + 136), (__int64 *)(a2 + 136));
  return a1;
}
