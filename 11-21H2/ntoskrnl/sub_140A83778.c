/*
 * XREFs of sub_140A83778 @ 0x140A83778
 * Callers:
 *     sub_140A84180 @ 0x140A84180 (sub_140A84180.c)
 *     sub_140A843D0 @ 0x140A843D0 (sub_140A843D0.c)
 *     sub_140A84950 @ 0x140A84950 (sub_140A84950.c)
 *     sub_140A862F0 @ 0x140A862F0 (sub_140A862F0.c)
 *     sub_140A89390 @ 0x140A89390 (sub_140A89390.c)
 * Callees:
 *     sub_1405FFA20 @ 0x1405FFA20 (sub_1405FFA20.c)
 *     sub_140A88948 @ 0x140A88948 (sub_140A88948.c)
 */

void __fastcall sub_140A83778(__int64 a1, unsigned int a2, char a3)
{
  unsigned __int32 v5; // esi

  v5 = a2 + _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 160), a2);
  _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 156), a2);
  if ( a2 > *(_DWORD *)(a1 + 152) )
  {
    sub_140A88948(byte_140C0D920, "Allocating too many map registers at a time: %x (max %x).", 12, a2);
    sub_1405FFA20(0xE6u, 0xCuLL, a2, *(unsigned int *)(a1 + 152), 0LL, byte_140C0D920);
  }
  if ( !a3 && v5 > *(_DWORD *)(a1 + 152) )
  {
    sub_140A88948(byte_140C0D90C, "Allocated too many map registers : %x (max %x).", 21, v5);
    sub_1405FFA20(0xE6u, 0x15uLL, v5, *(unsigned int *)(a1 + 152), 0LL, byte_140C0D90C);
  }
}
