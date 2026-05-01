/*
 * XREFs of ?HampActWaitForNoChangeInProgress@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x1800784FC
 * Callers:
 *     ?HampHostAmbientStateChanged@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_SYSTEM_STATE_TRACKER_SYSTEM_STATE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@@Z @ 0x1800515F2 (-HampHostAmbientStateChanged@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_SYSTEM_STATE_TRACKER_SYSTEM_STA.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x180010300 (CempLockTrackerMarkReleased.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003E214 (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 */

void __fastcall HampActWaitForNoChangeInProgress(struct _RM_HAM_ACTIVITY_HOST **a1)
{
  __int64 v2; // rdx
  int *v3; // rsi
  struct _RM_HAM_ACTIVITY_HOST *v4; // rbx
  int v5; // [rsp+30h] [rbp+8h] BYREF

  HampHostAcquireLockSharedEx(a1[10], 0LL);
  v3 = (int *)(a1 + 69);
  while ( 1 )
  {
    v4 = a1[10];
    if ( (*v3 & 1) == 0 )
      break;
    v5 = *v3;
    CempLockTrackerMarkReleased(HampLockTrackerId, v2, 1u);
    RtlReleaseSRWLockShared(v4);
    RtlWaitOnAddress(a1 + 69, &v5, 4LL);
    HampHostAcquireLockSharedEx(a1[10], 0LL);
  }
  CempLockTrackerMarkReleased(HampLockTrackerId, v2, 1u);
  RtlReleaseSRWLockShared(v4);
}
