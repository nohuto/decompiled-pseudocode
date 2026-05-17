/*
 * XREFs of RtlEnumerateGenericTableWithoutSplaying @ 0x180063270
 * Callers:
 *     <none>
 * Callees:
 *     RtlRealSuccessor @ 0x1800632D0 (RtlRealSuccessor.c)
 */

__int64 __fastcall RtlEnumerateGenericTableWithoutSplaying(__int64 *a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 i; // rcx

  result = *a1;
  if ( *a1 )
  {
    if ( *a2 )
    {
      result = RtlRealSuccessor(*a2);
      if ( result )
        *a2 = result;
    }
    else
    {
      for ( i = *(_QWORD *)(result + 8); i; i = *(_QWORD *)(i + 8) )
        result = i;
      *a2 = result;
    }
    return (result + 40) & -(__int64)(result != 0);
  }
  return result;
}
