/*
 * XREFs of sub_14024F548 @ 0x14024F548
 * Callers:
 *     sub_1406D45B4 @ 0x1406D45B4 (sub_1406D45B4.c)
 *     sub_1409E512C @ 0x1409E512C (sub_1409E512C.c)
 *     sub_1409E54B0 @ 0x1409E54B0 (sub_1409E54B0.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall sub_14024F548(unsigned int *a1, int a2)
{
  __int64 v2; // rax
  unsigned int v4; // r8d
  unsigned __int64 v5; // r10
  unsigned int *v6; // rdx
  unsigned int *result; // rax

  v2 = a1[1];
  v4 = a2 & a1[2];
  v5 = (unsigned __int64)&a1[v2 + 13];
  if ( v4 >= (unsigned int)v2 )
    v4 = v4 - (unsigned int)v2 < (unsigned int)v2 ? v4 - v2 : 0;
  v6 = &a1[v4 + 13];
  result = v6;
  if ( (unsigned __int64)v6 >= v5 )
  {
LABEL_8:
    for ( result = a1 + 13; result < v6; ++result )
    {
      if ( !*result || *result == a2 )
        return result;
    }
    return 0LL;
  }
  else
  {
    while ( *result && *result != a2 )
    {
      if ( (unsigned __int64)++result >= v5 )
        goto LABEL_8;
    }
  }
  return result;
}
