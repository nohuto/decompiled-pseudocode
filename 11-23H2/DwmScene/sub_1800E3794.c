/*
 * XREFs of sub_1800E3794 @ 0x1800E3794
 * Callers:
 *     sub_18000AB30 @ 0x18000AB30 (sub_18000AB30.c)
 *     sub_18000AB80 @ 0x18000AB80 (sub_18000AB80.c)
 * Callees:
 *     sub_1800E37E0 @ 0x1800E37E0 (sub_1800E37E0.c)
 */

__int64 __fastcall sub_1800E3794(__int64 a1, float a2, float a3, float a4, int a5, int a6, int a7)
{
  __int64 v7; // rcx

  *(_DWORD *)(a1 + 12) = a6;
  *(float *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 24) = a7;
  *(float *)(a1 + 8) = a4;
  *(float *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 20) = a5;
  *(_BYTE *)a1 = 1;
  sub_1800E37E0();
  return v7;
}
