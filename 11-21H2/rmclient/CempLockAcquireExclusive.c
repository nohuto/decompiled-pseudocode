/*
 * XREFs of CempLockAcquireExclusive @ 0x18001E644
 * Callers:
 *     ?RmpProcContextEmptyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180012E00 (-RmpProcContextEmptyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpProcContextLockExclusive@@YAXPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@@Z @ 0x180013518 (-RmpProcContextLockExclusive@@YAXPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@@Z.c)
 *     ?RmpProcContextMemoryStateChangedCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180013530 (-RmpProcContextMemoryStateChangedCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?RmpProcContextRundown@@YAXPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@@Z @ 0x180013ACC (-RmpProcContextRundown@@YAXPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@@Z.c)
 *     ?RmpProcEntryCheckQueueEmpty@@YAXPEAU_RM_PROC_ENTRY@@@Z @ 0x180013E7C (-RmpProcEntryCheckQueueEmpty@@YAXPEAU_RM_PROC_ENTRY@@@Z.c)
 *     ?RmpProcEntryDecreaseLevel@@YAXPEAU_RM_PROC_ENTRY@@W4_RM_PROC_MANAGEMENT_LEVEL@@1@Z @ 0x180013F44 (-RmpProcEntryDecreaseLevel@@YAXPEAU_RM_PROC_ENTRY@@W4_RM_PROC_MANAGEMENT_LEVEL@@1@Z.c)
 *     ?RmpProcEntryEmpty@@YAXPEAU_RM_PROC_ENTRY@@_K@Z @ 0x180014088 (-RmpProcEntryEmpty@@YAXPEAU_RM_PROC_ENTRY@@_K@Z.c)
 *     ?RmpProcEntryIncreaseLevel@@YAXPEAU_RM_PROC_ENTRY@@W4_RM_PROC_MANAGEMENT_LEVEL@@1K@Z @ 0x180014264 (-RmpProcEntryIncreaseLevel@@YAXPEAU_RM_PROC_ENTRY@@W4_RM_PROC_MANAGEMENT_LEVEL@@1K@Z.c)
 *     ?RmpProcEntryIssueCallback@@YA?AW4_RM_PROC_CALLBACK_RESULT@@PEAU_RM_PROC_ENTRY@@W4_RM_PROC_REQUEST@@@Z @ 0x1800144F4 (-RmpProcEntryIssueCallback@@YA-AW4_RM_PROC_CALLBACK_RESULT@@PEAU_RM_PROC_ENTRY@@W4_RM_PROC_REQUE.c)
 *     ?RmpProcEntrySetLevel@@YAJPEAU_RM_PROC_ENTRY@@W4_RM_PROC_MANAGEMENT_LEVEL@@PEAU_RM_PROC_PROPERTIES@@PEAW42@@Z @ 0x1800147C4 (-RmpProcEntrySetLevel@@YAJPEAU_RM_PROC_ENTRY@@W4_RM_PROC_MANAGEMENT_LEVEL@@PEAU_RM_PROC_PROPERTI.c)
 *     ?RmpProcEntrySetSwapState@@YAJPEAU_RM_PROC_ENTRY@@K@Z @ 0x180014A40 (-RmpProcEntrySetSwapState@@YAJPEAU_RM_PROC_ENTRY@@K@Z.c)
 *     ?RmpProcEntryStart@@YAJPEAU_RM_PROC_ENTRY@@@Z @ 0x180014B80 (-RmpProcEntryStart@@YAJPEAU_RM_PROC_ENTRY@@@Z.c)
 *     ?RmpProcEntryTrimCompressionStore@@YAXPEAU_RM_PROC_ENTRY@@_K@Z @ 0x180014C10 (-RmpProcEntryTrimCompressionStore@@YAXPEAU_RM_PROC_ENTRY@@_K@Z.c)
 * Callees:
 *     <none>
 */

DWORD __fastcall CempLockAcquireExclusive(__int64 a1)
{
  DWORD result; // eax

  RtlAcquireSRWLockExclusive(a1);
  result = GetCurrentThreadId();
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
