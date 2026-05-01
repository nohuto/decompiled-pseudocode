/*
 * XREFs of ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_RESOURCE_USAGE_STATS@@@Z @ 0x18001B570
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x180047680 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18000E970 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18001B960 (-RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     ?RtlULongLongSub@@YAJ_K0PEA_K@Z @ 0x1800517A2 (-RtlULongLongSub@@YAJ_K0PEA_K@Z.c)
 *     ?RmpMemoryMonitorCheckQueueDecommitRepurposedMemory@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@@Z @ 0x180052088 (-RmpMemoryMonitorCheckQueueDecommitRepurposedMemory@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@@Z.c)
 *     ?RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x180052130 (-RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 *     ?RmpMemoryMonitorEmptySystemStore@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x18005219A (-RmpMemoryMonitorEmptySystemStore@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x18007383C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x1800915A8 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180091CA8 (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_.c)
 */

__int64 __fastcall RmpMemoryMonitorCheckMetricsAndRemediateSingleStep(__int64 *a1, _QWORD *a2, unsigned __int64 a3)
{
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  __int64 PageCount64; // rax
  struct _EVENT_DATA_DESCRIPTOR v11; // xmm3
  __m128i v12; // xmm2
  __int128 v13; // xmm1
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // r11
  int v16; // r15d
  unsigned __int8 v17; // si
  __int64 v18; // r8
  bool v19; // zf
  unsigned __int64 v20; // r10
  unsigned __int8 v21; // bl
  unsigned int v22; // eax
  __int64 v23; // r9
  int v24; // r14d
  __int64 v26; // r10
  __int64 v27; // r11
  unsigned int v28; // ebx
  unsigned int v29; // eax
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // r8d
  int v33; // r9d
  unsigned __int64 v34; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v35; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v36; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v41[2]; // [rsp+90h] [rbp-70h]
  __m128i v42; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v43[2]; // [rsp+B0h] [rbp-50h]
  __int128 v44; // [rsp+C0h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v46; // [rsp+E0h] [rbp-20h]
  __int128 v47; // [rsp+F0h] [rbp-10h]
  __int128 v48; // [rsp+100h] [rbp+0h]
  __int128 v49; // [rsp+110h] [rbp+10h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+120h] [rbp+20h] BYREF
  __int128 v51; // [rsp+130h] [rbp+30h]
  __m128i v52; // [rsp+140h] [rbp+40h]
  __int128 v53; // [rsp+150h] [rbp+50h]
  __int128 v54; // [rsp+160h] [rbp+60h]
  _BYTE v55[4]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v56; // [rsp+174h] [rbp+74h]
  __int64 v57; // [rsp+188h] [rbp+88h]
  __int64 v58; // [rsp+190h] [rbp+90h]
  __int64 v59; // [rsp+1A0h] [rbp+A0h]
  __int64 v60; // [rsp+1B0h] [rbp+B0h]
  __int64 v61; // [rsp+1B8h] [rbp+B8h]
  char v62[64]; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 v63; // [rsp+208h] [rbp+108h]
  __int64 v64; // [rsp+210h] [rbp+110h]
  __int64 v65; // [rsp+218h] [rbp+118h]
  __int64 v66; // [rsp+220h] [rbp+120h]
  __int64 v67; // [rsp+228h] [rbp+128h]
  __int64 v68; // [rsp+230h] [rbp+130h]
  __int64 v69; // [rsp+238h] [rbp+138h]
  __int64 v70; // [rsp+240h] [rbp+140h]
  __int64 v71; // [rsp+248h] [rbp+148h]
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+260h] [rbp+160h] BYREF
  __int128 v73; // [rsp+270h] [rbp+170h]
  __int128 v74; // [rsp+280h] [rbp+180h]
  __int128 v75; // [rsp+290h] [rbp+190h]
  __int128 v76; // [rsp+2A0h] [rbp+1A0h]
  __int64 *v77; // [rsp+2B0h] [rbp+1B0h]
  __int64 v78; // [rsp+2B8h] [rbp+1B8h]
  __int64 *v79; // [rsp+2C0h] [rbp+1C0h]
  __int64 v80; // [rsp+2C8h] [rbp+1C8h]
  unsigned __int64 *v81; // [rsp+2D0h] [rbp+1D0h]
  __int64 v82; // [rsp+2D8h] [rbp+1D8h]

  v34 = a3;
  ResetEvent((HANDLE)a1[5]);
  ResetEvent((HANDLE)a1[6]);
  v5 = *a1;
  v6 = *(_QWORD *)(*a1 + 24);
  memset_0(a2, 0, 0x80uLL);
  memset_0(v55, 0, 0xF0uLL);
  v7 = *(_QWORD *)(v5 + 32);
  v56 = -1LL;
  NtManagePartition(v7, 0LL, 0LL, v55, 240);
  v42.m128i_i64[0] = 0LL;
  v8 = RmpPageSize * v71;
  v9 = RmpPageSize * v59;
  *(_QWORD *)&UserData.Size = RmpPageSize * v58;
  v41[1] = RmpPageSize * v58 - RmpPageSize * v57;
  UserData.Ptr = RmpPageSize * v71;
  v41[0] = RmpPageSize * v57;
  v42.m128i_i64[1] = RmpPageSize * v59;
  PageCount64 = SwGetPageCount64(v62, 0LL, 5LL);
  v43[1] = v9 - RmpPageSize * (PageCount64 + v60 + v61);
  v43[0] = RmpPageSize * (PageCount64 + v60 + v61);
  v44 = (unsigned __int64)(v63 + v64 + v65 + v66 + v67 + v68 + v69 + v70);
  v35 = v6 + 456;
  RmpPolicyComputeUsageLimits(
    (struct _RM_USAGE_LIMIT_SETTINGS *)(v6 + 400),
    (struct _RM_REMEDIATION_ACTIONS *)(v6 + 456),
    (struct _RM_SYSTEM_MEMORY_METRICS *)&UserData,
    v8,
    (struct _RM_RESOURCE_USAGE_LIMITS *)a2);
  v11 = UserData;
  v12 = v42;
  v13 = v44;
  v51 = *(_OWORD *)v41;
  v53 = *(_OWORD *)v43;
  v50 = UserData;
  v52 = v42;
  v14 = v34;
  v15 = v41[0];
  *(_WORD *)(v5 + 204) = 0;
  v16 = 0;
  *(_OWORD *)v14 = 0LL;
  *(_QWORD *)(v14 + 16) = 0LL;
  v17 = 0;
  v54 = v13;
  v18 = 4LL;
  v72.Ptr = 0LL;
  v73 = 0uLL;
  *(_QWORD *)&v74 = 0LL;
  v75 = 0uLL;
  v76 = 0LL;
  v34 = _mm_srli_si128((__m128i)v11, 8).m128i_u64[0];
  *(_QWORD *)&v72.Size = v34;
  v36 = _mm_srli_si128(v12, 8).m128i_u64[0];
  *((_QWORD *)&v74 + 1) = v36;
  do
  {
    if ( v15 >= a2[(unsigned int)v18 + 2] )
    {
      if ( v17 <= (unsigned int)v18 )
        v17 = v18;
      if ( *(_DWORD *)(v6 + 456 + 4LL * (unsigned int)v18) )
        break;
    }
    v19 = (_DWORD)v18 == 1;
    v18 = (unsigned int)(v18 - 1);
  }
  while ( !v19 );
  v20 = v43[1];
  v21 = 0;
  v22 = 4;
  do
  {
    v23 = v22;
    if ( v43[1] >= a2[v22 + 7] )
    {
      if ( v21 <= v22 )
        v21 = v22;
      if ( *(_DWORD *)(v35 + 4LL * v22) )
        break;
    }
    --v22;
  }
  while ( v22 );
  if ( (_DWORD)v18 || v22 )
  {
    if ( (unsigned int)v18 < v22 )
    {
      v16 = *(_DWORD *)(v35 + 4LL * v22 + 20);
      v24 = 3;
      *((_QWORD *)&v75 + 1) = a2[v22 + 7];
      *(_QWORD *)&v75 = v36 - *((_QWORD *)&v75 + 1);
    }
    else
    {
      v16 = *(_DWORD *)(v35 + 4LL * (unsigned int)v18);
      v24 = 1;
      *(_QWORD *)&v73 = a2[(unsigned int)v18 + 2];
      *((_QWORD *)&v73 + 1) = v34 - v73;
    }
    v45 = v72;
    v46 = v73;
    v47 = v74;
    v48 = v75;
    v49 = 0LL;
  }
  else
  {
    v24 = v34;
  }
  *(_BYTE *)(v14 + 1) = v17;
  *(_BYTE *)v14 = v21;
  if ( v17 )
  {
    RtlULongLongSub(v15, a2[v17 + 2], (unsigned __int64 *)(v14 + 8));
    v21 = *(_BYTE *)v14;
  }
  if ( v21 )
    RtlULongLongSub(v20, a2[v21 + 7], (unsigned __int64 *)(v14 + 16));
  if ( !v16 )
  {
    *((_DWORD *)a1 + 23) &= ~2u;
    if ( (unsigned int)dword_1800DC1E0 > 5 && (byte_1800DC1F0 & 1) != 0 && (qword_1800DC1F8 & 1) == qword_1800DC1F8 )
    {
      v36 = v20;
      v43[0] = (unsigned __int64)&v36;
      v35 = v15;
      v42.m128i_i64[0] = (__int64)&v35;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = (ULONGLONG)off_1800DC1E8;
      v43[1] = 8LL;
      v42.m128i_i64[1] = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 1LL;
      UserData.Size = *(unsigned __int16 *)off_1800DC1E8;
      v41[0] = (unsigned __int64)&unk_1800C54A2;
      UserData.Reserved = 2;
      v41[1] = 0x100000045LL;
      LODWORD(v34) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
    }
    return 3LL;
  }
  if ( v16 != 4 && (unsigned int)dword_1800DC1E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DC1E0, 9LL, v18, v23) )
  {
    v36 = *((_QWORD *)&v48 + 1);
    v39 = v46;
    v37 = v26;
    v81 = &v36;
    v79 = &v39;
    v77 = &v37;
    *(_QWORD *)&v76 = &EventDescriptor;
    *(_QWORD *)&v75 = &v35;
    *(_QWORD *)&v74 = &v34;
    *(_QWORD *)&EventDescriptor.Id = v27;
    LODWORD(v35) = v24;
    LODWORD(v34) = v16;
    v82 = 8LL;
    v80 = 8LL;
    v78 = 8LL;
    *((_QWORD *)&v76 + 1) = 8LL;
    *((_QWORD *)&v75 + 1) = 4LL;
    *((_QWORD *)&v74 + 1) = 4LL;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC1E0,
      (unsigned __int8 *)dword_1800C5877,
      0LL,
      0LL,
      8u,
      &v72);
  }
  ResetEvent((HANDLE)a1[4]);
  switch ( v16 )
  {
    case 2:
      v29 = RmpMemoryMonitorEmptyWorkingSets(a1, &v50, &v45, 0LL);
      goto LABEL_49;
    case 3:
      v28 = RmpMemoryMonitorEmptyWorkingSets(a1, &v50, &v45, 1LL);
      if ( v28 != 2 )
        goto LABEL_50;
      *((_QWORD *)&v48 + 1) = a2[14];
      v29 = RmpMemoryMonitorEmptySystemStore(a1, &v50, &v45);
LABEL_49:
      v28 = v29;
      goto LABEL_50;
    case 4:
      RmpMemoryMonitorCheckQueueDecommitRepurposedMemory((struct _RM_MEMORY_MONITOR_DATA *)a1);
      v28 = 3;
      goto LABEL_50;
    case 5:
      v29 = RmpMemoryMonitorCommitSaveAndRevokeExtraActivities(a1, &v50, &v45);
      goto LABEL_49;
  }
  if ( v16 != 7 )
  {
    v28 = 2;
LABEL_50:
    *((_DWORD *)a1 + 23) &= ~2u;
    goto LABEL_51;
  }
  v28 = RmpMemoryMonitorRevokeAnyHost(a1, &v50, &v45, a2);
  if ( v28 != 2 )
    goto LABEL_50;
LABEL_51:
  if ( dword_1800DC1E0 )
  {
    if ( v16 != 4 )
    {
      RmpSystemMemoryMetricsQuery((struct _RM_PARTITION *)*a1, (struct _RM_SYSTEM_MEMORY_METRICS *)&v50);
      if ( (unsigned int)dword_1800DC1E0 > 4 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1800DC1E0, 9LL, v30, v31) )
        {
          *(_QWORD *)&EventDescriptor.Id = *((_QWORD *)&v53 + 1);
          v37 = v51;
          LODWORD(v34) = v28;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            (unsigned int)&dword_1800DC1E0,
            (unsigned int)&unk_1800C569D,
            v32,
            v33,
            (__int64)&v34,
            (__int64)&v37,
            (__int64)&EventDescriptor);
        }
      }
    }
  }
  return v28;
}
