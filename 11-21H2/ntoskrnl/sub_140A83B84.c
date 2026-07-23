/*
 * XREFs of sub_140A83B84 @ 0x140A83B84
 * Callers:
 *     sub_1405FE678 @ 0x1405FE678 (sub_1405FE678.c)
 *     sub_140A84180 @ 0x140A84180 (sub_140A84180.c)
 *     sub_140A843D0 @ 0x140A843D0 (sub_140A843D0.c)
 *     sub_140A85150 @ 0x140A85150 (sub_140A85150.c)
 *     sub_140A85600 @ 0x140A85600 (sub_140A85600.c)
 *     sub_140A856B0 @ 0x140A856B0 (sub_140A856B0.c)
 *     sub_140A859A0 @ 0x140A859A0 (sub_140A859A0.c)
 *     sub_140A86C30 @ 0x140A86C30 (sub_140A86C30.c)
 *     sub_140A86EA0 @ 0x140A86EA0 (sub_140A86EA0.c)
 * Callees:
 *     sub_1405FFA20 @ 0x1405FFA20 (sub_1405FFA20.c)
 *     sub_140A88948 @ 0x140A88948 (sub_140A88948.c)
 */

void __fastcall sub_140A83B84(__int64 a1, int a2)
{
  int v3; // eax
  ULONG_PTR v4; // rbx

  v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 160), -a2) - a2;
  if ( v3 < 0 )
  {
    v4 = -v3;
    sub_140A88948(byte_140C0D910, "Freed too many map registers: -%x.", 5);
    sub_1405FFA20(0xE6u, 5uLL, v4, 0LL, 0LL, byte_140C0D910);
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 188), 0);
}
