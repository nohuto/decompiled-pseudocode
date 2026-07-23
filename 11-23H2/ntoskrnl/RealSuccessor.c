/*
 * XREFs of RealSuccessor @ 0x140371A5C
 * Callers:
 *     RtlEnumerateGenericTableWithoutSplayingAvl @ 0x1403718F0 (RtlEnumerateGenericTableWithoutSplayingAvl.c)
 *     RtlEnumerateGenericTableLikeADirectory @ 0x140371950 (RtlEnumerateGenericTableLikeADirectory.c)
 *     RtlGetElementGenericTableAvl @ 0x1405AEB20 (RtlGetElementGenericTableAvl.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RealSuccessor(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rdx
  _QWORD *v3; // r8
  _QWORD *i; // rcx

  result = (_QWORD *)a1[2];
  v2 = 0LL;
  v3 = a1;
  if ( result )
  {
    for ( i = (_QWORD *)result[1]; i; i = (_QWORD *)i[1] )
      result = i;
  }
  else
  {
    while ( 1 )
    {
      a1 = (_QWORD *)*a1;
      if ( (_QWORD *)a1[2] != v3 )
        break;
      v3 = a1;
    }
    if ( (_QWORD *)a1[1] == v3 )
      return a1;
    return (_QWORD *)v2;
  }
  return result;
}
