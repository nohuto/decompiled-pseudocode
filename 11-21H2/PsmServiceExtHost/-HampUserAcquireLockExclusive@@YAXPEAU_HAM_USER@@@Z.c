/*
 * XREFs of ?HampUserAcquireLockExclusive@@YAXPEAU_HAM_USER@@@Z @ 0x180046040
 * Callers:
 *     ?HampUserTryRefreshContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z @ 0x180045F38 (-HampUserTryRefreshContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z.c)
 *     ?HampUserLogoff@@YAJPEAU_HAM_USER@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18007B6F0 (-HampUserLogoff@@YAJPEAU_HAM_USER@@PEAU_HAM_CLIENT_CONTEXT@@K@Z.c)
 * Callees:
 *     CempLockTrackerMarkAcquired @ 0x18000E390 (CempLockTrackerMarkAcquired.c)
 */

void __fastcall HampUserAcquireLockExclusive(struct _HAM_USER *a1, __int64 a2)
{
  CempLockTrackerMarkAcquired(HampLockTrackerId, a2, 7u, 0);
  RtlAcquireSRWLockExclusive((char *)a1 + 168);
  *((_DWORD *)a1 + 44) = GetCurrentThreadId();
}
