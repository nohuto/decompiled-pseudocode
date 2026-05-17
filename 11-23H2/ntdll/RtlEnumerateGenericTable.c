/*
 * XREFs of RtlEnumerateGenericTable @ 0x1800629D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x180062E00 (RtlSplay.c)
 *     RtlRealSuccessor @ 0x180063260 (RtlRealSuccessor.c)
 */

__int64 __fastcall RtlEnumerateGenericTable(__int64 *a1, char a2)
{
  __int64 v2; // rbx
  __int64 i; // rax
  __int64 v5; // rcx
  __int64 v7; // rax

  v2 = *a1;
  if ( *a1 )
  {
    if ( a2 )
    {
      for ( i = *(_QWORD *)(v2 + 8); i; i = *(_QWORD *)(i + 8) )
        v2 = i;
      v5 = v2;
    }
    else
    {
      v7 = RtlRealSuccessor(*a1);
      v2 = v7;
      if ( !v7 )
        return (v2 + 40) & -(__int64)(v2 != 0);
      v5 = v7;
    }
    *a1 = RtlSplay(v5);
    return (v2 + 40) & -(__int64)(v2 != 0);
  }
  return 0LL;
}
