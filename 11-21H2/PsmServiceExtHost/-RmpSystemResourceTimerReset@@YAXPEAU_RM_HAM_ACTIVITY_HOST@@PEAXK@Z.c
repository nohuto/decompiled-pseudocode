/*
 * XREFs of ?RmpSystemResourceTimerReset@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAXK@Z @ 0x18003E610
 * Callers:
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE@@@Z @ 0x1800503AC (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpSystemResourceTimerReset(struct _RM_HAM_ACTIVITY_HOST *a1, void *a2, unsigned int a3)
{
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)(*((_QWORD *)a1 - 2) + 40LL) + 192LL))(a2, a3);
}
