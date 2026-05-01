/*
 * XREFs of ?RmpCpuSetManagerFindProcessComparator@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z @ 0x1800866D4
 * Callers:
 *     ?RmpCpuSetManagerFindProcess@@YAPEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_MANAGER@@PEAX@Z @ 0x180086578 (-RmpCpuSetManagerFindProcess@@YAPEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_MANAGER@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RmpCpuSetManagerFindProcessComparator(struct _RTL_HASH_ENTRY *a1, void *a2)
{
  return (_DWORD)a2 == *((_DWORD *)a1 + 14);
}
