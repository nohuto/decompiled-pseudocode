/*
 * XREFs of sub_140396AF4 @ 0x140396AF4
 * Callers:
 *     sub_14051F6C4 @ 0x14051F6C4 (sub_14051F6C4.c)
 *     sub_140A523B0 @ 0x140A523B0 (sub_140A523B0.c)
 * Callees:
 *     sub_14022D9C0 @ 0x14022D9C0 (sub_14022D9C0.c)
 */

__int64 __fastcall sub_140396AF4(__int64 a1, unsigned __int8 *a2)
{
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned __int8 v7; // al
  unsigned int v9; // ecx

  sub_14022D9C0();
  v3 = a2[10];
  __outbyte(0x70u, 1u);
  __outbyte(0x71u, v3 % 0xA + 16 * (v3 / 0xA));
  v4 = a2[8];
  __outbyte(0x70u, 3u);
  __outbyte(0x71u, v4 % 0xA + 16 * (v4 / 0xA));
  v5 = a2[6];
  __outbyte(0x70u, 5u);
  __outbyte(0x71u, v5 % 0xA + 16 * (v5 / 0xA));
  if ( (unsigned __int8)byte_140C4C08A > 9u )
  {
    v6 = a2[4];
    __outbyte(0x70u, byte_140C4C08A);
    __outbyte(0x71u, v6 % 0xA + 16 * (v6 / 0xA));
    if ( (unsigned __int8)byte_140C4C08B > 9u )
    {
      v9 = a2[2];
      __outbyte(0x70u, byte_140C4C08B);
      __outbyte(0x71u, v9 % 0xA + 16 * (v9 / 0xA));
    }
  }
  __outbyte(0x70u, 0xBu);
  v7 = __inbyte(0x71u);
  __outbyte(0x70u, 0xBu);
  __outbyte(0x71u, v7 & 0x41 | 0x22);
  __outbyte(0x70u, 0xCu);
  __inbyte(0x71u);
  __outbyte(0x70u, 0xDu);
  __inbyte(0x71u);
  _InterlockedExchange(&dword_140C0B460, -1);
  if ( byte_140C4C1F0 )
    _enable();
  return 0LL;
}
