/*
 * XREFs of ?HampHostIsTerminateQueued@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800374BC
 * Callers:
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE@@@Z @ 0x1800503AC (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE.c)
 *     ?HampPdcDamExitWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18007EF80 (-HampPdcDamExitWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HampHostIsTerminateQueued(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  return (*((_DWORD *)a1 + 166) & 0x30000) != 0LL;
}
