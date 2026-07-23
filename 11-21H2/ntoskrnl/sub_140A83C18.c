/*
 * XREFs of sub_140A83C18 @ 0x140A83C18
 * Callers:
 *     sub_140A84BC0 @ 0x140A84BC0 (sub_140A84BC0.c)
 *     sub_140A84F20 @ 0x140A84F20 (sub_140A84F20.c)
 *     sub_140A85DA0 @ 0x140A85DA0 (sub_140A85DA0.c)
 *     sub_140A86160 @ 0x140A86160 (sub_140A86160.c)
 *     sub_140A86510 @ 0x140A86510 (sub_140A86510.c)
 *     sub_140A866D0 @ 0x140A866D0 (sub_140A866D0.c)
 * Callees:
 *     sub_1405FFA20 @ 0x1405FFA20 (sub_1405FFA20.c)
 *     sub_140A8142C @ 0x140A8142C (sub_140A8142C.c)
 *     sub_140A88948 @ 0x140A88948 (sub_140A88948.c)
 */

void __fastcall sub_140A83C18(ULONG_PTR a1)
{
  __int16 v2; // di

  v2 = *(_WORD *)(a1 + 10) & 0x804;
  if ( !(unsigned int)sub_140A8142C((_DWORD *)a1) && !v2 )
  {
    sub_140A88948(byte_140C0D8FC, "DMA Pages Not Locked! MDL %p for DMA not locked", (const void *)0xE);
    sub_1405FFA20(0xE6u, 0xEuLL, a1, 0LL, 0LL, byte_140C0D8FC);
  }
}
