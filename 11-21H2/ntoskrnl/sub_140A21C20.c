/*
 * XREFs of sub_140A21C20 @ 0x140A21C20
 * Callers:
 *     sub_140A22034 @ 0x140A22034 (sub_140A22034.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall sub_140A21C20(unsigned int *a1, int a2)
{
  __int64 v2; // rax
  unsigned int *result; // rax

  while ( 1 )
  {
    result = a1 + 1;
    if ( a1[3] == a2 )
      break;
    v2 = *a1;
    if ( !(_DWORD)v2 )
      return 0LL;
    a1 = (unsigned int *)((char *)a1 + v2);
  }
  return result;
}
