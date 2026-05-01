/*
 * XREFs of ?RmpCpuSetManagerMarkProcessDirty@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x1800871A8
 * Callers:
 *     ?RmpCpuSetManagerInsertProcessRegistration@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x180086F50 (-RmpCpuSetManagerInsertProcessRegistration@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_P.c)
 *     ?RmpCpuSetManagerInvalidateProcessRegistration@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x1800870C4 (-RmpCpuSetManagerInvalidateProcessRegistration@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROC.c)
 *     ?RmpCpuSetManagerReleaseAllProcessorsFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x1800879E8 (-RmpCpuSetManagerReleaseAllProcessorsFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET.c)
 * Callees:
 *     CempListEntryIsNull @ 0x18002AB98 (CempListEntryIsNull.c)
 */

void __fastcall RmpCpuSetManagerMarkProcessDirty(struct _RM_CPU_SET_MANAGER *a1, struct _RM_CPU_SET_PROCESS *a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // r8
  _QWORD *v4; // rdx

  if ( (unsigned int)CempListEntryIsNull((_QWORD *)a2 + 5) )
  {
    v4 = *(_QWORD **)(v3 + 1376);
    if ( *v4 != v3 + 1368 )
      __fastfail(3u);
    *v2 = v3 + 1368;
    v2[1] = v4;
    *v4 = v2;
    *(_QWORD *)(v3 + 1376) = v2;
  }
}
