/*
 * XREFs of CmpUnlockGlobalKeyLockTracker @ 0x14080FCA4
 * Callers:
 *     CmpGlobalLockKeyForWrite @ 0x14080FBCC (CmpGlobalLockKeyForWrite.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140919308 (CmpGlobalUnlockKeyForWrite.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 */

char CmpUnlockGlobalKeyLockTracker()
{
  ExReleasePushLockEx((ULONG_PTR)&CmpKeyLockTracker, 0LL);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
