/*
 * XREFs of PiDqQueryUnlock @ 0x14095C544
 * Callers:
 *     PiDqIrpCancel @ 0x140561AE0 (PiDqIrpCancel.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExReleasePushLockEx @ 0x140231190 (ExReleasePushLockEx.c)
 */

_QWORD *__fastcall PiDqQueryUnlock(__int64 a1)
{
  ExReleasePushLockEx((__int64 *)(a1 + 64), 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
