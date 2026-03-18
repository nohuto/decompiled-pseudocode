/*
 * XREFs of KiCheckPreferredHeteroProcessor @ 0x140308640
 * Callers:
 *     KiQuantumEnd @ 0x14028FFD0 (KiQuantumEnd.c)
 *     KiUpdateRunTime @ 0x140307660 (KiUpdateRunTime.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140574B54 (KiSendHeteroRescheduleIntRequestHelper.c)
 * Callees:
 *     KiIsQosGroupingActive @ 0x14023BA88 (KiIsQosGroupingActive.c)
 *     KiGenerateHeteroSets @ 0x14045ADBE (KiGenerateHeteroSets.c)
 *     KiIsQosGroupingClass @ 0x14045B3BC (KiIsQosGroupingClass.c)
 *     KiFindBiasedSetMember @ 0x14056AAA4 (KiFindBiasedSetMember.c)
 *     KiGetProcessorClassForPolicy @ 0x140573D78 (KiGetProcessorClassForPolicy.c)
 *     KiHeteroComputeThreadWorkloadProperties @ 0x140574018 (KiHeteroComputeThreadWorkloadProperties.c)
 *     KiHeteroScanQueueForPreemptionSwapTarget @ 0x140574294 (KiHeteroScanQueueForPreemptionSwapTarget.c)
 *     KiIsThreadEligibleForPreemptionSwap @ 0x140574648 (KiIsThreadEligibleForPreemptionSwap.c)
 */

_BOOL8 __fastcall KiCheckPreferredHeteroProcessor(__int64 a1, __int64 a2, int a3)
{
  _WORD *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  _QWORD *v12; // r11
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rbp
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned __int64 v19; // r10
  __int64 v20; // r11
  unsigned __int8 ProcessorClassForPolicy; // r12
  int v22; // r14d
  unsigned __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // r10
  __int64 v26; // r11
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rbp
  __int64 v30; // rcx
  int v31; // ebx
  __int128 v32; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int8 v33; // [rsp+40h] [rbp-48h]
  __int128 v34; // [rsp+48h] [rbp-40h] BYREF
  __int64 v35; // [rsp+58h] [rbp-30h]

  v34 = 0LL;
  v35 = 0LL;
  v32 = 0LL;
  v33 = 0;
  if ( !*(_BYTE *)(a1 + 125) )
    return 0LL;
  KiHeteroComputeThreadWorkloadProperties(a1, a2, &v32);
  v7 = *(_WORD **)(a1 + 576);
  v8 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 192) + 136LL);
  if ( (unsigned __int16)v8 >= *v7 )
    return 0LL;
  v9 = *(_QWORD *)&v7[4 * v8 + 4];
  if ( !v9 )
    return 0LL;
  KiGenerateHeteroSets(*(_QWORD *)(a2 + 192), v9, HIDWORD(v32), v33, (__int64)&v34);
  if ( (v35 & *(_QWORD *)(a2 + 200)) != 0
    && (!KiIsQosGroupingActive()
     || (v10 & v11) == 0
     || !(unsigned __int8)KiIsQosGroupingClass(DWORD1(v32))
     || (v13 & *(_QWORD *)(a2 + 200)) != 0) )
  {
    if ( ((unsigned __int64)v34 & *(_QWORD *)(a2 + 200)) != 0 )
      return 0LL;
    if ( !a3 )
      return (KeGetCurrentPrcb()->GroupSetMember & (unsigned __int64)v34) != 0;
    v14 = v12[2] & v11;
    v15 = *(_QWORD *)(a2 + 200) | v12[5];
    if ( (v15 & *(_QWORD *)(a2 + 34912)) != *(_QWORD *)(a2 + 34912) )
    {
      if ( v14 )
        v11 &= v12[2];
      v14 = v11;
    }
    v16 = v14 & v12[4];
    if ( (v15 & *(_QWORD *)(a2 + 34936)) != *(_QWORD *)(a2 + 34936) )
    {
      if ( v16 )
        v14 &= v12[4];
      v16 = v14;
    }
    if ( ((unsigned __int64)v34 & v16) == 0 )
    {
      ProcessorClassForPolicy = KiGetProcessorClassForPolicy(a2, HIDWORD(v32), v33);
      if ( v19 )
      {
        v22 = *(unsigned __int16 *)(v20 + 136) << 6;
        do
        {
          _BitScanReverse64(&v23, v19);
          v24 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[(unsigned int)(v22 + v23)]];
          if ( (unsigned __int8)KiGetProcessorClassForPolicy(v24, v17, v18) > ProcessorClassForPolicy )
            return 1LL;
          v19 = ~*(_QWORD *)(v24 + 200) & v25;
        }
        while ( v19 );
      }
      if ( !(unsigned __int8)KiIsThreadEligibleForPreemptionSwap(&v32)
        || *(_DWORD *)(a2 + 32472)
        || *(_DWORD *)(*(_QWORD *)(a2 + 34888) + 8LL) )
      {
        return 0LL;
      }
      v27 = *(_QWORD *)(v26 + 80) & *((_QWORD *)&v34 + 1) & ~v15;
      if ( (v15 & *(_QWORD *)(a2 + 34912)) == *(_QWORD *)(a2 + 34912) )
        v27 &= *(_QWORD *)(v26 + 24);
      if ( !v27 )
        return 0LL;
      v28 = *(unsigned int *)(a1 + 588);
      v29 = KiProcessorBlock[v28];
      if ( (v27 & *(_QWORD *)(v29 + 34880)) != 0 )
      {
        v30 = KiProcessorBlock[v28];
      }
      else
      {
        v31 = *(unsigned __int8 *)(v29 + 208);
        v30 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v31
                                                                  + (unsigned int)KiFindBiasedSetMember(
                                                                                    v27,
                                                                                    *(unsigned __int8 *)(v29 + 209))]];
      }
      if ( !KiHeteroScanQueueForPreemptionSwapTarget(*(_QWORD *)(v30 + 34888), v29, a2, v27, (__int64)&v32) )
        return 0LL;
    }
  }
  return 1LL;
}
