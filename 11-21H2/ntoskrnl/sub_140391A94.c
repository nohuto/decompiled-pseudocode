/*
 * XREFs of sub_140391A94 @ 0x140391A94
 * Callers:
 *     sub_140A50388 @ 0x140A50388 (sub_140A50388.c)
 *     sub_140A622EC @ 0x140A622EC (sub_140A622EC.c)
 * Callees:
 *     sub_14022D9F0 @ 0x14022D9F0 (sub_14022D9F0.c)
 */

__int64 __fastcall sub_140391A94(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // cl
  unsigned __int8 v4; // cl
  __int64 result; // rax

  sub_14022D9F0(a1, a2, a3);
  v3 = byte_140C4C010;
  __outbyte(0x70u, 0xAu);
  __outbyte(0x71u, v3);
  v4 = byte_140C4C011 & 0xDD | 2;
  __outbyte(0x70u, 0xBu);
  __outbyte(0x71u, v4);
  __outbyte(0x70u, 0xCu);
  __inbyte(0x71u);
  __outbyte(0x70u, 0xDu);
  __inbyte(0x71u);
  result = (unsigned int)_InterlockedExchange(&dword_140C0B460, -1);
  if ( byte_140C4C1F0 )
    _enable();
  return result;
}
