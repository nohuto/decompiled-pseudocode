/*
 * XREFs of ?RmpProcContextCleanup@@YAXPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@@Z @ 0x180012D5C
 * Callers:
 *     RmDisconnectProcessManager @ 0x18001B670 (RmDisconnectProcessManager.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpProcContextCleanup(struct _RM_PROCESS_MANAGEMENT_CONTEXT *a1)
{
  if ( *((_QWORD *)a1 + 8) )
    TpReleaseWork();
}
