/*
 * XREFs of sub_14040C320 @ 0x14040C320
 * Callers:
 *     sub_14040BDF0 @ 0x14040BDF0 (sub_14040BDF0.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 *     sub_14040B1B0 @ 0x14040B1B0 (sub_14040B1B0.c)
 *     sub_14040B4A4 @ 0x14040B4A4 (sub_14040B4A4.c)
 */

void __fastcall sub_14040C320(__int64 a1, int a2, int a3, void *a4, char *Src)
{
  int v5; // r15d

  v5 = *(_DWORD *)(a1 + 4);
  _misaligned_access();
  sub_14040B4A4(a2, v5, a3, v5, (__int64)Src);
  sub_14040B1B0(Src, 2 * v5, (_DWORD *)(a1 + 64), 0LL, a4, &Src[v5 << 7]);
}
