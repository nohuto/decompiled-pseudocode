/*
 * XREFs of sub_140B01800 @ 0x140B01800
 * Callers:
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     sub_140828004 @ 0x140828004 (sub_140828004.c)
 */

__int64 sub_140B01800()
{
  __int64 result; // rax

  result = sub_140828004(byte_140C06738, (__int64)sub_140865400, 0LL);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)&qword_140C53448 = byte_140C06738;
    return 0LL;
  }
  return result;
}
