/*
 * XREFs of sub_18003DC20 @ 0x18003DC20
 * Callers:
 *     sub_180062060 @ 0x180062060 (sub_180062060.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18003DC20(__int64 a1, float a2, float a3, float a4, int a5, int a6, int a7)
{
  __int64 v7; // rcx

  v7 = *(_QWORD *)(a1 + 96) + 14536LL;
  *(_DWORD *)(v7 + 20) = a5;
  *(float *)(v7 + 8) = a2;
  *(_DWORD *)(v7 + 28) = a7;
  *(float *)(v7 + 12) = a3;
  *(float *)(v7 + 16) = a4;
  *(_DWORD *)(v7 + 24) = a6;
}
