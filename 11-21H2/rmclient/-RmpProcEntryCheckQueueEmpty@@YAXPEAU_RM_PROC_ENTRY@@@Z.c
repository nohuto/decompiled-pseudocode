/*
 * XREFs of ?RmpProcEntryCheckQueueEmpty@@YAXPEAU_RM_PROC_ENTRY@@@Z @ 0x180013E7C
 * Callers:
 *     ?RmpProcEntryIncreaseLevel@@YAXPEAU_RM_PROC_ENTRY@@W4_RM_PROC_MANAGEMENT_LEVEL@@1K@Z @ 0x180014264 (-RmpProcEntryIncreaseLevel@@YAXPEAU_RM_PROC_ENTRY@@W4_RM_PROC_MANAGEMENT_LEVEL@@1K@Z.c)
 *     ?RmpProcEntrySetFreezeState@@YAXPEAU_RM_PROC_ENTRY@@K@Z @ 0x1800146E4 (-RmpProcEntrySetFreezeState@@YAXPEAU_RM_PROC_ENTRY@@K@Z.c)
 * Callees:
 *     ?RmpProcContextCheckQueueEmptyWorker@@YAXPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@@Z @ 0x180012D24 (-RmpProcContextCheckQueueEmptyWorker@@YAXPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@@Z.c)
 *     CempListEntryIsNull @ 0x18001E5BC (CempListEntryIsNull.c)
 *     CempLockAcquireExclusive @ 0x18001E644 (CempLockAcquireExclusive.c)
 */

void __fastcall RmpProcEntryCheckQueueEmpty(struct _RM_PROC_ENTRY *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbx
  _QWORD *v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rcx

  v4 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
  CempLockAcquireExclusive(v4 + 48, a2, a3);
  if ( (*(_BYTE *)(v4 + 96) & 1) == 0 && (unsigned int)CempListEntryIsNull((char *)a1 + 88) )
  {
    if ( v6 + _InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 3, (unsigned int)v6) <= v6 )
      __fastfail(v6 + 13);
    v7 = *(_QWORD **)(v4 + 88);
    if ( *v7 != v4 + 80 )
      __fastfail(3u);
    v5[1] = v7;
    *v5 = v4 + 80;
    *v7 = v5;
    *(_QWORD *)(v4 + 88) = v5;
    RmpProcContextCheckQueueEmptyWorker((struct _RM_PROCESS_MANAGEMENT_CONTEXT *)v4);
  }
  *(_DWORD *)(v4 + 56) = 0;
  RtlReleaseSRWLockExclusive(v4 + 48);
}
