/*
 * XREFs of sub_180091C84 @ 0x180091C84
 * Callers:
 *     sub_180093190 @ 0x180093190 (sub_180093190.c)
 *     sub_180093310 @ 0x180093310 (sub_180093310.c)
 * Callees:
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 */

__int64 __fastcall sub_180091C84(_QWORD *a1, _QWORD *a2, float a3)
{
  __int64 v3; // rcx

  sub_18001246C(a1, a2);
  *(_QWORD *)(v3 + 16) = 0LL;
  *(_QWORD *)(v3 + 24) = 0LL;
  *(_DWORD *)(v3 + 36) = 0;
  *(float *)(v3 + 32) = a3;
  *(_QWORD *)(v3 + 40) = 1000000000LL;
  *(_QWORD *)(v3 + 48) = 1LL;
  *(_QWORD *)(v3 + 112) = 0LL;
  *(_QWORD *)(v3 + 176) = 0LL;
  return v3;
}
