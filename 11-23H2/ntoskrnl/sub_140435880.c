/*
 * XREFs of sub_140435880 @ 0x140435880
 * Callers:
 *     sub_140435840 @ 0x140435840 (sub_140435840.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140435880(int a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  LODWORD(result) = 7;
  do
    result = (unsigned int)(result - 1);
  while ( (_DWORD)result );
  v2 = (unsigned int)(a1 - 1);
  if ( (_DWORD)v2 )
    return sub_140435840(v2);
  return result;
}
