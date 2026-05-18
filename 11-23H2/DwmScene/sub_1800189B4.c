/*
 * XREFs of sub_1800189B4 @ 0x1800189B4
 * Callers:
 *     sub_180018FC0 @ 0x180018FC0 (sub_180018FC0.c)
 *     sub_18003C998 @ 0x18003C998 (sub_18003C998.c)
 *     sub_18003DB00 @ 0x18003DB00 (sub_18003DB00.c)
 *     sub_18005DCB8 @ 0x18005DCB8 (sub_18005DCB8.c)
 *     sub_18005DEF0 @ 0x18005DEF0 (sub_18005DEF0.c)
 *     sub_18005E124 @ 0x18005E124 (sub_18005E124.c)
 * Callees:
 *     sub_18001B0B0 @ 0x18001B0B0 (sub_18001B0B0.c)
 */

__int64 __fastcall sub_1800189B4(__int128 *a1, __int64 a2)
{
  __int128 v2; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm2
  __int128 v6; // xmm3
  __int64 result; // rax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a1;
  v4 = a1[1];
  v5 = a1[2];
  v6 = a1[3];
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)a2 = 1065353216LL;
  *(_QWORD *)(a2 + 20) = 1065353216LL;
  *(_QWORD *)(a2 + 40) = 1065353216LL;
  *(_DWORD *)(a2 + 60) = 1065353216;
  *(_DWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 28) = 0LL;
  *(_DWORD *)(a2 + 36) = 0;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_DWORD *)(a2 + 56) = 0;
  *(double *)&v2 = sub_18001B0B0(v8);
  *(_OWORD *)a2 = v2;
  result = a2;
  *(_OWORD *)(a2 + 16) = v4;
  *(_OWORD *)(a2 + 32) = v5;
  *(_OWORD *)(a2 + 48) = v6;
  return result;
}
