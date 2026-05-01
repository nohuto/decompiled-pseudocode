/*
 * XREFs of ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18008D3F0
 * Callers:
 *     ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_RESOURCE_USAGE_STATS@@@Z @ 0x18002B070 (-RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 * Callees:
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x18000CDF0 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x1800556B0 (-RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z.c)
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x180056252 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_KW4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18008CFC4 (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_K.c)
 *     ?RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18008D0F4 (-RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z.c)
 */

__int64 __fastcall RmpMemoryMonitorRevokeAnyHost(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _RM_RESOURCE_USAGE_LIMITS *a4)
{
  struct _RM_PARTITION *v4; // r14
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  DWORD v13; // [rsp+30h] [rbp-50h] BYREF
  struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *v14[3]; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+50h] [rbp-30h] BYREF

  v4 = *(struct _RM_PARTITION **)a1;
  v14[1] = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v14;
  v14[0] = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v14;
  v14[2] = *(struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP **)(a1 + 32);
  RmpAcquireGlobalLock();
  v9 = 0;
  *((_WORD *)v4 + 102) = 0;
  RmpPolicyPopulateActivityHostMetrics(
    v4,
    0,
    (__int64)v4 + 160,
    67,
    (unsigned __int8 (*)(struct _RM_ACTIVITY_HOST *, void *))RmpPolicyFilterActivityHostWithFlags,
    0LL);
  if ( *((_DWORD *)v4 + 49)
    && (RmpMemoryMonitorGenerateHostListAndRevoke(
          (__int64)v4,
          v10,
          *(_QWORD *)(a3 + 24) - *(_QWORD *)(a2 + 24),
          3u,
          7,
          (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v14),
        *((_DWORD *)v4 + 50)) )
  {
    if ( (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP **)v14[0] != v14 )
    {
      RmpReleaseGlobalLock();
      if ( (unsigned int)RmpMemoryMonitorWaitForEvents((HANDLE *)a1, 28, *(_DWORD *)(a1 + 72), &v13) )
      {
        if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
          tlgWriteTransfer_EventWriteTransfer(v11, (unsigned __int8 *)dword_1800C611B, 0LL, 0LL, 2u, &v15);
        v9 = 1;
      }
      else if ( v13 == 2 )
      {
        v9 = 4;
      }
      RmpAcquireGlobalLock();
      RmpActivityHostCleanupRemediationGroup(v14);
    }
    RmpReleaseGlobalLock();
  }
  else
  {
    RmpReleaseGlobalLock();
    RmpMemoryMonitorRebootIfAble((struct _RM_MEMORY_MONITOR_DATA *)a1, a4);
    return 2;
  }
  return v9;
}
