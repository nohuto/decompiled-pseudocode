/*
 * XREFs of ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180091CA8
 * Callers:
 *     ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_RESOURCE_USAGE_STATS@@@Z @ 0x18001B570 (-RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ?RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x180086B9C (-RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z.c)
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x18008D9B0 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_KW4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18009184C (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_K.c)
 *     ?RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x1800919A0 (-RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x180091E38 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 */

__int64 __fastcall RmpMemoryMonitorRevokeAnyHost(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _RM_RESOURCE_USAGE_LIMITS *a4)
{
  __int64 v4; // r14
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v13; // [rsp+30h] [rbp-50h] BYREF
  struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *v14[3]; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+50h] [rbp-30h] BYREF

  v4 = *(_QWORD *)a1;
  v14[1] = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v14;
  v14[0] = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v14;
  v14[2] = *(struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP **)(a1 + 32);
  RmpAcquireGlobalLock();
  v9 = 0;
  *(_WORD *)(v4 + 204) = 0;
  RmpPolicyPopulateActivityHostMetrics(
    (struct _RM_PARTITION *)v4,
    0,
    v4 + 160,
    67,
    (unsigned __int8 (*)(struct _RM_ACTIVITY_HOST *, void *))RmpPolicyFilterActivityHostWithFlags,
    (void *)2);
  if ( *(_DWORD *)(v4 + 196)
    && (RmpMemoryMonitorGenerateHostListAndRevoke(
          v4,
          v10,
          *(_QWORD *)(a3 + 24) - *(_QWORD *)(a2 + 24),
          3u,
          7u,
          (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v14),
        *(_DWORD *)(v4 + 200)) )
  {
    if ( (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP **)v14[0] != v14 )
    {
      RmpReleaseGlobalLock();
      if ( RmpMemoryMonitorWaitForEvents(
             (struct _RM_MEMORY_MONITOR_DATA *)a1,
             0x1Cu,
             *(_DWORD *)(a1 + 72),
             (enum _RM_MEMORY_MONITOR_EVENT *)&v13) )
      {
        if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
          tlgWriteTransfer_EventWriteTransfer(v11, (unsigned __int8 *)dword_1800C5997, 0LL, 0LL, 2u, &v15);
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
