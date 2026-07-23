/*
 * XREFs of sub_14040C930 @ 0x14040C930
 * Callers:
 *     <none>
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 *     sub_14040B1B0 @ 0x14040B1B0 (sub_14040B1B0.c)
 *     sub_14040B5F0 @ 0x14040B5F0 (sub_14040B5F0.c)
 */

void __fastcall sub_14040C930(__int64 a1, __int64 a2, void *a3, void *a4)
{
  unsigned int v4; // r14d

  v4 = *(_DWORD *)(a1 + 4);
  _misaligned_access();
  sub_14040B5F0(a2, v4, (__int64)a4);
  sub_14040B1B0(a4, 2 * v4, (_DWORD *)(a1 + 64), 0LL, a3, (_DWORD *)a4 + 32 * v4);
}
