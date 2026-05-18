/*
 * XREFs of sub_1800DBC28 @ 0x1800DBC28
 * Callers:
 *     sub_1800F9690 @ 0x1800F9690 (sub_1800F9690.c)
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_1800DBBD4 @ 0x1800DBBD4 (sub_1800DBBD4.c)
 */

__int64 sub_1800DBC28()
{
  LPVOID v0; // rcx
  __int64 result; // rax
  void *v2; // rbx

  while ( 1 )
  {
    v2 = lpMem;
    if ( !lpMem )
      break;
    v0 = lpMem;
    lpMem = *(LPVOID *)lpMem;
    sub_1800DBBD4((__int64)v0);
    result = sub_18000B988(v2);
  }
  return result;
}
