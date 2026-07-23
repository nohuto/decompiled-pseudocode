/*
 * XREFs of sub_1403A96AC @ 0x1403A96AC
 * Callers:
 *     sub_1403A8390 @ 0x1403A8390 (sub_1403A8390.c)
 *     sub_1403A8E50 @ 0x1403A8E50 (sub_1403A8E50.c)
 *     sub_1403CADA8 @ 0x1403CADA8 (sub_1403CADA8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403A96AC(int a1)
{
  __int64 result; // rax

  result = (unsigned int)(a1 >> 6);
  if ( a1 < 0 )
    return (unsigned int)result | 0xFC000000;
  if ( (a1 & 0x3F) != 0 )
    return (unsigned int)(result + 1);
  return result;
}
