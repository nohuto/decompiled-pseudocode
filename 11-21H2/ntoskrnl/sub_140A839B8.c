/*
 * XREFs of sub_140A839B8 @ 0x140A839B8
 * Callers:
 *     sub_140A84BC0 @ 0x140A84BC0 (sub_140A84BC0.c)
 *     sub_140A84F20 @ 0x140A84F20 (sub_140A84F20.c)
 *     sub_140A85DA0 @ 0x140A85DA0 (sub_140A85DA0.c)
 *     sub_140A86160 @ 0x140A86160 (sub_140A86160.c)
 *     sub_140A86C30 @ 0x140A86C30 (sub_140A86C30.c)
 * Callees:
 *     sub_1405FFA20 @ 0x1405FFA20 (sub_1405FFA20.c)
 *     sub_140A88948 @ 0x140A88948 (sub_140A88948.c)
 */

void __fastcall sub_140A839B8(__int64 a1)
{
  int v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 168));
  if ( v2 < 0 )
  {
    sub_140A88948(
      byte_140C0D8F8,
      "Driver has freed too many scatter gather lists %x allocated, %x freed.",
      6,
      *(_DWORD *)(a1 + 164));
    sub_1405FFA20(
      0xE6u,
      6uLL,
      *(unsigned int *)(a1 + 164),
      (unsigned int)(*(_DWORD *)(a1 + 164) - v2),
      0LL,
      byte_140C0D8F8);
  }
}
