/*
 * XREFs of sub_1409A4784 @ 0x1409A4784
 * Callers:
 *     sub_140369ECC @ 0x140369ECC (sub_140369ECC.c)
 * Callees:
 *     sub_1409A573C @ 0x1409A573C (sub_1409A573C.c)
 *     sub_1409A9D3C @ 0x1409A9D3C (sub_1409A9D3C.c)
 */

__int64 __fastcall sub_1409A4784(unsigned int a1, unsigned int a2, int a3, int a4)
{
  __int64 v6; // r8

  LOBYTE(v6) = sub_1409A573C(a1, a2, a3, a4, 0LL);
  return sub_1409A9D3C(a1, a2, v6);
}
