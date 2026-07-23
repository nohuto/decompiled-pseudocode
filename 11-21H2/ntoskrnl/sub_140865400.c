/*
 * XREFs of sub_140865400 @ 0x140865400
 * Callers:
 *     <none>
 * Callees:
 *     sub_140975748 @ 0x140975748 (sub_140975748.c)
 */

__int64 __fastcall sub_140865400(__int64 a1, int a2, __int64 a3, char a4)
{
  __int64 result; // rax

  result = (unsigned int)(a2 - 1);
  if ( (unsigned int)result <= 1 && (a4 & 0x20) != 0 )
    return sub_140975748();
  return result;
}
