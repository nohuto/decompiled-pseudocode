/*
 * XREFs of sub_140A82EB0 @ 0x140A82EB0
 * Callers:
 *     VfCheckNxPageProtection @ 0x1405FE060 (VfCheckNxPageProtection.c)
 *     sub_140A9F6A0 @ 0x140A9F6A0 (sub_140A9F6A0.c)
 *     sub_140A9FC40 @ 0x140A9FC40 (sub_140A9FC40.c)
 *     sub_140A9FFA0 @ 0x140A9FFA0 (sub_140A9FFA0.c)
 *     sub_140AA0210 @ 0x140AA0210 (sub_140AA0210.c)
 *     sub_140AA04C0 @ 0x140AA04C0 (sub_140AA04C0.c)
 *     sub_140AA06F0 @ 0x140AA06F0 (sub_140AA06F0.c)
 *     sub_140AA0780 @ 0x140AA0780 (sub_140AA0780.c)
 *     sub_140AA2770 @ 0x140AA2770 (sub_140AA2770.c)
 *     sub_140AA2C20 @ 0x140AA2C20 (sub_140AA2C20.c)
 *     sub_140AA30A0 @ 0x140AA30A0 (sub_140AA30A0.c)
 * Callees:
 *     sub_1405FFA20 @ 0x1405FFA20 (sub_1405FFA20.c)
 *     sub_140A83044 @ 0x140A83044 (sub_140A83044.c)
 *     sub_140A8B2AC @ 0x140A8B2AC (sub_140A8B2AC.c)
 */

void __fastcall sub_140A82EB0(unsigned int a1, ULONG_PTR a2)
{
  if ( (dword_140C29FC0 & 0x2000000) != 0 && (a1 & 0xF0) != 0 )
  {
    sub_140A83044(
      byte_140C0D8E0,
      "The caller 0x%p specified an executable page protection 0x%x.",
      (const void *)0x2001,
      a2);
    sub_1405FFA20(0xC4u, 0x2001uLL, a2, a1, 0LL, byte_140C0D8E0);
    if ( (dword_140C29FC0 & 0x1000) != 0 )
      sub_140A8B2AC(a2, 284LL);
    _InterlockedIncrement(&dword_140C2A05C);
  }
}
