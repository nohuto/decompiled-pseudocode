/*
 * XREFs of sub_140564FF8 @ 0x140564FF8
 * Callers:
 *     sub_1405660A0 @ 0x1405660A0 (sub_1405660A0.c)
 *     sub_140A67994 @ 0x140A67994 (sub_140A67994.c)
 * Callees:
 *     sub_140564F3C @ 0x140564F3C (sub_140564F3C.c)
 */

__int64 sub_140564FF8()
{
  __int64 result; // rax

  if ( byte_140D01928 )
  {
    result = sub_140564F3C(&xmmword_140C02190);
    byte_140D01928 = 0;
  }
  return result;
}
