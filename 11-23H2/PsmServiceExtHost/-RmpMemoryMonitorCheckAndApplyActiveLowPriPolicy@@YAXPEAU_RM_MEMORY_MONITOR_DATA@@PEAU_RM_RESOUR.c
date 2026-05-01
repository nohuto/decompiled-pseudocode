/*
 * XREFs of ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18008C5FC
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x180040A50 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x18000CDF0 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x18000EBBC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180029950 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180040EB8 (-RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LI.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x1800556B0 (-RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z.c)
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x180056252 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18008BAF0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_KW4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18008CFC4 (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_K.c)
 */

void __fastcall RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy(
        struct _RM_MEMORY_MONITOR_DATA *a1,
        struct _RM_RESOURCE_USAGE_LIMITS *a2)
{
  struct _RM_PARTITION *v2; // r14
  __int64 v5; // rbx
  struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *v6; // r15
  unsigned __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r10d
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  unsigned int v20; // r8d
  int v21; // r9d
  int v22; // ecx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  DWORD v26; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+50h] [rbp-B0h] BYREF
  struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *v29[3]; // [rsp+58h] [rbp-A8h] BYREF
  char v30[16]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v31; // [rsp+80h] [rbp-80h]
  char v32[16]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v33; // [rsp+D0h] [rbp-30h]
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+110h] [rbp+10h] BYREF

  v2 = *(struct _RM_PARTITION **)a1;
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
  v29[1] = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v29;
  v29[0] = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v29;
  v29[2] = *((struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP **)a1 + 4);
  RmpPolicyPrepareToCheckMetrics(v2, (struct _RM_POLICY *)(v5 + 400), a2, 0LL);
  RmpAcquireGlobalLock();
  v6 = *(struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP **)a1;
  v7 = 0LL;
  *((_WORD *)v6 + 102) = 0;
  RmpPolicyPopulateActivityHostMetrics(
    v2,
    *(_DWORD *)(v5 + 516),
    (__int64)v6 + 160,
    3,
    (unsigned __int8 (*)(struct _RM_ACTIVITY_HOST *, void *))RmpMemoryMonitorActiveLowPriFilterCallback,
    0LL);
  if ( *((_DWORD *)v6 + 49) )
  {
    v10 = (_QWORD *)*((_QWORD *)v6 + 20);
    v11 = *((unsigned int *)v6 + 49);
    do
    {
      v7 += *v10;
      v10 += 8;
      --v11;
    }
    while ( v11 );
    if ( v7 >= *((_QWORD *)a2 + 12) )
    {
      v15 = dword_1800DB1E0;
      if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
      {
        v26 = v17;
        v28 = v18;
        v27 = v7;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          v16,
          byte_1800C6183,
          v17,
          v18,
          (__int64)&v27,
          (__int64)&v28,
          (__int64)&v26);
        v15 = dword_1800DB1E0;
      }
      if ( v15 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
        RmpSystemMemoryMetricsQuery(v2, (struct _RM_SYSTEM_MEMORY_METRICS *)v32);
      RmpMemoryMonitorGenerateHostListAndRevoke(v2, v8, *((_QWORD *)a2 + 12) - v7, 1LL, 5, v29);
      RmpReleaseGlobalLock();
      RmpMemoryMonitorWaitForEvents((HANDLE *)a1, 13, *((_DWORD *)a1 + 18), &v26);
      if ( dword_1800DB1E0 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
      {
        if ( v21 )
        {
          if ( v20 > 4 && tlgKeywordOn(v19, 0x200000000001LL) )
            tlgWriteTransfer_EventWriteTransfer(v25, (unsigned __int8 *)dword_1800C5CC9, 0LL, 0LL, 2u, &v34);
        }
        else
        {
          RmpSystemMemoryMetricsQuery(v2, (struct _RM_SYSTEM_MEMORY_METRICS *)v30);
          if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 0x200000000001LL) )
          {
            v28 = v31;
            v27 = v33;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
              v22,
              (int)&unk_1800C5EBC,
              v23,
              v24,
              (__int64)&v26,
              (__int64)&v27,
              (__int64)&v28);
          }
        }
      }
      RmpAcquireGlobalLock();
    }
    else if ( (unsigned int)dword_1800DB1E0 > 5 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
    {
      v26 = v13;
      v27 = v14;
      v28 = v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v12,
        byte_1800C5F7A,
        v13,
        v14,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v26);
    }
  }
  else if ( (unsigned int)dword_1800DB1E0 > 5 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
  {
    tlgWriteTransfer_EventWriteTransfer(v9, (unsigned __int8 *)dword_1800C60E0, 0LL, 0LL, 2u, &v34);
  }
  RmpActivityHostCleanupRemediationGroup(v29);
  RmpReleaseGlobalLock();
}
