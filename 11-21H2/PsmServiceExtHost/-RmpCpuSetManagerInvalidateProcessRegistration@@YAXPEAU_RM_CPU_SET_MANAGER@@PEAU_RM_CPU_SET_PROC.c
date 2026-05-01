/*
 * XREFs of ?RmpCpuSetManagerInvalidateProcessRegistration@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x180089438
 * Callers:
 *     ?RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x1800893E4 (-RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x180089F60 (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 * Callees:
 *     CempListEntryIsNull @ 0x18000A004 (CempListEntryIsNull.c)
 *     ?RmpCpuSetManagerMarkProcessDirty@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x18008951C (-RmpCpuSetManagerMarkProcessDirty@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z.c)
 *     ?RmpCpuSetManagerRemoveRegistrationFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x180089FE8 (-RmpCpuSetManagerRemoveRegistrationFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_P.c)
 */

void __fastcall RmpCpuSetManagerInvalidateProcessRegistration(
        struct _RM_CPU_SET_MANAGER *a1,
        struct _RM_CPU_SET_PROCESS_REGISTRATION *a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // r9
  struct _RM_CPU_SET_MANAGER *v4; // r10
  __int64 v5; // r8
  __int64 v6; // rdx
  _QWORD *v7; // rax
  struct _RM_CPU_SET_MANAGER *v8; // rcx
  struct _RM_CPU_SET_PROCESS_REGISTRATION *v9; // r9

  if ( !(unsigned int)CempListEntryIsNull((_QWORD *)a2 + 11) )
  {
    v5 = *v2;
    v6 = *(_QWORD *)(v3 + 56);
    if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v7 = (_QWORD *)v2[1], (_QWORD *)*v7 != v2) )
      __fastfail(3u);
    *v7 = v5;
    *(_QWORD *)(v5 + 8) = v7;
    *(_OWORD *)v2 = 0LL;
    --*(_DWORD *)(v6 + 60);
    RmpCpuSetManagerMarkProcessDirty(v4, (struct _RM_CPU_SET_PROCESS *)v6);
  }
  if ( !(unsigned int)CempListEntryIsNull((_QWORD *)(v3 + 104)) )
    RmpCpuSetManagerRemoveRegistrationFromAllocation(v8, v9);
}
