/*
 * XREFs of sub_1405FA9B0 @ 0x1405FA9B0
 * Callers:
 *     sub_1405F9C34 @ 0x1405F9C34 (sub_1405F9C34.c)
 *     sub_1405FA010 @ 0x1405FA010 (sub_1405FA010.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_1405FA9B0(__int64 a1, int a2)
{
  _DWORD *result; // rax
  unsigned __int64 v3; // rcx

  result = (_DWORD *)(a1 + 1104);
  v3 = a1 + 1248;
  while ( (unsigned __int64)result < v3 )
  {
    if ( *result == a2 )
      return result;
    result += 6;
  }
  return 0LL;
}
