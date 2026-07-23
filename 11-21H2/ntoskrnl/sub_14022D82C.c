/*
 * XREFs of sub_14022D82C @ 0x14022D82C
 * Callers:
 *     HalQueryRealTimeClock @ 0x14022D360 (HalQueryRealTimeClock.c)
 * Callees:
 *     sub_14022D9C0 @ 0x14022D9C0 (sub_14022D9C0.c)
 */

__int64 __fastcall sub_14022D82C(_WORD *a1)
{
  unsigned __int8 v2; // al
  unsigned __int8 v3; // al
  unsigned __int8 v4; // al
  unsigned __int8 v5; // al
  unsigned __int8 v6; // al
  unsigned __int8 v7; // al
  unsigned __int8 v8; // al
  unsigned __int8 v9; // r9
  unsigned __int8 v10; // al
  __int16 v11; // dx
  __int16 v12; // cx
  __int64 result; // rax
  unsigned __int8 v14; // al
  unsigned __int8 v15; // cl
  unsigned __int8 v16; // al

  sub_14022D9C0();
  a1[6] = 500;
  __outbyte(0x70u, 0);
  v2 = __inbyte(0x71u);
  a1[5] = (unsigned __int8)((v2 & 0xF) + 10 * (v2 >> 4));
  __outbyte(0x70u, 2u);
  v3 = __inbyte(0x71u);
  a1[4] = (unsigned __int8)((v3 & 0xF) + 10 * (v3 >> 4));
  __outbyte(0x70u, 4u);
  v4 = __inbyte(0x71u);
  a1[3] = (unsigned __int8)((v4 & 0xF) + 10 * (v4 >> 4));
  __outbyte(0x70u, 6u);
  v5 = __inbyte(0x71u);
  a1[7] = (unsigned __int8)((v5 & 0xF) + 10 * (v5 >> 4));
  __outbyte(0x70u, 7u);
  v6 = __inbyte(0x71u);
  a1[2] = (unsigned __int8)((v6 & 0xF) + 10 * (v6 >> 4));
  __outbyte(0x70u, 8u);
  v7 = __inbyte(0x71u);
  a1[1] = (unsigned __int8)((v7 & 0xF) + 10 * (v7 >> 4));
  if ( (dword_140C4BCA0 & 0x100) != 0 )
  {
    __outbyte(0x70u, 0xAu);
    v14 = __inbyte(0x71u);
    v15 = v14;
    __outbyte(0x70u, 0xAu);
    __outbyte(0x71u, v14 | 0x10);
    __outbyte(0x70u, dword_140C4BCA0);
    v16 = __inbyte(0x71u);
    v9 = v16;
    __outbyte(0x70u, 0xAu);
    __outbyte(0x71u, v15);
  }
  else
  {
    __outbyte(0x70u, dword_140C4BCA0);
    v8 = __inbyte(0x71u);
    v9 = v8;
  }
  __outbyte(0x70u, 9u);
  v10 = __inbyte(0x71u);
  v11 = (unsigned __int8)((v10 & 0xF) + 10 * (v10 >> 4)) + 100 * (unsigned __int8)((v9 & 0xF) + 10 * (v9 >> 4));
  v12 = v11 + 100;
  if ( (unsigned __int16)(v11 - 1900) > 0x13u )
    v12 = (unsigned __int8)((v10 & 0xF) + 10 * (v10 >> 4)) + 100 * (unsigned __int8)((v9 & 0xF) + 10 * (v9 >> 4));
  *a1 = v12;
  result = (unsigned int)_InterlockedExchange(&dword_140C0B460, -1);
  if ( byte_140C4C1F0 )
    _enable();
  return result;
}
