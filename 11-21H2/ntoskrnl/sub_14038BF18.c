/*
 * XREFs of sub_14038BF18 @ 0x14038BF18
 * Callers:
 *     sub_1403A3C90 @ 0x1403A3C90 (sub_1403A3C90.c)
 *     sub_140A4A768 @ 0x140A4A768 (sub_140A4A768.c)
 *     sub_140A4ADB0 @ 0x140A4ADB0 (sub_140A4ADB0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14038BF18(unsigned int a1, int a2, char a3)
{
  __int64 result; // rax

  result = 7LL;
  if ( a1 == 7 )
  {
    if ( a3 )
      return 3 - (unsigned int)(a2 != 5);
  }
  else
  {
    if ( a2 == 5 )
      return 3;
    return a1;
  }
  return result;
}
