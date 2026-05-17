/*
 * XREFs of RtlEnumerateGenericTableWithoutSplayingAvl @ 0x180063640
 * Callers:
 *     RtlEnumerateGenericTableAvl @ 0x180063620 (RtlEnumerateGenericTableAvl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlEnumerateGenericTableWithoutSplayingAvl(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rcx
  _QWORD *j; // rax
  _QWORD *i; // rcx
  _QWORD *k; // rcx

  if ( *(_DWORD *)(a1 + 44) )
  {
    v3 = (_QWORD *)*a2;
    if ( *a2 )
    {
      j = (_QWORD *)v3[2];
      if ( j )
      {
        for ( i = (_QWORD *)j[1]; i; i = (_QWORD *)i[1] )
          j = i;
      }
      else
      {
        for ( j = (_QWORD *)*v3; (_QWORD *)j[2] == v3; j = (_QWORD *)*j )
          v3 = j;
        if ( (_QWORD *)j[1] != v3 )
        {
          j = 0LL;
          return (unsigned __int64)(j + 4) & -(__int64)(j != 0LL);
        }
      }
      if ( !j )
        return (unsigned __int64)(j + 4) & -(__int64)(j != 0LL);
    }
    else
    {
      j = *(_QWORD **)(a1 + 16);
      for ( k = (_QWORD *)j[1]; k; k = (_QWORD *)k[1] )
        j = k;
    }
    *a2 = j;
    return (unsigned __int64)(j + 4) & -(__int64)(j != 0LL);
  }
  return 0LL;
}
