/*
 * XREFs of sub_1402EB3F8 @ 0x1402EB3F8
 * Callers:
 *     sub_1402715A0 @ 0x1402715A0 (sub_1402715A0.c)
 *     sub_1402EB398 @ 0x1402EB398 (sub_1402EB398.c)
 *     sub_140313D20 @ 0x140313D20 (sub_140313D20.c)
 *     sub_140B04C20 @ 0x140B04C20 (sub_140B04C20.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402EB3F8(__int64 a1, char a2, int a3)
{
  __int64 result; // rax

  result = 5LL;
  if ( (a2 & 5) == 4 || !a3 && (a2 & 5) == 5 )
    return 6LL;
  if ( (a2 & 2) != 0 )
    return a3 == 0 ? 4 : 0;
  if ( (a2 & 1) == 0 )
    return a3 != 0 ? 2 : 5;
  if ( a3 )
    return ((unsigned int)dword_140D06880 >> 15) & 1;
  return result;
}
