/*
 * XREFs of sub_1800F0E90 @ 0x1800F0E90
 * Callers:
 *     sub_1800F0750 @ 0x1800F0750 (sub_1800F0750.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_1800F0E90(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)(a1 + 136) = 3;
  v2 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)&v7 = v2;
  v3 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = 0LL;
  *((_QWORD *)&v7 + 1) = v3;
  sub_180010910((__int64)&v7);
  v4 = *(_QWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)&v7 = v4;
  v5 = *(_QWORD *)(a1 + 128);
  *(_QWORD *)(a1 + 128) = 0LL;
  *((_QWORD *)&v7 + 1) = v5;
  result = sub_180010910((__int64)&v7);
  *(_QWORD *)&v7 = 0LL;
  BYTE8(v7) = 1;
  *(_OWORD *)(a1 + 144) = v7;
  return result;
}
