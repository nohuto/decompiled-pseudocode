/*
 * XREFs of ?RmpPolicyGetFastCommitFromMetrics@@YA_KPEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x18008D824
 * Callers:
 *     ?RmpPolicyPopulateFastCommitUse@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_POLICY_WORK_BUFFER@@@Z @ 0x18008DA28 (-RmpPolicyPopulateFastCommitUse@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_POLICY_WORK_BUFFER@@@.c)
 * Callees:
 *     ?HampHostCanKillForResourcePressure@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800516EA (-HampHostCanKillForResourcePressure@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostIsRunnable@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800871C8 (-RmpActivityHostIsRunnable@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 */

unsigned __int64 __fastcall RmpPolicyGetFastCommitFromMetrics(struct _RM_ACTIVITY_HOST_METRICS *a1)
{
  __int64 v1; // rbx
  int v3; // esi

  v1 = *((_QWORD *)a1 + 6);
  v3 = *(_DWORD *)(*(_QWORD *)(v1 + 48) + 508LL);
  if ( (*(_BYTE *)(v1 + 852) & 1) != 0 )
  {
    if ( !(unsigned int)HampHostCanKillForResourcePressure(
                          (struct _RM_HAM_ACTIVITY_HOST *)(v1 + 64),
                          (*(_DWORD *)(*(_QWORD *)(v1 + 48) + 508LL) & 4) == 0) )
      return *((_QWORD *)a1 + 5);
  }
  else if ( (*(_BYTE *)(v1 + 1178) & 0x20) == 0 )
  {
    return *((_QWORD *)a1 + 5);
  }
  if ( (v3 & 4) == 0 && (unsigned int)RmpActivityHostIsRunnable((struct _RM_ACTIVITY_HOST *)v1, 1)
    || (*(_BYTE *)(v1 + 1178) & 0x40) == 0 )
  {
    return *((_QWORD *)a1 + 5);
  }
  return *(_QWORD *)a1;
}
