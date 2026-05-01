/*
 * XREFs of ?RmpPolicyPopulateFastCommitUse@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_POLICY_WORK_BUFFER@@@Z @ 0x18008AB54
 * Callers:
 *     ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@_K@Z @ 0x180056AD0 (-RmpMemoryMonitorRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DAT.c)
 *     ?RmpPolicyEnsureMetricsForAcquire@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18008A848 (-RmpPolicyEnsureMetricsForAcquire@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 * Callees:
 *     ?RmpActivityHostIsRunnable@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18002D438 (-RmpActivityHostIsRunnable@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCanKillForResourcePressure@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002D454 (-HampHostCanKillForResourcePressure@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 */

void __fastcall RmpPolicyPopulateFastCommitUse(struct _RM_SYSTEM_MEMORY_METRICS *a1, struct _RM_POLICY_WORK_BUFFER *a2)
{
  unsigned int i; // edi
  __int64 *v5; // rsi
  __int64 v6; // r14
  int v7; // r15d
  __int64 v8; // rax

  for ( i = 0; i < *((_DWORD *)a2 + 9); ++i )
  {
    v5 = (__int64 *)(*(_QWORD *)a2 + ((unsigned __int64)i << 6));
    v6 = v5[6];
    v7 = *(_DWORD *)(*(_QWORD *)(v6 + 48) + 508LL);
    if ( (unsigned int)HampHostCanKillForResourcePressure((struct _RM_HAM_ACTIVITY_HOST *)(v6 + 64), (v7 & 4) == 0)
      && ((v7 & 4) != 0 || !(unsigned int)RmpActivityHostIsRunnable((struct _RM_ACTIVITY_HOST *)v6, 1))
      && (*(_BYTE *)(v6 + 1184) & 0x40) != 0 )
    {
      v8 = *v5;
    }
    else
    {
      v8 = v5[5];
    }
    *((_QWORD *)a1 + 4) += v8;
  }
  *((_DWORD *)a1 + 18) |= 1u;
}
