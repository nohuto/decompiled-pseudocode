/*
 * XREFs of sub_1402DEC9C @ 0x1402DEC9C
 * Callers:
 *     RtlEnumerateGenericTableWithoutSplayingAvl @ 0x1402DEA50 (RtlEnumerateGenericTableWithoutSplayingAvl.c)
 *     RtlEnumerateGenericTableLikeADirectory @ 0x1402DEB90 (RtlEnumerateGenericTableLikeADirectory.c)
 *     RtlGetElementGenericTableAvl @ 0x1405EB370 (RtlGetElementGenericTableAvl.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1402DEC9C(_QWORD *a1)
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
