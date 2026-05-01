/*
 * XREFs of ?HampHostQuiesceTimerCallback@@YAXPEAX0@Z @ 0x18007A5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A34C (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A9F4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

void __fastcall HampHostQuiesceTimerCallback(void *a1, struct _RM_HAM_ACTIVITY_HOST *a2)
{
  _BYTE v3[144]; // [rsp+20h] [rbp-A8h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v3);
  HampHostAcquireLockExclusiveEx(a2, 0);
  if ( (*((_DWORD *)a2 + 166) & 0xE0000000) == 0xA0000000LL )
  {
    HampHostReleaseLockExclusiveEx(a2);
  }
  else
  {
    HampHostReleaseLockExclusiveEx(a2);
    RtlWakeAllConditionVariable((char *)a2 + 696);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
}
