/*
 * XREFs of sub_140A83888 @ 0x140A83888
 * Callers:
 *     sub_140A84180 @ 0x140A84180 (sub_140A84180.c)
 *     sub_140A843D0 @ 0x140A843D0 (sub_140A843D0.c)
 *     sub_140A85150 @ 0x140A85150 (sub_140A85150.c)
 *     sub_140A85600 @ 0x140A85600 (sub_140A85600.c)
 *     sub_140A856B0 @ 0x140A856B0 (sub_140A856B0.c)
 *     sub_140A86EA0 @ 0x140A86EA0 (sub_140A86EA0.c)
 * Callees:
 *     sub_1405FFA20 @ 0x1405FFA20 (sub_1405FFA20.c)
 *     sub_140A88948 @ 0x140A88948 (sub_140A88948.c)
 */

void __fastcall sub_140A83888(__int64 a1)
{
  signed __int32 v2; // ebx

  v2 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 184));
  if ( *(_DWORD *)(a1 + 192) < 3u && v2 != *(_DWORD *)(a1 + 180) )
  {
    sub_140A88948(byte_140C0D908, "Driver has freed too many simultaneous adapter channels.", 4LL);
    sub_1405FFA20(0xE6u, 4uLL, v2 != *(_DWORD *)(a1 + 180), 0LL, 0LL, byte_140C0D908);
  }
}
