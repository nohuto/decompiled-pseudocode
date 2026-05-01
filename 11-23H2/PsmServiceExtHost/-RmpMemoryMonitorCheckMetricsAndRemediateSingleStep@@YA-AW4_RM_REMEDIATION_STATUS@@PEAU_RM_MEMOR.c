/*
 * XREFs of ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_RESOURCE_USAGE_STATS@@@Z @ 0x18002B070
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x180040A50 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x18000EBBC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180029950 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?RmpMemoryMonitorLogCurrentMetrics@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18002B2A8 (-RmpMemoryMonitorLogCurrentMetrics@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18002B3D0 (-RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 *     ?RtlULongLongSub@@YAJ_K0PEA_K@Z @ 0x18005563A (-RtlULongLongSub@@YAJ_K0PEA_K@Z.c)
 *     ?RmpMemoryMonitorCheckQueueDecommitRepurposedMemory@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@@Z @ 0x1800562EE (-RmpMemoryMonitorCheckQueueDecommitRepurposedMemory@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@@Z.c)
 *     ?RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x180056396 (-RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 *     ?RmpMemoryMonitorEmptySystemStore@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x1800564A2 (-RmpMemoryMonitorEmptySystemStore@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x180056758 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18008D3F0 (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_.c)
 */

__int64 __fastcall RmpMemoryMonitorCheckMetricsAndRemediateSingleStep(__int64 *a1, _QWORD *a2, unsigned __int8 *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r13
  __m128i v9; // xmm3
  __m128i v10; // xmm2
  __int128 v11; // xmm1
  unsigned __int8 v12; // r12
  unsigned __int64 v13; // r11
  unsigned int v14; // r8d
  __int128 v15; // xmm0
  unsigned __int64 v16; // r10
  unsigned __int8 v17; // di
  unsigned int v18; // eax
  unsigned int v19; // ebx
  int v20; // r13d
  __int64 v21; // rax
  __int64 v23; // rcx
  int v24; // r13d
  __int64 v25; // rax
  __int64 v26; // r10
  __int64 v27; // r11
  int v28; // r13d
  unsigned int v29; // eax
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v33; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v34; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v37; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v38[2]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v39[2]; // [rsp+80h] [rbp-80h]
  __m128i v40; // [rsp+90h] [rbp-70h]
  unsigned __int64 v41[2]; // [rsp+A0h] [rbp-60h]
  __int128 v42; // [rsp+B0h] [rbp-50h]
  __m128i v43; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v44; // [rsp+D0h] [rbp-30h]
  __m128i v45; // [rsp+E0h] [rbp-20h]
  __int128 v46; // [rsp+F0h] [rbp-10h]
  __int128 v47; // [rsp+100h] [rbp+0h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+110h] [rbp+10h] BYREF
  __int128 v49; // [rsp+120h] [rbp+20h]
  __m128i v50; // [rsp+130h] [rbp+30h]
  __int128 v51; // [rsp+140h] [rbp+40h]
  __int64 *v52; // [rsp+150h] [rbp+50h]
  __int64 v53; // [rsp+158h] [rbp+58h]
  __int64 *v54; // [rsp+160h] [rbp+60h]
  __int64 v55; // [rsp+168h] [rbp+68h]
  unsigned __int64 *v56; // [rsp+170h] [rbp+70h]
  __int64 v57; // [rsp+178h] [rbp+78h]
  unsigned __int64 *v58; // [rsp+180h] [rbp+80h]
  __int64 v59; // [rsp+188h] [rbp+88h]

  ResetEvent((HANDLE)a1[5]);
  ResetEvent((HANDLE)a1[6]);
  v6 = *a1;
  v7 = *(_QWORD *)(*a1 + 24);
  memset_0(a2, 0, 0x80uLL);
  RmpSystemMemoryMetricsQuery((struct _RM_PARTITION *)v6, (struct _RM_SYSTEM_MEMORY_METRICS *)v38);
  v8 = v7 + 456;
  RmpPolicyComputeUsageLimits(
    (struct _RM_USAGE_LIMIT_SETTINGS *)(v7 + 400),
    (struct _RM_REMEDIATION_ACTIONS *)(v7 + 456),
    (struct _RM_SYSTEM_MEMORY_METRICS *)v38,
    v38[0],
    (struct _RM_RESOURCE_USAGE_LIMITS *)a2);
  v9 = *(__m128i *)v38;
  v10 = v40;
  v11 = v42;
  v12 = 0;
  v13 = v39[0];
  v14 = 4;
  v44 = *(_OWORD *)v39;
  v15 = *(_OWORD *)v41;
  *(_WORD *)(v6 + 204) = 0;
  v46 = v15;
  v43 = v9;
  v45 = v10;
  *(_OWORD *)a3 = 0LL;
  *((_QWORD *)a3 + 2) = 0LL;
  v47 = v11;
  v32 = 0;
  v48.Ptr = 0LL;
  v49 = 0uLL;
  v50.m128i_i64[0] = 0LL;
  v51 = 0uLL;
  v33 = _mm_srli_si128(v9, 8).m128i_u64[0];
  *(_QWORD *)&v48.Size = v33;
  v34 = _mm_srli_si128(v10, 8).m128i_u64[0];
  v50.m128i_i64[1] = v34;
  do
  {
    if ( v13 >= a2[v14 + 2] )
    {
      if ( v12 <= v14 )
        v12 = v14;
      if ( *(_DWORD *)(v8 + 4LL * v14) )
        break;
    }
    --v14;
  }
  while ( v14 );
  v16 = v41[1];
  v17 = 0;
  v18 = 4;
  do
  {
    if ( v41[1] >= a2[v18 + 7] )
    {
      if ( v17 <= v18 )
        v17 = v18;
      if ( *(_DWORD *)(v8 + 4LL * v18) )
        break;
    }
    --v18;
  }
  while ( v18 );
  v19 = 3;
  if ( v14 || v18 )
  {
    if ( v14 < v18 )
    {
      v24 = *(_DWORD *)(v8 + 4LL * v18 + 20);
      v25 = a2[v18 + 7];
      v32 = v24;
      *(_QWORD *)&v51 = v34 - v25;
      v20 = 3;
      *((_QWORD *)&v51 + 1) = v25;
    }
    else
    {
      v23 = a2[v14 + 2];
      v32 = *(_DWORD *)(v8 + 4LL * v14);
      *((_QWORD *)&v49 + 1) = v33 - v23;
      v20 = 1;
      *(_QWORD *)&v49 = v23;
    }
    *(struct _EVENT_DATA_DESCRIPTOR *)v38 = v48;
    *(_OWORD *)v39 = v49;
    v40 = v50;
    *(_OWORD *)v41 = v51;
    v42 = 0LL;
  }
  else
  {
    v20 = v33;
  }
  a3[1] = v12;
  *a3 = v17;
  if ( v12 )
    RtlULongLongSub(v13, a2[v12 + 2], (unsigned __int64 *)a3 + 1);
  v21 = *a3;
  if ( (_BYTE)v21 )
    RtlULongLongSub(v16, a2[v21 + 7], (unsigned __int64 *)a3 + 2);
  if ( !v32 )
  {
    *((_DWORD *)a1 + 23) &= ~2u;
    RmpMemoryMonitorLogCurrentMetrics((struct _RM_SYSTEM_MEMORY_METRICS *)&v43);
    return v19;
  }
  if ( v32 == 4 || (unsigned int)dword_1800DB1E0 <= 4 )
  {
    v28 = v32;
  }
  else if ( tlgKeywordOn((__int64)&dword_1800DB1E0, 9LL) )
  {
    v34 = v41[1];
    v37 = v39[0];
    LODWORD(v33) = v20;
    v28 = v32;
    v58 = &v34;
    v56 = &v37;
    v54 = &v35;
    v52 = &v36;
    *(_QWORD *)&v51 = &v33;
    v50.m128i_i64[0] = (__int64)&v32;
    v35 = v26;
    v36 = v27;
    v59 = 8LL;
    v57 = 8LL;
    v55 = 8LL;
    v53 = 8LL;
    *((_QWORD *)&v51 + 1) = 4LL;
    v50.m128i_i64[1] = 4LL;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB1E0,
      (unsigned __int8 *)dword_1800C5FFB,
      0LL,
      0LL,
      8u,
      &v48);
  }
  else
  {
    v28 = v32;
  }
  ResetEvent((HANDLE)a1[4]);
  switch ( v28 )
  {
    case 2:
      v29 = RmpMemoryMonitorEmptyWorkingSets(a1, &v43, v38, 0LL);
      goto LABEL_48;
    case 3:
      v19 = RmpMemoryMonitorEmptyWorkingSets(a1, &v43, v38, 1LL);
      if ( v19 != 2 )
        break;
      v41[1] = a2[14];
      v29 = RmpMemoryMonitorEmptySystemStore(a1, &v43, v38);
LABEL_48:
      v19 = v29;
      break;
    case 4:
      RmpMemoryMonitorCheckQueueDecommitRepurposedMemory((struct _RM_MEMORY_MONITOR_DATA *)a1);
      break;
    case 5:
      v29 = RmpMemoryMonitorCommitSaveAndRevokeExtraActivities(a1, &v43, v38);
      goto LABEL_48;
    case 7:
      v19 = RmpMemoryMonitorRevokeAnyHost(a1, &v43, v38, a2);
      if ( v19 == 2 )
        goto LABEL_50;
      break;
    default:
      v19 = 2;
      break;
  }
  *((_DWORD *)a1 + 23) &= ~2u;
LABEL_50:
  if ( dword_1800DB1E0 )
  {
    if ( v28 != 4 )
    {
      RmpSystemMemoryMetricsQuery((struct _RM_PARTITION *)*a1, (struct _RM_SYSTEM_MEMORY_METRICS *)&v43);
      if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 9LL) )
      {
        v36 = *((_QWORD *)&v46 + 1);
        v35 = v44;
        LODWORD(v33) = v19;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          (int)&dword_1800DB1E0,
          (int)&unk_1800C5E21,
          v30,
          v31,
          (__int64)&v33,
          (__int64)&v35,
          (__int64)&v36);
      }
    }
  }
  return v19;
}
