/*
 * XREFs of _tlgKeywordOn @ 0x1800010E0
 * Callers:
 *     ?RmpProcContextEmptyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180012E00 (-RmpProcContextEmptyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpProcContextEntryCreate@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@KPEAX1PEAPEAU_RM_PROC_ENTRY@@@Z @ 0x180013220 (-RmpProcContextEntryCreate@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@KPEAX1PEAPEAU_RM_PROC_ENTRY@@.c)
 *     ?RmpProcContextEntryDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180013320 (-RmpProcContextEntryDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?RmpProcContextMemoryStateChangedCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180013530 (-RmpProcContextMemoryStateChangedCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?RmpProcContextRemediatePhysical@@YA?AW4_RM_PROC_REMEDIATION_RESULT@@PEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@PEAU_RM_PROC_METRICS_BUFFER@@PEA_K@Z @ 0x180013820 (-RmpProcContextRemediatePhysical@@YA-AW4_RM_PROC_REMEDIATION_RESULT@@PEAU_RM_PROCESS_MANAGEMENT_.c)
 *     ?RmpProcContextRundown@@YAXPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@@Z @ 0x180013ACC (-RmpProcContextRundown@@YAXPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@@Z.c)
 *     ?RmpProcEntryEmpty@@YAXPEAU_RM_PROC_ENTRY@@_K@Z @ 0x180014088 (-RmpProcEntryEmpty@@YAXPEAU_RM_PROC_ENTRY@@_K@Z.c)
 *     ?RmpProcEntryIssueCallback@@YA?AW4_RM_PROC_CALLBACK_RESULT@@PEAU_RM_PROC_ENTRY@@W4_RM_PROC_REQUEST@@@Z @ 0x1800144F4 (-RmpProcEntryIssueCallback@@YA-AW4_RM_PROC_CALLBACK_RESULT@@PEAU_RM_PROC_ENTRY@@W4_RM_PROC_REQUE.c)
 *     ?RmpProcEntrySetFreezeState@@YAXPEAU_RM_PROC_ENTRY@@K@Z @ 0x1800146E4 (-RmpProcEntrySetFreezeState@@YAXPEAU_RM_PROC_ENTRY@@K@Z.c)
 *     ?RmpProcEntrySetSwapState@@YAJPEAU_RM_PROC_ENTRY@@K@Z @ 0x180014A40 (-RmpProcEntrySetSwapState@@YAJPEAU_RM_PROC_ENTRY@@K@Z.c)
 *     ?RmpProcEntryTrimCompressionStore@@YAXPEAU_RM_PROC_ENTRY@@_K@Z @ 0x180014C10 (-RmpProcEntryTrimCompressionStore@@YAXPEAU_RM_PROC_ENTRY@@_K@Z.c)
 *     RmConnectProcessManager @ 0x18001B590 (RmConnectProcessManager.c)
 *     RmDisconnectProcessManager @ 0x18001B670 (RmDisconnectProcessManager.c)
 *     RmSetProcessManagement @ 0x18001B6F0 (RmSetProcessManagement.c)
 * Callees:
 *     <none>
 */

bool __fastcall tlgKeywordOn(__int64 a1, __int64 a2)
{
  return (a2 & qword_180032010) != 0 && (a2 & qword_180032018) == qword_180032018;
}
