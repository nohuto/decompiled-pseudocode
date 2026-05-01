/*
 * XREFs of ?ArManagerDestroy@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x18006D334
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x180048C40 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ?ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180005DA8 (-ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ?ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x18006D440 (-ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 */

void __fastcall ArManagerDestroy(struct _ACTIVITY_RESTARTER *a1)
{
  struct _ACTIVITY_RESTARTER *v1; // rbx
  _BYTE v2[144]; // [rsp+20h] [rbp-A8h] BYREF

  v1 = (struct _ACTIVITY_RESTARTER *)ArGlobals;
  ArUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v2);
  ArManagerRundown(v1);
  HamDisconnectFromServer(*((_QWORD *)v1 + 9));
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
  CempLockTrackerClearForThread(ArLockTrackerId);
}
