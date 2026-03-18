/*
 * XREFs of sub_140434E80 @ 0x140434E80
 * Callers:
 *     sub_140434E40 @ 0x140434E40 (sub_140434E40.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140434E80(int a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  LODWORD(result) = 7;
  do
    result = (unsigned int)(result - 1);
  while ( (_DWORD)result );
  v2 = (unsigned int)(a1 - 1);
  if ( (_DWORD)v2 )
    return sub_140434E40(v2);
  return result;
}
