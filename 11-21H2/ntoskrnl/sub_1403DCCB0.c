/*
 * XREFs of sub_1403DCCB0 @ 0x1403DCCB0
 * Callers:
 *     sub_1403DCC38 @ 0x1403DCC38 (sub_1403DCC38.c)
 *     sub_140502744 @ 0x140502744 (sub_140502744.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403DCCB0(__int64 a1, unsigned __int64 a2, __int64 a3, __int16 a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( (a4 & 0x100) != 0 )
  {
    if ( !a1 && a2 || a2 > 0x7FFFFFFF )
      return 3221225485LL;
  }
  else if ( a2 - 1 > 0x7FFFFFFE )
  {
    return 3221225485LL;
  }
  return result;
}
