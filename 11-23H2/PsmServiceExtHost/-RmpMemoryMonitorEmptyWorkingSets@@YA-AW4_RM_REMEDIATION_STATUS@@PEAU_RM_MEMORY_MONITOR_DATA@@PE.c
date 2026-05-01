/*
 * XREFs of ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x180056758
 * Callers:
 *     ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_RESOURCE_USAGE_STATS@@@Z @ 0x18002B070 (-RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 *     ?RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18002D5E4 (-RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONI.c)
 *     ?RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x180056396 (-RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 * Callees:
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x18000CDF0 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x1800556B0 (-RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z.c)
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x180056252 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 *     ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE4@Z @ 0x18008CC20 (-RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_ME.c)
 *     ?RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z @ 0x18008CF20 (-RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z.c)
 */

__int64 __fastcall RmpMemoryMonitorEmptyWorkingSets(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // r15d
  unsigned int v7; // esi
  struct _RM_PARTITION *v8; // r12
  int v9; // ecx
  int v10; // r8d
  __int64 v11; // r12
  unsigned int v12; // ebx
  __int16 v13; // ax
  __int16 v14; // dx
  bool v15; // zf
  void *v16; // rcx
  __int16 v17; // r9
  unsigned int v18; // edx
  unsigned __int8 v19; // al
  unsigned __int8 v21; // [rsp+40h] [rbp-39h] BYREF
  unsigned __int8 v22[3]; // [rsp+41h] [rbp-38h] BYREF
  int v23; // [rsp+44h] [rbp-35h] BYREF
  int v24; // [rsp+48h] [rbp-31h]
  struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *v25[3]; // [rsp+50h] [rbp-29h] BYREF
  __int64 v26; // [rsp+68h] [rbp-11h]
  __int64 v27; // [rsp+70h] [rbp-9h]
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+78h] [rbp-1h] BYREF

  v27 = a3;
  v25[1] = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v25;
  v26 = a2;
  v21 = 0;
  v25[0] = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v25;
  v25[2] = *(struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP **)(a1 + 32);
  v22[0] = 0;
  if ( (a4 & 0x20) != 0 )
  {
    v6 = 0;
LABEL_4:
    v7 = 0;
    goto LABEL_5;
  }
  v6 = 1;
  v7 = 1;
  if ( (a4 & 8) == 0 )
    goto LABEL_4;
LABEL_5:
  RmpAcquireGlobalLock();
  v8 = *(struct _RM_PARTITION **)a1;
  v9 = a4 & 1;
  v10 = a4 & 0x10;
  v23 = v9;
  v24 = (unsigned __int8)v10;
  v11 = (__int64)v8 + 160;
  v12 = 2;
  while ( 1 )
  {
    *(_WORD *)(v11 + 44) = 0;
    v13 = 40;
    if ( v7 != 1 )
      v13 = 8;
    v14 = v13 | 0x13;
    v15 = v9 == 0;
    v16 = (void *)(a4 | 0x20);
    if ( v15 )
      v14 = v13;
    if ( v7 == 1 )
      v16 = (void *)a4;
    v17 = v14 | 2;
    if ( !v10 )
      v17 = v14;
    RmpPolicyPopulateActivityHostMetrics(
      *(struct _RM_PARTITION **)a1,
      0,
      v11,
      v17,
      (unsigned __int8 (*)(struct _RM_ACTIVITY_HOST *, void *))RmpMemoryMonitorEmptyPolicyFilterCallback,
      v16);
    v18 = *(_DWORD *)(v11 + 36);
    if ( v18 )
    {
      RmpMemoryMonitorEmptyPolicyProcessHostArray(*(struct _RM_ACTIVITY_HOST_METRICS **)v11, v18, a4);
      RmpMemoryMonitorEmptyPolicyActOnHosts(
        (struct _RM_MEMORY_MONITOR_DATA *)a1,
        *(struct _RM_ACTIVITY_HOST_METRICS **)v11,
        *(_DWORD *)(v11 + 36),
        *(_QWORD *)(v26 + 56) - *(_QWORD *)(v27 + 56),
        a4,
        (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v25,
        &v21,
        v22);
      v19 = v21;
    }
    else
    {
      v19 = 0;
      v21 = 0;
    }
    if ( v19 )
      break;
    v9 = v23;
    ++v7;
    v10 = v24;
    if ( v7 > v6 )
      goto LABEL_34;
  }
  RmpReleaseGlobalLock();
  if ( (unsigned int)RmpMemoryMonitorWaitForEvents((HANDLE *)a1, 13, *(_DWORD *)(a1 + 72), (DWORD *)&v23) )
  {
    if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)&dword_1800DB1E0,
        (unsigned __int8 *)dword_1800C5D3D,
        0LL,
        0LL,
        2u,
        &v28);
    goto LABEL_32;
  }
  if ( v23 != 3 || !v22[0] )
    goto LABEL_32;
  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB1E0,
      (unsigned __int8 *)dword_1800C5A66,
      0LL,
      0LL,
      2u,
      &v28);
  if ( (unsigned int)RmpMemoryMonitorWaitForEvents((HANDLE *)a1, 5, *(_DWORD *)(a1 + 72), (DWORD *)&v23) || v23 != 2 )
  {
LABEL_32:
    v12 = 0;
    goto LABEL_33;
  }
  v12 = 4;
LABEL_33:
  RmpAcquireGlobalLock();
LABEL_34:
  RmpActivityHostCleanupRemediationGroup(v25);
  RmpReleaseGlobalLock();
  return v12;
}
