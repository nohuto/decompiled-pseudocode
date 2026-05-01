/*
 * XREFs of ?RmpCpuSetManagerFindProcessComparator@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z @ 0x180088DA8
 * Callers:
 *     ?RmpCpuSetManagerFindProcess@@YAPEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_MANAGER@@PEAX@Z @ 0x180088C4C (-RmpCpuSetManagerFindProcess@@YAPEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_MANAGER@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RmpCpuSetManagerFindProcessComparator(struct _RTL_HASH_ENTRY *a1, void *a2)
{
  return (_DWORD)a2 == *((_DWORD *)a1 + 14);
}
