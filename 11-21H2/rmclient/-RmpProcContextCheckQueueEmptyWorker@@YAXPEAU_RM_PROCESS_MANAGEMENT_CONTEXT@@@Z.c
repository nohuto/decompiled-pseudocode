/*
 * XREFs of ?RmpProcContextCheckQueueEmptyWorker@@YAXPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@@Z @ 0x180012D24
 * Callers:
 *     ?RmpProcContextMemoryStateChangedCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180013530 (-RmpProcContextMemoryStateChangedCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?RmpProcEntryCheckQueueEmpty@@YAXPEAU_RM_PROC_ENTRY@@@Z @ 0x180013E7C (-RmpProcEntryCheckQueueEmpty@@YAXPEAU_RM_PROC_ENTRY@@@Z.c)
 *     RmSetProcessManagement @ 0x18001B6F0 (RmSetProcessManagement.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpProcContextCheckQueueEmptyWorker(struct _RM_PROCESS_MANAGEMENT_CONTEXT *a1)
{
  int v1; // eax
  int v2; // eax

  v1 = *((_DWORD *)a1 + 24);
  if ( (v1 & 1) == 0 )
  {
    v2 = v1 | 4;
    *((_DWORD *)a1 + 24) = v2;
    if ( (v2 & 2) == 0 )
    {
      *((_DWORD *)a1 + 24) = v2 | 2;
      TpPostWork(*((_QWORD *)a1 + 8));
    }
  }
}
