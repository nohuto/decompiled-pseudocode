/*
 * XREFs of ?ArAcquireGlobalLockExclusive@@YAXXZ @ 0x18001439C
 * Callers:
 *     ?ArManagerCreate@@YAJPEAU_TP_CALLBACK_ENVIRON_V3@@PEAPEAU_ACTIVITY_RESTARTER@@@Z @ 0x18004B0D4 (-ArManagerCreate@@YAJPEAU_TP_CALLBACK_ENVIRON_V3@@PEAPEAU_ACTIVITY_RESTARTER@@@Z.c)
 * Callees:
 *     CempLockTrackerMarkAcquired @ 0x1800211E0 (CempLockTrackerMarkAcquired.c)
 */

void ArAcquireGlobalLockExclusive(void)
{
  CempLockTrackerMarkAcquired(ArLockTrackerId);
  RtlAcquireSRWLockExclusive(&ArGlobalLock);
  dword_1800DC568 = GetCurrentThreadId();
}
