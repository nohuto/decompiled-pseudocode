/*
 * XREFs of sub_140435480 @ 0x140435480
 * Callers:
 *     sub_140435440 @ 0x140435440 (sub_140435440.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140435480(int a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  LODWORD(result) = 7;
  do
    result = (unsigned int)(result - 1);
  while ( (_DWORD)result );
  v2 = (unsigned int)(a1 - 1);
  if ( (_DWORD)v2 )
    return sub_140435440(v2);
  return result;
}
