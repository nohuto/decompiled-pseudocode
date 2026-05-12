/*
 * XREFs of sub_1C0044F40 @ 0x1C0044F40
 * Callers:
 *     sub_1C0044FB8 @ 0x1C0044FB8 (sub_1C0044FB8.c)
 *     sub_1C004CB40 @ 0x1C004CB40 (sub_1C004CB40.c)
 * Callees:
 *     <none>
 */

char *__fastcall sub_1C0044F40(_DWORD *a1, unsigned int a2)
{
  char *result; // rax
  __int64 v3; // rax

  result = 0LL;
  if ( *a1 == 1 )
  {
    if ( a2 >= a1[2] )
      return result;
    v3 = 32 * (a2 + 1LL);
    return (char *)a1 + v3;
  }
  if ( *a1 == 2 && a2 < a1[2] )
  {
    v3 = 32LL * a2 + 40;
    return (char *)a1 + v3;
  }
  return result;
}
