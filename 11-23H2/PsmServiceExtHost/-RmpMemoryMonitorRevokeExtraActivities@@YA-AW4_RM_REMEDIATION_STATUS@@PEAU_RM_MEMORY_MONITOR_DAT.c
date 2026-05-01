/*
 * XREFs of ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@_K@Z @ 0x180056AD0
 * Callers:
 *     ?RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x180056396 (-RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 * Callees:
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x18000CDF0 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180040EB8 (-RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LI.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x1800556B0 (-RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z.c)
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x180056252 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 *     ?RmpPolicyPopulateFastCommitUse@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_POLICY_WORK_BUFFER@@@Z @ 0x18008AB54 (-RmpPolicyPopulateFastCommitUse@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_POLICY_WORK_BUFFER@@@.c)
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_KW4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18008CFC4 (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_K.c)
 */

__int64 __fastcall RmpMemoryMonitorRevokeExtraActivities(
        struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP **a1,
        unsigned __int64 a2)
{
  struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *v2; // rsi
  __int64 v5; // rdx
  unsigned int v6; // ebx
  int HostListAndRevoke; // ebx
  __int64 v8; // rcx
  DWORD v10; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *v11[3]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[16]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v13; // [rsp+60h] [rbp-A0h]
  __int64 v14; // [rsp+70h] [rbp-90h]
  _BYTE v15[128]; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+120h] [rbp+20h] BYREF

  v2 = *a1;
  v11[1] = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v11;
  v11[0] = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v11;
  v11[2] = a1[4];
  RmpAcquireGlobalLock();
  RmpPolicyPrepareToCheckMetrics(
    v2,
    (struct _RM_POLICY *)(*((_QWORD *)*a1 + 3) + 400LL),
    (struct _RM_RESOURCE_USAGE_LIMITS *)v15,
    (struct _RM_SYSTEM_MEMORY_METRICS *)v12);
  RmpPolicyPopulateActivityHostMetrics(
    v2,
    0,
    (__int64)v2 + 160,
    67,
    (unsigned __int8 (*)(struct _RM_ACTIVITY_HOST *, void *))RmpPolicyFilterActivityHostWithFlags,
    0LL);
  RmpPolicyPopulateFastCommitUse(
    (struct _RM_SYSTEM_MEMORY_METRICS *)v12,
    (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)((char *)v2 + 160));
  if ( v13 - v14 < a2 )
  {
    v6 = 3;
LABEL_16:
    RmpReleaseGlobalLock();
    return v6;
  }
  if ( !*((_DWORD *)v2 + 49) )
  {
    v6 = 2;
    goto LABEL_16;
  }
  HostListAndRevoke = RmpMemoryMonitorGenerateHostListAndRevoke(v2, v5, v13 - v14 - a2, 1LL, 5, v11);
  RmpReleaseGlobalLock();
  if ( HostListAndRevoke )
  {
    if ( (unsigned int)RmpMemoryMonitorWaitForEvents((HANDLE *)a1, 13, *((_DWORD *)a1 + 18), &v10) )
    {
      if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
        tlgWriteTransfer_EventWriteTransfer(v8, (unsigned __int8 *)dword_1800C614E, 0LL, 0LL, 2u, &v16);
      v6 = 1;
    }
    else if ( v10 == 2 )
    {
      v6 = 4;
    }
    else
    {
      v6 = 0;
    }
    RmpAcquireGlobalLock();
    RmpActivityHostCleanupRemediationGroup(v11);
    goto LABEL_16;
  }
  return 2;
}
