/*
 * XREFs of ndisCounterSetProviderCallback @ 0x1C0117C30
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0002F40 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisPcwGetPerCpuDataForProcessor@@YAPEAU_NDIS_PCW_PER_CPU_DATA_BLOCK@@PEAU_NDIS_PCW_DATA_BLOCK@@K@Z @ 0x1C0006284 (-ndisPcwGetPerCpuDataForProcessor@@YAPEAU_NDIS_PCW_PER_CPU_DATA_BLOCK@@PEAU_NDIS_PCW_DATA_BLOCK@.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0011218 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     NdisGroupActiveProcessorCount @ 0x1C00284C0 (NdisGroupActiveProcessorCount.c)
 *     ?ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C0028964 (-ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C01171FC (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?ReleaseShared@KLockHolder@@QEAAXXZ @ 0x1C0117474 (-ReleaseShared@KLockHolder@@QEAAXXZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C0117BEC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?ndisPcwRemoveCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z @ 0x1C011805C (-ndisPcwRemoveCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z.c)
 *     ?ndisPcwAddCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z @ 0x1C0118118 (-ndisPcwAddCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z.c)
 *     ?ndisPcwQueryPcfMatchCount@@YA_KPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0136E0C (-ndisPcwQueryPcfMatchCount@@YA_KPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
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
  bool m_Entered; // bl
  int v30; // ecx
  struct _NDIS_MINIPORT_BLOCK *v31; // rbx
  KLockHolder v33; // [rsp+30h] [rbp-D0h] BYREF
  struct _PCW_DATA Data; // [rsp+48h] [rbp-B8h] BYREF
  struct _PCW_DATA v35; // [rsp+58h] [rbp-A8h] BYREF
  struct _PCW_DATA v36; // [rsp+68h] [rbp-98h] BYREF
  _OWORD v37[19]; // [rsp+80h] [rbp-80h] BYREF
  _OWORD v38[19]; // [rsp+1B0h] [rbp+B0h] BYREF

  if ( a3 != 1 && a3 != 2 )
    return 3221225485LL;
  if ( a1 != 3 )
  {
    if ( !a1 )
      return ndisPcwAddCounter(a3, a2);
    v30 = a1 - 1;
    if ( !v30 )
      return ndisPcwRemoveCounter(a3, a2);
    if ( v30 == 1 )
      return ndisPcwEnumerateInstances(*(PPCW_BUFFER *)(a2 + 24));
    return 0LL;
  }
  v3 = *(struct _PCW_BUFFER **)(a2 + 24);
  active = NdisGroupActiveProcessorCount(0xFFFFu);
  memset(v38, 0, sizeof(v38));
  v33.m_Lock = (KPushLockBase *)&ndisPcwMutex;
  KeEnterCriticalRegion();
  v33.m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(&ndisPcwMutex, 0LL);
  v33.m_State = Exclusive;
LABEL_4:
  for ( i = ndisPcwDataBlockList; ; i = (PVOID)*((_QWORD *)i + 20) )
  {
    if ( !i )
    {
      v36.Size = 304;
      v36.Data = v38;
      v19 = PcwAddInstance(v3, &ndisPcwSystemTotalInstanceName, 0xFFFFFFFE, 1u, &v36);
      goto LABEL_24;
    }
    memset(v37, 0, sizeof(v37));
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
          v31 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)i + 22);
          KLockHolder::ReleaseExclusive(&v33);
          *((_QWORD *)&v37[18] + 1) = ndisPcwQueryPcfMatchCount(v31);
          ndisDereferenceMiniport(v31, 0x5Eu);
          KLockHolder::AcquireExclusive(&v33);
          if ( (*((_DWORD *)i + 42))-- == 1 )
          {
            ExFreePoolWithTag(i, 0);
            goto LABEL_4;
          }
        }
      }
    }
    v21 = *((_DWORD *)i + 46);
    v35.Data = v37;
    v35.Size = 304;
    v19 = PcwAddInstance(v3, (PCUNICODE_STRING)i + 12, v21, 1u, &v35);
    if ( v19 < 0 )
      goto LABEL_24;
    v22 = 0LL;
    v23 = 4LL;
    do
    {
      v24 = _mm_loadu_si128((const __m128i *)&v38[v22]);
      v25 = _mm_loadu_si128((const __m128i *)&v37[v22]);
      v22 += 4LL;
      v37[v22 + 15] = _mm_add_epi64(v25, v24);
      v37[v22 + 16] = _mm_add_epi64(
                        _mm_loadu_si128((const __m128i *)((char *)&Data.Size + v22 * 16)),
                        _mm_loadu_si128((const __m128i *)&v37[v22 + 16]));
      v37[v22 + 17] = _mm_add_epi64(
                        _mm_loadu_si128((const __m128i *)((char *)&v35.Size + v22 * 16)),
                        _mm_loadu_si128((const __m128i *)&v37[v22 + 17]));
      v37[v22 + 18] = _mm_add_epi64(
                        _mm_loadu_si128((const __m128i *)((char *)&v36.Size + v22 * 16)),
                        _mm_loadu_si128((const __m128i *)&v37[v22 + 18]));
      --v23;
    }
    while ( v23 );
    v26 = 256LL;
    v27 = 6LL;
    do
    {
      *(_QWORD *)((char *)v38 + v26) += *(_QWORD *)((char *)v37 + v26);
      v26 += 8LL;
      --v27;
    }
    while ( v27 );
  }
  while ( 1 )
  {
    PerCpuDataForProcessor = ndisPcwGetPerCpuDataForProcessor((struct _NDIS_PCW_DATA_BLOCK *)i, v6);
    v8 = 0;
    if ( v37 > (_OWORD *)((char *)PerCpuDataForProcessor + 296)
      || (struct _NDIS_PCW_PER_CPU_DATA_BLOCK *)((char *)&v37[18] + 8) < PerCpuDataForProcessor )
    {
      v9 = PerCpuDataForProcessor - (struct _NDIS_PCW_PER_CPU_DATA_BLOCK *)&v37[1];
      v10 = (const __m128i *)&v37[1];
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
    v16 = &v37[v8];
    v17 = 38 - v8 * 2;
    do
    {
      *v16 += *(_QWORD *)((char *)v16 + PerCpuDataForProcessor - (struct _NDIS_PCW_PER_CPU_DATA_BLOCK *)v37);
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
  if ( v33.m_State == Shared )
  {
    KLockHolder::ReleaseShared(&v33);
    goto LABEL_43;
  }
  if ( v33.m_State != Exclusive )
  {
LABEL_43:
    m_Entered = v33.m_Region.m_Entered;
    goto LABEL_27;
  }
  ExReleasePushLockExclusiveEx(v33.m_Lock, 0LL);
  m_Entered = 0;
  KeLeaveCriticalRegion();
LABEL_27:
  if ( m_Entered )
    KeLeaveCriticalRegion();
  return (unsigned int)v19;
}
