/*
 * XREFs of sub_1405184BC @ 0x1405184BC
 * Callers:
 *     HalSetRealTimeClock @ 0x140503420 (HalSetRealTimeClock.c)
 * Callees:
 *     sub_14022D9C0 @ 0x14022D9C0 (sub_14022D9C0.c)
 */

__int64 __fastcall sub_1405184BC(unsigned __int8 *a1)
{
  unsigned int v2; // r8d
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // r8d
  unsigned __int8 v9; // al
  __int64 result; // rax

  sub_14022D9C0();
  v2 = a1[10];
  __outbyte(0x70u, 0);
  __outbyte(0x71u, v2 % 0xA + 16 * (v2 / 0xA));
  v3 = a1[8];
  __outbyte(0x70u, 2u);
  __outbyte(0x71u, v3 % 0xA + 16 * (v3 / 0xA));
  v4 = a1[6];
  __outbyte(0x70u, 4u);
  __outbyte(0x71u, v4 % 0xA + 16 * (v4 / 0xA));
  v5 = a1[14];
  __outbyte(0x70u, 6u);
  __outbyte(0x71u, v5 % 0xA + 16 * (v5 / 0xA));
  v6 = a1[4];
  __outbyte(0x70u, 7u);
  __outbyte(0x71u, v6 % 0xA + 16 * (v6 / 0xA));
  v7 = a1[2];
  __outbyte(0x70u, 8u);
  __outbyte(0x71u, v7 % 0xA + 16 * (v7 / 0xA));
  v8 = *(__int16 *)a1;
  if ( v8 > 0x270F )
    v8 = 9999;
  if ( (dword_140C4BCA0 & 0x100) != 0 )
  {
    __outbyte(0x70u, 0xAu);
    v9 = __inbyte(0x71u);
    __outbyte(0x70u, 0xAu);
    __outbyte(0x71u, v9 | 0x10);
    __outbyte(0x70u, dword_140C4BCA0);
    __outbyte(0x71u, (unsigned __int8)(v8 / 0x64) % 0xAu + 16 * ((unsigned __int8)(v8 / 0x64) / 0xAu));
    __outbyte(0x70u, 0xAu);
  }
  else
  {
    __outbyte(0x70u, dword_140C4BCA0);
    v9 = (unsigned __int8)(v8 / 0x64) % 0xAu + 16 * ((unsigned __int8)(v8 / 0x64) / 0xAu);
  }
  __outbyte(0x71u, v9);
  __outbyte(0x70u, 9u);
  __outbyte(0x71u, v8 % 0x64 % 0xA + 16 * (v8 % 0x64 / 0xA));
  result = (unsigned int)_InterlockedExchange(&dword_140C0B460, -1);
  if ( byte_140C4C1F0 )
    _enable();
  return result;
}
