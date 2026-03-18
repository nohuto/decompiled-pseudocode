/*
 * XREFs of sub_140434DC0 @ 0x140434DC0
 * Callers:
 *     sub_140434D80 @ 0x140434D80 (sub_140434D80.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140434DC0(int a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  LODWORD(result) = 5;
  do
    result = (unsigned int)(result - 1);
  while ( (_DWORD)result );
  v2 = (unsigned int)(a1 - 1);
  if ( (_DWORD)v2 )
    return sub_140434D80(v2);
  return result;
}
