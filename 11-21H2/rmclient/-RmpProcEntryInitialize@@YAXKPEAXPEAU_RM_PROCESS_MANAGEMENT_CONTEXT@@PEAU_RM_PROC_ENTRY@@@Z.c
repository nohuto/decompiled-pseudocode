/*
 * XREFs of ?RmpProcEntryInitialize@@YAXKPEAXPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@PEAU_RM_PROC_ENTRY@@@Z @ 0x1800143B4
 * Callers:
 *     ?RmpProcContextEntryCreate@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@KPEAX1PEAPEAU_RM_PROC_ENTRY@@@Z @ 0x180013220 (-RmpProcContextEntryCreate@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@KPEAX1PEAPEAU_RM_PROC_ENTRY@@.c)
 * Callees:
 *     memset_0 @ 0x18001570E (memset_0.c)
 *     CempLockInitialize @ 0x18001E678 (CempLockInitialize.c)
 */

void __fastcall RmpProcEntryInitialize(
        int a1,
        void *a2,
        struct _RM_PROCESS_MANAGEMENT_CONTEXT *a3,
        struct _RM_PROC_ENTRY *a4)
{
  memset_0((char *)a4 + 40, 0, 0x58uLL);
  *(_QWORD *)a4 = 0LL;
  *((_QWORD *)a4 + 1) = 0LL;
  *((_QWORD *)a4 + 2) = -1LL;
  *((_QWORD *)a4 + 3) = 1LL;
  *((_QWORD *)a4 + 4) = a3;
  CempLockInitialize((char *)a4 + 64);
  *((_DWORD *)a4 + 26) &= 0xFFFFFFF8;
  *((_QWORD *)a4 + 7) = a2;
  *((_DWORD *)a4 + 20) = a1;
}
