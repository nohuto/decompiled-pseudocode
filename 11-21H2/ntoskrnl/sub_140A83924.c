/*
 * XREFs of sub_140A83924 @ 0x140A83924
 * Callers:
 *     sub_140A85840 @ 0x140A85840 (sub_140A85840.c)
 *     sub_140A895A4 @ 0x140A895A4 (sub_140A895A4.c)
 * Callees:
 *     sub_1405FFA20 @ 0x1405FFA20 (sub_1405FFA20.c)
 *     sub_140A88948 @ 0x140A88948 (sub_140A88948.c)
 */

void __fastcall sub_140A83924(__int64 a1)
{
  signed __int32 v2; // ebx
  unsigned int v3; // ecx
  unsigned __int32 v4; // ebx

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 176), 1u);
  v3 = *(_DWORD *)(a1 + 172);
  v4 = v2 + 1;
  if ( v4 > v3 )
  {
    sub_140A88948(byte_140C0D914, "Freed too many common buffers.", 3LL, v4 - v3, 0LL, 0LL);
    sub_1405FFA20(0xE6u, 3uLL, v4 - *(_DWORD *)(a1 + 172), 0LL, 0LL, byte_140C0D914);
  }
}
