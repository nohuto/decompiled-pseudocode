/*
 * XREFs of RmCoreRpcSrvDisconnectFromRmServer @ 0x180087C70
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ?RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z @ 0x1800880D0 (-RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z.c)
 */

__int64 __fastcall RmCoreRpcSrvDisconnectFromRmServer(struct _RM_ACTIVATOR **a1)
{
  struct _RM_ACTIVATOR *v2; // rbx
  DWORD v3; // ecx
  _BYTE v5[144]; // [rsp+20h] [rbp-A8h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v5);
  RmpAcquireGlobalLock();
  v2 = *a1;
  RmpActivatorCleanup(*a1);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
  RmpReleaseGlobalLock();
  v3 = HampLockTrackerId;
  *a1 = 0LL;
  CempLockTrackerClearForThread(v3);
  return 0LL;
}
