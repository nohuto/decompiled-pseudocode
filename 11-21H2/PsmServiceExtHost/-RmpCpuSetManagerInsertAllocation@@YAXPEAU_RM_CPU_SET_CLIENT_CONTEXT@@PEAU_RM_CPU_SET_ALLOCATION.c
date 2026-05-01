/*
 * XREFs of ?RmpCpuSetManagerInsertAllocation@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180089028
 * Callers:
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180088400 (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFO.c)
 * Callees:
 *     ?RmpObjectTableAddObject@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x18008CB74 (-RmpObjectTableAddObject@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z.c)
 */

void __fastcall RmpCpuSetManagerInsertAllocation(char ***a1, struct _RM_CPU_SET_ALLOCATION *a2)
{
  char *v4; // rax
  char **v5; // rcx
  char *v6; // rbx

  RmpObjectTableAddObject((struct _RM_OBJECT_TABLE *)(*a1 + 3), a2);
  *((_QWORD *)a2 + 7) = a1;
  v4 = (char *)a2 + 64;
  v5 = a1[4];
  v6 = (char *)(a1 + 3);
  if ( *v5 != v6 )
    __fastfail(3u);
  *(_QWORD *)v4 = v6;
  *((_QWORD *)a2 + 9) = v5;
  *v5 = v4;
  *((_QWORD *)v6 + 1) = v4;
  if ( _InterlockedIncrement64((volatile signed __int64 *)a2 + 2) <= 1 )
    __fastfail(0xEu);
}
