/*
 * XREFs of RtlpFcQueryFeatureConfigurationFromBuffers @ 0x140832FD0
 * Callers:
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x140832F68 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 *     wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers @ 0x140B15608 (wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers.c)
 * Callees:
 *     RtlFindLowerBoundInSortedArray @ 0x1407C0890 (RtlFindLowerBoundInSortedArray.c)
 *     RtlpFcLinearSearchInSortedArray @ 0x1409BF604 (RtlpFcLinearSearchInSortedArray.c)
 */

__int64 __fastcall RtlpFcQueryFeatureConfigurationFromBuffers(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rbp
  unsigned int v5; // ebx
  _DWORD *LowerBoundInSortedArray; // rsi
  unsigned __int64 v9; // rdx
  _DWORD *v10; // rbp
  unsigned __int64 v11; // rdx
  _DWORD *v12; // rcx
  int v13; // eax
  unsigned int v14; // eax
  __int64 v16; // rax
  int v17; // [rsp+50h] [rbp+8h] BYREF

  v17 = a1;
  v4 = *(_DWORD **)(a2 + 8);
  v5 = 0;
  LowerBoundInSortedArray = 0LL;
  if ( !v4 )
    goto LABEL_6;
  v9 = (unsigned __int64)(v4 + 1);
  if ( *v4 )
  {
    LowerBoundInSortedArray = (_DWORD *)RtlFindLowerBoundInSortedArray(
                                          (__int64)&v17,
                                          v9,
                                          (unsigned int)*v4,
                                          12LL,
                                          (int (__fastcall *)(__int64, unsigned __int64))RtlFcpCompareFeatureIdToFeature);
    a1 = v17;
    if ( LowerBoundInSortedArray == &v4[3 * *v4 + 1] || *LowerBoundInSortedArray != v17 )
      LowerBoundInSortedArray = 0LL;
  }
  else
  {
    v16 = RtlpFcLinearSearchInSortedArray((unsigned int)&v17, v9, 0, 12, (__int64)RtlFcpCompareFeatureIdToFeature);
    a1 = v17;
    LowerBoundInSortedArray = (_DWORD *)v16;
  }
  if ( LowerBoundInSortedArray )
  {
    *(_QWORD *)a4 = *(_QWORD *)LowerBoundInSortedArray;
    *(_DWORD *)(a4 + 8) = LowerBoundInSortedArray[2];
  }
  else
  {
LABEL_6:
    *(_QWORD *)(a4 + 4) = 0LL;
    *(_DWORD *)a4 = a1;
  }
  v10 = *(_DWORD **)(a3 + 8);
  if ( v10 )
  {
    v11 = (unsigned __int64)(v10 + 1);
    if ( *v10 )
    {
      v12 = (_DWORD *)RtlFindLowerBoundInSortedArray(
                        (__int64)&v17,
                        v11,
                        (unsigned int)*v10,
                        16LL,
                        (int (__fastcall *)(__int64, unsigned __int64))RtlFcpCompareFeatureIdToFeature);
      if ( v12 == &v10[4 * *v10 + 1] || *v12 != v17 )
        v12 = 0LL;
    }
    else
    {
      v12 = (_DWORD *)RtlpFcLinearSearchInSortedArray(
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
