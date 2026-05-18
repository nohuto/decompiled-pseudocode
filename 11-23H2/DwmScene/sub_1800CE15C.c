/*
 * XREFs of sub_1800CE15C @ 0x1800CE15C
 * Callers:
 *     sub_1800CCEFC @ 0x1800CCEFC (sub_1800CCEFC.c)
 *     sub_1800CD024 @ 0x1800CD024 (sub_1800CD024.c)
 * Callees:
 *     sub_1800CEA10 @ 0x1800CEA10 (sub_1800CEA10.c)
 */

__int64 sub_1800CE15C()
{
  __int64 result; // rax

  result = sub_1800CEA10();
  if ( (_DWORD)result == 45 )
    return 44LL;
  if ( (_DWORD)result == 40 )
    return 39LL;
  return result;
}
