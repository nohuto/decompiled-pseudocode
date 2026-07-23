/*
 * XREFs of sub_140997F34 @ 0x140997F34
 * Callers:
 *     sub_140849E68 @ 0x140849E68 (sub_140849E68.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140997F34(char a1, char a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
    return a2 != 0 ? 1 : 3;
  if ( a2 )
    return 2LL;
  return result;
}
