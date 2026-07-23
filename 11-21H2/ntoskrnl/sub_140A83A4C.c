/*
 * XREFs of sub_140A83A4C @ 0x140A83A4C
 * Callers:
 *     sub_140A86510 @ 0x140A86510 (sub_140A86510.c)
 *     sub_140A866D0 @ 0x140A866D0 (sub_140A866D0.c)
 * Callees:
 *     sub_1405FFA20 @ 0x1405FFA20 (sub_1405FFA20.c)
 *     sub_140A88948 @ 0x140A88948 (sub_140A88948.c)
 */

void __fastcall sub_140A83A4C(__int64 a1, unsigned int a2, char a3)
{
  unsigned __int32 v3; // r9d
  unsigned __int32 v4; // eax
  unsigned __int32 v5; // ebx
  unsigned __int32 v6; // edi

  v3 = *(_DWORD *)(a1 + 160) << 12;
  v4 = a2 + _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 188), a2);
  if ( !a3 && v4 > v3 )
  {
    v5 = v3;
    v6 = v4;
    sub_140A88948(byte_140C0D900, "Driver did not flush adapter buffers -- bytes mapped: %x (%x max).", 13, v4);
    sub_1405FFA20(0xE6u, 0xDuLL, v6, v5, 0LL, byte_140C0D900);
  }
}
