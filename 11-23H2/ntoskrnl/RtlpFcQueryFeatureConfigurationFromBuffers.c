/*
 * XREFs of RtlpFcQueryFeatureConfigurationFromBuffers @ 0x1407D1204
 * Callers:
 *     RtlQueryFeatureConfigurationFromBuffers @ 0x140374948 (RtlQueryFeatureConfigurationFromBuffers.c)
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x1407D119C (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 * Callees:
 *     RtlFindLowerBoundInSortedArray @ 0x1406D83F0 (RtlFindLowerBoundInSortedArray.c)
 *     RtlpFcLinearSearchInSortedArray @ 0x1409C8250 (RtlpFcLinearSearchInSortedArray.c)
 */

__int64 __fastcall RtlpFcQueryFeatureConfigurationFromBuffers(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rbp
  unsigned int v5; // ebx
  int v8; // eax
  _DWORD *LowerBoundInSortedArray; // rsi
  unsigned __int64 v10; // rdx
  _DWORD *v11; // rbp
  unsigned int v12; // edx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  int v15; // edx
  int v17; // [rsp+50h] [rbp+8h] BYREF

  v17 = a1;
  v4 = *(_DWORD **)(a2 + 8);
  v5 = 0;
  v8 = a1;
  LowerBoundInSortedArray = 0LL;
  if ( !v4 )
    goto LABEL_9;
  v10 = (unsigned __int64)(v4 + 1);
  if ( *v4 )
  {
    LowerBoundInSortedArray = (_DWORD *)RtlFindLowerBoundInSortedArray(
                                          (__int64)&v17,
                                          v10,
                                          (unsigned int)*v4,
                                          a4,
                                          (int (__fastcall *)(__int64, unsigned __int64))RtlFcpCompareFeatureIdToFeature);
    v8 = v17;
    if ( LowerBoundInSortedArray == &v4[4 * *v4 + 1] || *LowerBoundInSortedArray != v17 )
      LowerBoundInSortedArray = 0LL;
  }
  else
  {
    LowerBoundInSortedArray = (_DWORD *)RtlpFcLinearSearchInSortedArray(
                                          (unsigned int)&v17,
                                          v10,
                                          0,
                                          a4,
                                          (__int64)RtlFcpCompareFeatureIdToFeature);
    v8 = v17;
  }
  if ( LowerBoundInSortedArray )
  {
    *(_OWORD *)a4 = *(_OWORD *)LowerBoundInSortedArray;
  }
  else
  {
LABEL_9:
    *(_OWORD *)a4 = 0LL;
    *(_DWORD *)a4 = v8;
  }
  v11 = *(_DWORD **)(a3 + 8);
  if ( v11 )
  {
    v13 = (unsigned __int64)(v11 + 1);
    if ( *v11 )
    {
      v14 = RtlFindLowerBoundInSortedArray(
              (__int64)&v17,
              v13,
              (unsigned int)*v11,
              a4,
              (int (__fastcall *)(__int64, unsigned __int64))RtlFcpCompareFeatureIdToFeature);
      if ( (_DWORD *)v14 == &v11[4 * *v11 + 1] || *(_DWORD *)v14 != v17 )
        v14 = 0LL;
    }
    else
    {
      v14 = RtlpFcLinearSearchInSortedArray((unsigned int)&v17, v13, 0, a4, (__int64)RtlFcpCompareFeatureIdToFeature);
    }
    v15 = *(_DWORD *)(a4 + 4);
    if ( v14 )
    {
      v12 = v15 | 0x80;
      *(_DWORD *)(a4 + 4) = v12;
      if ( (v12 & 0x40) != 0 )
        goto LABEL_22;
      v12 = v12 & 0xFFFFFFBF | ((*(_WORD *)(v14 + 6) & 1) << 6);
    }
    else
    {
      v12 = v15 & 0xFFFFFF7F;
    }
    *(_DWORD *)(a4 + 4) = v12;
    goto LABEL_22;
  }
  *(_DWORD *)(a4 + 4) &= ~0x80u;
  v12 = *(_DWORD *)(a4 + 4);
LABEL_22:
  if ( !LowerBoundInSortedArray && (v12 & 0x40) == 0 )
    return (v12 & 0x80u) != 0 ? 279 : -1073741275;
  return v5;
}
