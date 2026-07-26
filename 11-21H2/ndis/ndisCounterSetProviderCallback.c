/*
 * XREFs of ndisCounterSetProviderCallback @ 0x1C010C800
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0005F20 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisPcwGetPerCpuDataForProcessor@@YAPEAU_NDIS_PCW_PER_CPU_DATA_BLOCK@@PEAU_NDIS_PCW_DATA_BLOCK@@K@Z @ 0x1C00082BC (-ndisPcwGetPerCpuDataForProcessor@@YAPEAU_NDIS_PCW_PER_CPU_DATA_BLOCK@@PEAU_NDIS_PCW_DATA_BLOCK@.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00106B4 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     NdisGroupActiveProcessorCount @ 0x1C0028880 (NdisGroupActiveProcessorCount.c)
 *     ?ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C0028BF8 (-ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C010BF6C (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?ReleaseShared@KLockHolder@@QEAAXXZ @ 0x1C010C154 (-ReleaseShared@KLockHolder@@QEAAXXZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C010C668 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?ndisPcwAddCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z @ 0x1C010CC0C (-ndisPcwAddCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z.c)
 *     ?ndisPcwRemoveCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z @ 0x1C010CD08 (-ndisPcwRemoveCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z.c)
 *     ?ndisPcwQueryPcfMatchCount@@YA_KPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012B124 (-ndisPcwQueryPcfMatchCount@@YA_KPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisCounterSetProviderCallback(int a1, __int64 a2, unsigned int a3)
{
  struct _PCW_BUFFER *v3; // r15
  ULONG active; // esi
  PVOID i; // r14
  int v6; // ebx
  struct _NDIS_PCW_PER_CPU_DATA_BLOCK *PerCpuDataForProcessor; // rdx
  unsigned int v8; // r9d
  signed __int64 v9; // rax
  const __m128i *v10; // rcx
  __int64 v11; // r8
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  __m128i v14; // xmm2
  __m128i v15; // xmm1
  _QWORD *v16; // rcx
  __int64 v17; // r9
  ULONG v18; // r8d
  NTSTATUS v19; // edi
  struct _NDIS_MINIPORT_BLOCK *v20; // rcx
  ULONG v21; // r8d
  __int64 v22; // rax
  __int64 v23; // rcx
  __m128i v24; // xmm0
  __m128i v25; // xmm1
  __int64 v26; // rcx
  __int64 v27; // rdx
  int v29; // ecx
  struct _NDIS_MINIPORT_BLOCK *v30; // rbx
  KLockHolder v32; // [rsp+38h] [rbp-D0h] BYREF
  struct _PCW_DATA Data; // [rsp+50h] [rbp-B8h] BYREF
  struct _PCW_DATA v34; // [rsp+60h] [rbp-A8h] BYREF
  struct _PCW_DATA v35; // [rsp+70h] [rbp-98h] BYREF
  _OWORD v36[19]; // [rsp+88h] [rbp-80h] BYREF
  _OWORD v37[19]; // [rsp+1B8h] [rbp+B0h] BYREF

  if ( a3 - 1 > 1 )
    return 3221225485LL;
  if ( a1 == 3 )
  {
    v3 = *(struct _PCW_BUFFER **)(a2 + 24);
    active = NdisGroupActiveProcessorCount(0xFFFFu);
    memset(v37, 0, sizeof(v37));
    v32.m_Lock = (KPushLockBase *)&ndisPcwMutex;
    KeEnterCriticalRegion();
    v32.m_Region.m_Entered = 1;
    ExAcquirePushLockExclusiveEx(&ndisPcwMutex, 0LL);
    v32.m_State = Exclusive;
LABEL_4:
    for ( i = ndisPcwDataBlockList; ; i = (PVOID)*((_QWORD *)i + 20) )
    {
      if ( !i )
      {
        v35.Size = 304;
        v35.Data = v37;
        v19 = PcwAddInstance(v3, &ndisPcwSystemTotalInstanceName, 0xFFFFFFFE, 1u, &v35);
        goto LABEL_24;
      }
      memset(v36, 0, sizeof(v36));
      v6 = 0;
      if ( active )
        break;
LABEL_15:
      v20 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)i + 22);
      if ( v20 )
      {
        if ( (v20->PcwDatapathEventMask & 0x2000000) != 0 )
        {
          if ( ndisReferenceMiniport(v20, 0x5Eu) )
          {
            ++*((_DWORD *)i + 42);
            v30 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)i + 22);
            KLockHolder::ReleaseExclusive(&v32);
            *((_QWORD *)&v36[18] + 1) = ndisPcwQueryPcfMatchCount(v30);
            ndisDereferenceMiniport(v30, 0x5Eu);
            KLockHolder::AcquireExclusive(&v32);
            if ( (*((_DWORD *)i + 42))-- == 1 )
            {
              ExFreePoolWithTag(i, 0);
              goto LABEL_4;
            }
          }
        }
      }
      v21 = *((_DWORD *)i + 46);
      v34.Data = v36;
      v34.Size = 304;
      v19 = PcwAddInstance(v3, (PCUNICODE_STRING)i + 12, v21, 1u, &v34);
      if ( v19 < 0 )
        goto LABEL_24;
      v22 = 0LL;
      v23 = 4LL;
      do
      {
        v24 = _mm_loadu_si128((const __m128i *)&v37[v22]);
        v25 = _mm_loadu_si128((const __m128i *)&v36[v22]);
        v22 += 4LL;
        v36[v22 + 15] = _mm_add_epi64(v25, v24);
        v36[v22 + 16] = _mm_add_epi64(
                          _mm_loadu_si128((const __m128i *)((char *)&Data.Size + v22 * 16)),
                          _mm_loadu_si128((const __m128i *)&v36[v22 + 16]));
        v36[v22 + 17] = _mm_add_epi64(
                          _mm_loadu_si128((const __m128i *)((char *)&v34.Size + v22 * 16)),
                          _mm_loadu_si128((const __m128i *)&v36[v22 + 17]));
        v36[v22 + 18] = _mm_add_epi64(
                          _mm_loadu_si128((const __m128i *)((char *)&v35.Size + v22 * 16)),
                          _mm_loadu_si128((const __m128i *)&v36[v22 + 18]));
        --v23;
      }
      while ( v23 );
      v26 = 256LL;
      v27 = 6LL;
      do
      {
        *(_QWORD *)((char *)v37 + v26) += *(_QWORD *)((char *)v36 + v26);
        v26 += 8LL;
        --v27;
      }
      while ( v27 );
    }
    while ( 1 )
    {
      PerCpuDataForProcessor = ndisPcwGetPerCpuDataForProcessor((struct _NDIS_PCW_DATA_BLOCK *)i, v6);
      v8 = 0;
      if ( v36 > (_OWORD *)((char *)PerCpuDataForProcessor + 296)
        || (struct _NDIS_PCW_PER_CPU_DATA_BLOCK *)((char *)&v36[18] + 8) < PerCpuDataForProcessor )
      {
        v9 = PerCpuDataForProcessor - (struct _NDIS_PCW_PER_CPU_DATA_BLOCK *)&v36[1];
        v10 = (const __m128i *)&v36[1];
        v11 = 4LL;
        v8 = 16;
        do
        {
          v12 = _mm_loadu_si128(v10 - 1);
          v13 = _mm_loadu_si128((const __m128i *)((char *)v10 + v9));
          v14 = _mm_loadu_si128((const __m128i *)((char *)v10 + v9 + 16));
          v10 += 4;
          v10[-5] = _mm_add_epi64(v13, v12);
          v15 = _mm_loadu_si128((const __m128i *)((char *)v10 + v9 - 32));
          v10[-4] = _mm_add_epi64(v14, _mm_loadu_si128(v10 - 4));
          v10[-3] = _mm_add_epi64(v15, _mm_loadu_si128(v10 - 3));
          v10[-2] = _mm_add_epi64(_mm_loadu_si128((const __m128i *)((char *)v10 + v9 - 16)), _mm_loadu_si128(v10 - 2));
          --v11;
        }
        while ( v11 );
      }
      v16 = &v36[v8];
      v17 = 38 - v8 * 2;
      do
      {
        *v16 += *(_QWORD *)((char *)v16 + PerCpuDataForProcessor - (struct _NDIS_PCW_PER_CPU_DATA_BLOCK *)v36);
        ++v16;
        --v17;
      }
      while ( v17 );
      v18 = *((_DWORD *)PerCpuDataForProcessor + 102);
      Data.Data = PerCpuDataForProcessor;
      Data.Size = 304;
      v19 = PcwAddInstance(v3, (PCUNICODE_STRING)PerCpuDataForProcessor + 26, v18, 1u, &Data);
      if ( v19 < 0 )
        break;
      if ( ++v6 >= active )
        goto LABEL_15;
    }
LABEL_24:
    if ( v32.m_State == Shared )
    {
      KLockHolder::ReleaseShared(&v32);
    }
    else if ( v32.m_State == Exclusive )
    {
      ExReleasePushLockExclusiveEx(v32.m_Lock, 0LL);
LABEL_27:
      KeLeaveCriticalRegion();
      return (unsigned int)v19;
    }
    if ( !v32.m_Region.m_Entered )
      return (unsigned int)v19;
    goto LABEL_27;
  }
  if ( !a1 )
    return ndisPcwAddCounter(a3);
  v29 = a1 - 1;
  if ( !v29 )
    return ndisPcwRemoveCounter(a3);
  if ( v29 == 1 )
    return ndisPcwEnumerateInstances(*(PPCW_BUFFER *)(a2 + 24));
  return 0LL;
}
