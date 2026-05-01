/*
 * XREFs of ?ArAcquireGlobalLockExclusive@@YAXXZ @ 0x1800491F0
 * Callers:
 *     ?ArManagerCreate@@YAJPEAPEAU_ACTIVITY_RESTARTER@@PEAU_WNF_STATE_NAME@@@Z @ 0x1800490CC (-ArManagerCreate@@YAJPEAPEAU_ACTIVITY_RESTARTER@@PEAU_WNF_STATE_NAME@@@Z.c)
 * Callees:
 *     CempLockTrackerMarkAcquired @ 0x18000E390 (CempLockTrackerMarkAcquired.c)
 */

void __fastcall ArAcquireGlobalLockExclusive(__int64 a1, __int64 a2)
{
  CempLockTrackerMarkAcquired(ArLockTrackerId, a2, 0, 0);
  RtlAcquireSRWLockExclusive(&ArGlobalLock);
  dword_1800DD580 = GetCurrentThreadId();
}
