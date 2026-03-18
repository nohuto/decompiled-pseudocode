/*
 * XREFs of ProcessorpSelectProcessorsInCluster @ 0x1C00B66E4
 * Callers:
 *     ProcessorpSelectProcessorSetFromClusters @ 0x1C00B65EC (ProcessorpSelectProcessorSetFromClusters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessorpSelectProcessorsInCluster(__int16 a1, char a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rdi
  unsigned int LeastSignificantBit; // eax
  __int64 v9; // rbp
  ULONGLONG v10; // rcx
  __int64 v11; // rax

  if ( *(_DWORD *)(a3 + 36) == 1 || a1 == 2 )
  {
    LeastSignificantBit = *(_DWORD *)(a4 + 40);
    do
    {
      v9 = LeastSignificantBit;
      v7 = 1LL << LeastSignificantBit;
      v10 = *(_QWORD *)(a4 + 24);
      v11 = v10 & ~(2 * (1LL << LeastSignificantBit) - 1);
      if ( v11 )
        v10 = v11;
      LeastSignificantBit = RtlFindLeastSignificantBit(v10);
      *(_DWORD *)(a4 + 40) = (char)LeastSignificantBit;
    }
    while ( a2 && (v7 & *(_QWORD *)(a4 + 32)) == 0 );
    *(_QWORD *)(a5 + 16) = v9;
  }
  else
  {
    *(_QWORD *)(a5 + 16) = *(unsigned int *)(a4 + 16);
    if ( a2 )
      return *(_QWORD *)(a4 + 32);
    else
      return *(_QWORD *)(a4 + 24);
  }
  return v7;
}
