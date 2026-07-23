/*
 * XREFs of sub_14039188C @ 0x14039188C
 * Callers:
 *     sub_140A5072C @ 0x140A5072C (sub_140A5072C.c)
 *     sub_140A625DC @ 0x140A625DC (sub_140A625DC.c)
 * Callees:
 *     sub_14022D9F0 @ 0x14022D9F0 (sub_14022D9F0.c)
 */

__int64 __fastcall sub_14039188C(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // al
  unsigned __int8 v4; // al
  __int64 result; // rax

  sub_14022D9F0(a1, a2, a3);
  __outbyte(0x70u, 0xAu);
  v3 = __inbyte(0x71u);
  byte_140C4C010 = v3;
  __outbyte(0x70u, 0xBu);
  v4 = __inbyte(0x71u);
  byte_140C4C011 = v4;
  __outbyte(0x70u, 0xBu);
  __outbyte(0x71u, v4 & 0xBD | 2);
  __outbyte(0x70u, 0xCu);
  __inbyte(0x71u);
  __outbyte(0x70u, 0xDu);
  __inbyte(0x71u);
  result = (unsigned int)_InterlockedExchange(&dword_140C0B460, -1);
  if ( byte_140C4C1F0 )
    _enable();
  return result;
}
