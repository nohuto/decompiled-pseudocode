/*
 * XREFs of sub_14050BD94 @ 0x14050BD94
 * Callers:
 *     sub_14050BD14 @ 0x14050BD14 (sub_14050BD14.c)
 * Callees:
 *     sub_14022D9F0 @ 0x14022D9F0 (sub_14022D9F0.c)
 */

char __fastcall sub_14050BD94(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // al
  unsigned __int8 v4; // dl

  if ( (a1 & 1) == 0 )
    return byte_140D01718;
  sub_14022D9F0(a1, a2, a3);
  __outbyte(0x70u, byte_140D01718);
  v3 = __inbyte(0x71u);
  v4 = v3;
  _InterlockedExchange(&dword_140C0B460, -1);
  if ( byte_140C4C1F0 )
    _enable();
  return v4;
}
