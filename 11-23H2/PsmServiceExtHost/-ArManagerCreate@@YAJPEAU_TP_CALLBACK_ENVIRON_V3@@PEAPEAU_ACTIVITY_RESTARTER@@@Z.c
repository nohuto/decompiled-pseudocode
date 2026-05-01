/*
 * XREFs of ?ArManagerCreate@@YAJPEAU_TP_CALLBACK_ENVIRON_V3@@PEAPEAU_ACTIVITY_RESTARTER@@@Z @ 0x18004B0D4
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x180043960 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ?ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180003738 (-ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180010F30 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?ArManagerInitialize@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180011458 (-ArManagerInitialize@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ?ArAcquireGlobalLockExclusive@@YAXXZ @ 0x18001439C (-ArAcquireGlobalLockExclusive@@YAXXZ.c)
 *     CempLockTrackerMarkReleased @ 0x18001C6B0 (CempLockTrackerMarkReleased.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?ArManagerAllocateState@@YAJPEAU_ACTIVITY_RESTARTER@@PEAU_TP_CALLBACK_ENVIRON_V3@@@Z @ 0x18004B068 (-ArManagerAllocateState@@YAJPEAU_ACTIVITY_RESTARTER@@PEAU_TP_CALLBACK_ENVIRON_V3@@@Z.c)
 */

__int64 __fastcall ArManagerCreate(struct _TP_CALLBACK_ENVIRON_V3 *a1, struct _ACTIVITY_RESTARTER **a2)
{
  struct _ACTIVITY_RESTARTER *Heap; // rax
  struct _ACTIVITY_RESTARTER *v4; // rdi
  int State; // ebx
  __int64 v6; // rdx
  _BYTE v8[144]; // [rsp+20h] [rbp-A8h] BYREF

  ArUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v8);
  Heap = (struct _ACTIVITY_RESTARTER *)HampAllocateHeap(0x58uLL);
  v4 = Heap;
  if ( Heap )
  {
    ArManagerInitialize(Heap);
    State = ArManagerAllocateState(v4, a1);
    if ( State >= 0 )
    {
      ArAcquireGlobalLockExclusive();
      dword_1800DC568 = 0;
      ArGlobals = v4;
      RtlReleaseSRWLockExclusive(&ArGlobalLock);
      CempLockTrackerMarkReleased(ArLockTrackerId, v6, 0);
      State = 0;
    }
  }
  else
  {
    State = -1073741801;
  }
  CempLockTrackerClearForThread(ArLockTrackerId);
  return (unsigned int)State;
}
