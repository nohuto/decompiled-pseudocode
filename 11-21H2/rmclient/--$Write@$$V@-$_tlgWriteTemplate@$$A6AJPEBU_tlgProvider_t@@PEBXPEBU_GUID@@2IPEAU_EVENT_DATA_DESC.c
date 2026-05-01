/*
 * XREFs of ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800011A8
 * Callers:
 *     ?RmpProcContextEmptyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180012E00 (-RmpProcContextEmptyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpProcContextMemoryStateChangedCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180013530 (-RmpProcContextMemoryStateChangedCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?RmpProcEntryIssueCallback@@YA?AW4_RM_PROC_CALLBACK_RESULT@@PEAU_RM_PROC_ENTRY@@W4_RM_PROC_REQUEST@@@Z @ 0x1800144F4 (-RmpProcEntryIssueCallback@@YA-AW4_RM_PROC_CALLBACK_RESULT@@PEAU_RM_PROC_ENTRY@@W4_RM_PROC_REQUE.c)
 *     RmConnectProcessManager @ 0x18001B590 (RmConnectProcessManager.c)
 *     RmDisconnectProcessManager @ 0x18001B670 (RmDisconnectProcessManager.c)
 *     RmSetProcessManagement @ 0x18001B6F0 (RmSetProcessManagement.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18000110C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18000B040 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        __int64 a1,
        unsigned __int8 *a2)
{
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-38h] BYREF

  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_180032000, a2, 0LL, 0LL, 2u, &v3);
}
