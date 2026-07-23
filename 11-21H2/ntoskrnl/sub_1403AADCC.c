/*
 * XREFs of sub_1403AADCC @ 0x1403AADCC
 * Callers:
 *     sub_140A53828 @ 0x140A53828 (sub_140A53828.c)
 * Callees:
 *     sub_1403AAE50 @ 0x1403AAE50 (sub_1403AAE50.c)
 *     sub_140509E04 @ 0x140509E04 (sub_140509E04.c)
 */

__int64 __fastcall sub_1403AADCC(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = sub_1403AAE50();
  if ( (_BYTE)result == 1 )
  {
    if ( byte_140D016E8 )
      return sub_140509E04(a1, a2);
  }
  return result;
}
