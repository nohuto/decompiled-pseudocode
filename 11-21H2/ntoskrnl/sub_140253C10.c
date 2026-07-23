/*
 * XREFs of sub_140253C10 @ 0x140253C10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 */

__int64 __fastcall sub_140253C10(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = 2LL;
  do
  {
    if ( *a1 )
      result = sub_1402AD030(*a1 + 32LL);
    ++a1;
    --v2;
  }
  while ( v2 );
  return result;
}
