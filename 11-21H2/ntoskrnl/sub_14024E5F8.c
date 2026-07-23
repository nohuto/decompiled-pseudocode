/*
 * XREFs of sub_14024E5F8 @ 0x14024E5F8
 * Callers:
 *     sub_14024E3F0 @ 0x14024E3F0 (sub_14024E3F0.c)
 * Callees:
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 */

__int64 __fastcall sub_14024E5F8(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = sub_140317A10(a1);
  return *(unsigned int *)(sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * ((v1 >> 12) & 0xFFFFFFFFFFLL)) >> 4))
                         + 8);
}
