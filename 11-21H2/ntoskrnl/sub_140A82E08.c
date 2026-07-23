/*
 * XREFs of sub_140A82E08 @ 0x140A82E08
 * Callers:
 *     VfCheckNxPagePriority @ 0x1405FE040 (VfCheckNxPagePriority.c)
 *     sub_140AA00D0 @ 0x140AA00D0 (sub_140AA00D0.c)
 * Callees:
 *     sub_1405FFA20 @ 0x1405FFA20 (sub_1405FFA20.c)
 *     sub_140A83044 @ 0x140A83044 (sub_140A83044.c)
 *     sub_140A8B2AC @ 0x140A8B2AC (sub_140A8B2AC.c)
 */

void __fastcall sub_140A82E08(int a1, ULONG_PTR a2)
{
  ULONG_PTR v3; // rbx

  if ( (dword_140C29FC0 & 0x2000000) != 0 && (a1 & 0x40000000) == 0 )
  {
    v3 = a1;
    sub_140A83044(
      byte_140C0D8CC,
      "The caller 0x%p specified an executable MDL mapping (priority 0x%x).",
      (const void *)0x2002,
      a2);
    sub_1405FFA20(0xC4u, 0x2002uLL, a2, v3, 0LL, byte_140C0D8CC);
    if ( (dword_140C29FC0 & 0x1000) != 0 )
      sub_140A8B2AC(a2, 288LL);
    _InterlockedIncrement(&dword_140C2A060);
  }
}
