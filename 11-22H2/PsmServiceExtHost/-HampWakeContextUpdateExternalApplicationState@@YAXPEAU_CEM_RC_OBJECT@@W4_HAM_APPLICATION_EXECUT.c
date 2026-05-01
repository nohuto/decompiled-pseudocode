/*
 * XREFs of ?HampWakeContextUpdateExternalApplicationState@@YAXPEAU_CEM_RC_OBJECT@@W4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x180017628
 * Callers:
 *     ?HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECUTION_STATE@@K@Z @ 0x1800177C0 (-HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECU.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x180019AE0 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x180034760 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 * Callees:
 *     ?HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180017704 (-HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     CempLockTrackerMarkReleased @ 0x18001C6B0 (CempLockTrackerMarkReleased.c)
 */

__int64 __fastcall HampWakeContextUpdateExternalApplicationState(__int64 a1, char a2)
{
  DWORD v2; // edi
  _QWORD *Value; // rbx
  char v6; // si
  __int64 v7; // rdx

  v2 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v2) & 0xFFFFFFFFFFFFF800uLL) != 0 )
      __int2c();
    *Value |= 0x800uLL;
    ++Value[12];
  }
  RtlAcquireSRWLockExclusive(a1 + 40);
  *(_DWORD *)(a1 + 48) = GetCurrentThreadId();
  v6 = *(_BYTE *)(a1 + 184) ^ (16 * a2);
  *(_BYTE *)(a1 + 185) |= 0x10u;
  *(_BYTE *)(a1 + 184) ^= v6 & 0x70;
  HampWakeContextQueueWorker((struct _HAM_HOST_WAKE_CONTEXT *)a1);
  CempLockTrackerMarkReleased(HampLockTrackerId, v7, 11LL);
  *(_DWORD *)(a1 + 48) = 0;
  return RtlReleaseSRWLockExclusive(a1 + 40);
}
