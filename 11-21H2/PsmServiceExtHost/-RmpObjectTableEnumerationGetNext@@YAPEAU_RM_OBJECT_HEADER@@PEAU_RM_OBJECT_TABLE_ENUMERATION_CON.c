/*
 * XREFs of ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x18004B2D8
 * Callers:
 *     ?RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z @ 0x18003CEC8 (-RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z.c)
 *     RmpTracingControlCallback @ 0x180047450 (RmpTracingControlCallback.c)
 *     ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18004AE94 (-RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerApplyWorkloadAllowedMasks@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18004B170 (-RmpCpuSetManagerApplyWorkloadAllowedMasks@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpResourceSetTableEnumerationGetNext@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_RS_ENUMERATION_CONTEXT@@@Z @ 0x180088080 (-RmpResourceSetTableEnumerationGetNext@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_RS_ENUMERATION_CONTEXT@@.c)
 *     ?RmpCpuSetManagerSweepInvalidAllocations@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18008A138 (-RmpCpuSetManagerSweepInvalidAllocations@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpPartitionRevokeAllSets@@YAXPEAU_RM_PARTITION@@PEAVResourceSet@ExecutionModel@@@Z @ 0x18008CE68 (-RmpPartitionRevokeAllSets@@YAXPEAU_RM_PARTITION@@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?RmpPolicyGenerateHostListForPopulate@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@P6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z3@Z @ 0x18008D2CC (-RmpPolicyGenerateHostListForPopulate@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@P6AEPEA.c)
 *     ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180090680 (-RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     <none>
 */

struct _RM_OBJECT_HEADER *__fastcall RmpObjectTableEnumerationGetNext(struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *a1)
{
  __int64 *v1; // r8
  __int64 v2; // rdx
  __int64 *i; // r8

  v1 = (__int64 *)*((_QWORD *)a1 + 2);
  if ( !v1 )
    goto LABEL_13;
  v2 = *v1;
  if ( (*v1 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    v2 = *v1;
  if ( (v2 & 1) != 0 )
  {
LABEL_13:
    for ( i = (__int64 *)(*((_QWORD *)a1 + 3) + 8LL);
          (unsigned __int64)i < *(_QWORD *)(*((_QWORD *)a1 + 1) + 8LL)
                              + 8 * ((unsigned __int64)*(unsigned int *)(*((_QWORD *)a1 + 1) + 4LL) >> 5);
          ++i )
    {
      v2 = *i;
      if ( (*i & 1) == 0 )
      {
        *((_QWORD *)a1 + 3) = i;
        goto LABEL_8;
      }
    }
    return 0LL;
  }
LABEL_8:
  *((_QWORD *)a1 + 2) = v2;
  if ( !v2 )
    return 0LL;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v2 + 16)) <= 1 )
    __fastfail(0xEu);
  return (struct _RM_OBJECT_HEADER *)v2;
}
