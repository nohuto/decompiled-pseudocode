/*
 * XREFs of sub_1404357C0 @ 0x1404357C0
 * Callers:
 *     sub_140435780 @ 0x140435780 (sub_140435780.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1404357C0(int a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  LODWORD(result) = 5;
  do
    result = (unsigned int)(result - 1);
  while ( (_DWORD)result );
  v2 = (unsigned int)(a1 - 1);
  if ( (_DWORD)v2 )
    return sub_140435780(v2);
  return result;
}
