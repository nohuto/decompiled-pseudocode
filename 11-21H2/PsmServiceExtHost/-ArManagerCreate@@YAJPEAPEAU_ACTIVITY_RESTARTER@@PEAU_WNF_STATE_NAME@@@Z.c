/*
 * XREFs of ?ArManagerCreate@@YAJPEAPEAU_ACTIVITY_RESTARTER@@PEAU_WNF_STATE_NAME@@@Z @ 0x1800490CC
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x180048C40 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ?ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180005DA8 (-ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerMarkReleased @ 0x180010300 (CempLockTrackerMarkReleased.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     ?ArAcquireGlobalLockExclusive@@YAXXZ @ 0x1800491F0 (-ArAcquireGlobalLockExclusive@@YAXXZ.c)
 *     ?ArManagerInitialize@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180049238 (-ArManagerInitialize@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

__int64 __fastcall ArManagerCreate(struct _ACTIVITY_RESTARTER **a1, struct _WNF_STATE_NAME *a2)
{
  struct _ACTIVITY_RESTARTER *Heap; // rax
  struct _ACTIVITY_RESTARTER *v4; // rdi
  int v5; // ebx
  __int64 v6; // rdx
  _BYTE v8[144]; // [rsp+40h] [rbp-A8h] BYREF

  ArUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v8);
  Heap = (struct _ACTIVITY_RESTARTER *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x58uLL);
  v4 = Heap;
  if ( Heap )
  {
    ArManagerInitialize(Heap);
    v5 = HamConnectToServer(ArHamCallback, (char *)v4 + 72);
    if ( v5 >= 0 )
    {
      RtlSubscribeWnfStateChangeNotification((char *)v4 + 80, *a2, 0LL, ArCsStateChangeCallback, v4, 0LL, 0, 0);
      ArAcquireGlobalLockExclusive();
      dword_1800DD580 = 0;
      ArGlobals = v4;
      RtlReleaseSRWLockExclusive(&ArGlobalLock);
      CempLockTrackerMarkReleased(ArLockTrackerId, v6, 0);
      v5 = 0;
    }
  }
  else
  {
    v5 = -1073741801;
  }
  CempLockTrackerClearForThread(ArLockTrackerId);
  return (unsigned int)v5;
}
