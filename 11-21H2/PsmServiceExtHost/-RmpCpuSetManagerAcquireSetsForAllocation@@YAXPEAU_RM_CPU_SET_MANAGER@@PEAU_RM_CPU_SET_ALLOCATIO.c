/*
 * XREFs of ?RmpCpuSetManagerAcquireSetsForAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@KPEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAU_RM_CPU_SET_SCORE@@K@Z @ 0x18008854C
 * Callers:
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180088400 (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFO.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpCpuSetManagerAcquireSetsForAllocation(
        struct _RM_CPU_SET_MANAGER *a1,
        struct _RM_CPU_SET_ALLOCATION *a2,
        __int64 a3,
        struct _RM_CPU_SET_REQUEST_INFORMATION *a4,
        struct _RM_CPU_SET_SCORE *a5)
{
  unsigned int i; // r11d
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // ecx

  for ( i = 0; *((_DWORD *)a2 + 90) < *(_DWORD *)a4; ++*((_DWORD *)a2 + 90) )
  {
    v8 = i++;
    v8 *= 2LL;
    v9 = *((unsigned int *)a5 + 2 * v8);
    v10 = *((_DWORD *)a5 + 2 * v8 + 1);
    *((_QWORD *)a1 + v9 + 43) &= ~(1LL << v10);
    *((_DWORD *)a1 + 353) |= 1u;
    --*((_DWORD *)a1 + 350);
    *((_QWORD *)a2 + v9 + 13) |= 1LL << v10;
  }
}
