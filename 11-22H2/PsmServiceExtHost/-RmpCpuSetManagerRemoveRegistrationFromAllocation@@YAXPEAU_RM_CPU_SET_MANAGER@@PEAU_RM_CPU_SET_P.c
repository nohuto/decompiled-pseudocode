/*
 * XREFs of ?RmpCpuSetManagerRemoveRegistrationFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x180087C88
 * Callers:
 *     ?RmpCpuSetManagerInvalidateProcessRegistration@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x1800870C4 (-RmpCpuSetManagerInvalidateProcessRegistration@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROC.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180032530 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 */

void __fastcall RmpCpuSetManagerRemoveRegistrationFromAllocation(
        struct _RM_CPU_SET_MANAGER *a1,
        struct _RM_CPU_SET_PROCESS_REGISTRATION *a2)
{
  struct _RM_OBJECT_HEADER *v2; // rcx
  char *v3; // rax
  __int64 v5; // rdx
  char **v6; // r8

  v2 = (struct _RM_OBJECT_HEADER *)*((_QWORD *)a2 + 8);
  v3 = (char *)a2 + 104;
  v5 = *((_QWORD *)a2 + 13);
  if ( *(char **)(v5 + 8) != v3 || (v6 = (char **)*((_QWORD *)v3 + 1), *v6 != v3) )
    __fastfail(3u);
  *v6 = (char *)v5;
  *(_QWORD *)(v5 + 8) = v6;
  *(_OWORD *)v3 = 0LL;
  *((_QWORD *)a2 + 8) = 0LL;
  RmpObjectRelease(v2);
  RmpObjectRelease(a2);
}
