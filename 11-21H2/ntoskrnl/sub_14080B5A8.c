/*
 * XREFs of sub_14080B5A8 @ 0x14080B5A8
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     sub_14068B198 @ 0x14068B198 (sub_14068B198.c)
 */

__int64 sub_14080B5A8()
{
  __int64 v0; // r8

  sub_14068B198();
  *(_DWORD *)v0 = qword_140D3B068;
  *(_DWORD *)(v0 + 4) = qword_140D3CC78;
  *(_QWORD *)(v0 + 8) = qword_140D3CC70;
  return 0LL;
}
