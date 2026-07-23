/*
 * XREFs of RealPredecessor @ 0x140360738
 * Callers:
 *     RtlDeleteElementGenericTableAvl @ 0x14031EC60 (RtlDeleteElementGenericTableAvl.c)
 *     RtlLookupFirstMatchingElementGenericTableAvl @ 0x1403D52B0 (RtlLookupFirstMatchingElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvlEx @ 0x1405AEAC0 (RtlDeleteElementGenericTableAvlEx.c)
 *     RtlGetElementGenericTableAvl @ 0x1405AEB20 (RtlGetElementGenericTableAvl.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RealPredecessor(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rdx
  _QWORD *v3; // r8
  _QWORD *i; // rcx

  result = (_QWORD *)a1[1];
  v2 = 0LL;
  v3 = a1;
  if ( result )
  {
    for ( i = (_QWORD *)result[2]; i; i = (_QWORD *)i[2] )
      result = i;
  }
  else
  {
    while ( 1 )
    {
      a1 = (_QWORD *)*a1;
      if ( (_QWORD *)a1[1] != v3 )
        break;
      v3 = a1;
    }
    if ( (_QWORD *)a1[2] == v3 )
    {
      if ( (_QWORD *)*a1 != a1 )
        return a1;
      return (_QWORD *)v2;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
