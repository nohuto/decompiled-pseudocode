/*
 * XREFs of sub_140A83AE4 @ 0x140A83AE4
 * Callers:
 *     sub_140A84180 @ 0x140A84180 (sub_140A84180.c)
 *     sub_140A843D0 @ 0x140A843D0 (sub_140A843D0.c)
 * Callees:
 *     sub_1405FFA20 @ 0x1405FFA20 (sub_1405FFA20.c)
 *     sub_140A88948 @ 0x140A88948 (sub_140A88948.c)
 */

void __fastcall sub_140A83AE4(__int64 a1)
{
  signed __int32 v2; // ebx
  int v3; // ecx

  v2 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 180));
  if ( *(_DWORD *)(a1 + 192) < 3u )
  {
    v3 = *(_DWORD *)(a1 + 184);
    if ( v2 != v3 + 1 )
    {
      sub_140A88948(
        byte_140C0D904,
        "Driver has allocated too many simultaneous adapter channels.",
        11LL,
        (unsigned int)(v2 - v3),
        0LL,
        0LL);
      sub_1405FFA20(0xE6u, 0xBuLL, (unsigned int)(v2 - *(_DWORD *)(a1 + 184)), 0LL, 0LL, byte_140C0D904);
    }
  }
}
