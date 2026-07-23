/*
 * XREFs of PiDqQueryUnlock @ 0x14095C744
 * Callers:
 *     PiDqIrpCancel @ 0x1405621A0 (PiDqIrpCancel.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExReleasePushLockEx @ 0x140231280 (ExReleasePushLockEx.c)
 */

_QWORD *__fastcall PiDqQueryUnlock(__int64 a1)
{
  ExReleasePushLockEx((__int64 *)(a1 + 64), 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
