/*
 * XREFs of ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@_K@Z @ 0x1800523BC
 * Callers:
 *     ?RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x180052130 (-RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ?RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x1800480BC (-RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LI.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ?RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x180086B9C (-RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z.c)
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x18008D9B0 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 *     ?RmpPolicyPopulateFastCommitUse@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_POLICY_WORK_BUFFER@@@Z @ 0x18008DA28 (-RmpPolicyPopulateFastCommitUse@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_POLICY_WORK_BUFFER@@@.c)
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_KW4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18009184C (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_K.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x180091E38 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 */

__int64 __fastcall RmpMemoryMonitorRevokeExtraActivities(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // r14
  unsigned int v5; // edi
  __int64 v6; // rdx
  int HostListAndRevoke; // ebx
  __int64 v8; // rcx
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v11[3]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[16]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v13; // [rsp+60h] [rbp-A0h]
  __int64 v14; // [rsp+70h] [rbp-90h]
  _BYTE v15[128]; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+120h] [rbp+20h] BYREF

  v2 = *a1;
  v11[1] = v11;
  v11[0] = v11;
  v11[2] = a1[4];
  RmpAcquireGlobalLock();
  RmpPolicyPrepareToCheckMetrics(
    (struct _RM_PARTITION *)v2,
    (struct _RM_POLICY *)(*(_QWORD *)(*a1 + 24LL) + 400LL),
    (struct _RM_RESOURCE_USAGE_LIMITS *)v15,
    (struct _RM_SYSTEM_MEMORY_METRICS *)v12);
  v5 = 2;
  RmpPolicyPopulateActivityHostMetrics(v2, 0LL, v2 + 160, 67LL, RmpPolicyFilterActivityHostWithFlags, 2LL);
  RmpPolicyPopulateFastCommitUse((struct _RM_SYSTEM_MEMORY_METRICS *)v12, (struct _RM_POLICY_WORK_BUFFER *)(v2 + 160));
  if ( v13 - v14 < a2 )
  {
    v5 = 3;
LABEL_14:
    RmpReleaseGlobalLock();
    return v5;
  }
  if ( !*(_DWORD *)(v2 + 196) )
    goto LABEL_14;
  HostListAndRevoke = RmpMemoryMonitorGenerateHostListAndRevoke(v2, v6, v13 - v14 - a2, 1LL, 5, v11);
  RmpReleaseGlobalLock();
  if ( HostListAndRevoke )
  {
    if ( RmpMemoryMonitorWaitForEvents(
           (struct _RM_MEMORY_MONITOR_DATA *)a1,
           0xDu,
           *((_DWORD *)a1 + 18),
           (enum _RM_MEMORY_MONITOR_EVENT *)&v10) )
    {
      if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
        tlgWriteTransfer_EventWriteTransfer(v8, (unsigned __int8 *)dword_1800C59CA, 0LL, 0LL, 2u, &v16);
      v5 = 1;
    }
    else if ( v10 == 2 )
    {
      v5 = 4;
    }
    else
    {
      v5 = 0;
    }
    RmpAcquireGlobalLock();
    RmpActivityHostCleanupRemediationGroup((struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v11);
    goto LABEL_14;
  }
  return v5;
}
