/*
 * XREFs of ?RmpCpuSetManagerReleaseAllProcessorsFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x1800879E8
 * Callers:
 *     ?RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180087070 (-RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@.c)
 *     ?RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180087AA4 (-RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 * Callees:
 *     ?RmpCpuSetManagerMarkProcessDirty@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x1800871A8 (-RmpCpuSetManagerMarkProcessDirty@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z.c)
 */

void __fastcall RmpCpuSetManagerReleaseAllProcessorsFromAllocation(
        struct _RM_CPU_SET_MANAGER *a1,
        struct _RM_CPU_SET_ALLOCATION *a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // al
  _QWORD *v5; // rdi
  unsigned int v6; // ebp
  __int64 v7; // r14
  int v10; // eax
  char *v11; // r10
  char *i; // r9
  char **v13; // r9

  v4 = 0;
  v5 = (_QWORD *)((char *)a2 + 104);
  v6 = 0;
  v7 = a1 - a2;
  do
  {
    if ( !*((_DWORD *)a2 + 90) )
      break;
    if ( *v5 )
    {
      v10 = RtlNumberOfSetBitsUlongPtr(*v5, a2, a3, a4);
      *(_QWORD *)((char *)v5 + v7 + 240) |= *v5;
      *v5 = 0LL;
      *((_DWORD *)a1 + 350) += v10;
      *((_DWORD *)a2 + 90) -= v10;
      v4 = 1;
    }
    ++v6;
    ++v5;
  }
  while ( v6 < 0x20 );
  if ( v4 )
  {
    *((_DWORD *)a1 + 353) |= 1u;
    v11 = (char *)a2 + 80;
    for ( i = (char *)*((_QWORD *)a2 + 10); i != v11; i = *v13 )
      RmpCpuSetManagerMarkProcessDirty(a1, *((struct _RM_CPU_SET_PROCESS **)i - 6));
  }
}
