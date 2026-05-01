/*
 * XREFs of ?RmpProcEntryStart@@YAJPEAU_RM_PROC_ENTRY@@@Z @ 0x180014B80
 * Callers:
 *     ?RmpProcContextEntryCreate@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@KPEAX1PEAPEAU_RM_PROC_ENTRY@@@Z @ 0x180013220 (-RmpProcContextEntryCreate@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@KPEAX1PEAPEAU_RM_PROC_ENTRY@@.c)
 * Callees:
 *     CemRcObjectDereference @ 0x1800150BC (CemRcObjectDereference.c)
 *     CemRcTableFindOrInsertEx @ 0x1800151C8 (CemRcTableFindOrInsertEx.c)
 *     CempLockAcquireExclusive @ 0x18001E644 (CempLockAcquireExclusive.c)
 */

__int64 __fastcall RmpProcEntryStart(struct _RM_PROC_ENTRY *a1, __int64 a2, __int64 a3)
{
  char *v3; // rsi
  __int64 v5; // r8
  unsigned int v6; // ebx

  v3 = (char *)a1 + 64;
  CempLockAcquireExclusive((char *)a1 + 64, a2, a3);
  CemRcTableFindOrInsertEx(*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL, *((unsigned int *)a1 + 20), v5, a1);
  if ( a1 )
    v6 = -1073740008;
  else
    v6 = 0;
  *((_DWORD *)v3 + 2) = 0;
  RtlReleaseSRWLockExclusive(v3);
  return v6;
}
