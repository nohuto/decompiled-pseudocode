/*
 * XREFs of RtlpFcQueryFeatureConfigurationFromBuffers @ 0x18012E118
 * Callers:
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x18012E0A0 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 * Callees:
 *     RtlFindLowerBoundInSortedArray @ 0x18012E240 (RtlFindLowerBoundInSortedArray.c)
 *     RtlpFcLinearSearchInSortedArray @ 0x18012E48C (RtlpFcLinearSearchInSortedArray.c)
 */

__int64 __fastcall RtlpFcQueryFeatureConfigurationFromBuffers(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // rbp
  unsigned int v5; // ebx
  unsigned int *LowerBoundInSortedArray; // rsi
  int v9; // edx
  unsigned int *v10; // rbp
  int v11; // edx
  unsigned int *v12; // rcx
  int v13; // eax
  unsigned int v14; // eax
  __int64 v16; // rax
  int v17; // [rsp+50h] [rbp+8h] BYREF

  v17 = a1;
  v4 = *(unsigned int **)(a2 + 8);
  v5 = 0;
  LowerBoundInSortedArray = 0LL;
  if ( !v4 )
    goto LABEL_7;
  v9 = (_DWORD)v4 + 4;
  if ( *v4 )
  {
    LowerBoundInSortedArray = (unsigned int *)RtlFindLowerBoundInSortedArray(
                                                (unsigned int)&v17,
                                                v9,
                                                *v4,
                                                12,
                                                (__int64)RtlFcpCompareFeatureIdToFeature);
    a1 = v17;
    if ( LowerBoundInSortedArray == &v4[3 * *v4 + 1] || *LowerBoundInSortedArray != v17 )
      LowerBoundInSortedArray = 0LL;
  }
  else
  {
    v16 = RtlpFcLinearSearchInSortedArray((unsigned int)&v17, v9, 0, 12, (__int64)RtlFcpCompareFeatureIdToFeature);
    a1 = v17;
    LowerBoundInSortedArray = (unsigned int *)v16;
  }
  if ( LowerBoundInSortedArray )
  {
    *(_QWORD *)a4 = *(_QWORD *)LowerBoundInSortedArray;
    *(_DWORD *)(a4 + 8) = LowerBoundInSortedArray[2];
  }
  else
  {
LABEL_7:
    *(_QWORD *)(a4 + 4) = 0LL;
    *(_DWORD *)a4 = a1;
  }
  v10 = *(unsigned int **)(a3 + 8);
  if ( v10 )
  {
    v11 = (_DWORD)v10 + 4;
    if ( *v10 )
    {
      v12 = (unsigned int *)RtlFindLowerBoundInSortedArray(
                              (unsigned int)&v17,
                              v11,
                              *v10,
                              16,
                              (__int64)RtlFcpCompareFeatureIdToFeature);
      if ( v12 == &v10[4 * *v10 + 1] || *v12 != v17 )
        v12 = 0LL;
    }
    else
    {
      v12 = (unsigned int *)RtlpFcLinearSearchInSortedArray(
                              (unsigned int)&v17,
                              v11,
                              0,
                              16,
                              (__int64)RtlFcpCompareFeatureIdToFeature);
    }
    v13 = *(_DWORD *)(a4 + 4);
    if ( v12 )
      v14 = v13 | 0x80;
    else
      v14 = v13 & 0xFFFFFF7F;
    *(_DWORD *)(a4 + 4) = v14;
  }
  else
  {
    *(_DWORD *)(a4 + 4) &= ~0x80u;
    v14 = *(_DWORD *)(a4 + 4);
  }
  if ( !LowerBoundInSortedArray )
    return (v14 & 0x80u) != 0 ? 279 : -1073741275;
  return v5;
}
