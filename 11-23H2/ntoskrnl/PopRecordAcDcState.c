/*
 * XREFs of PopRecordAcDcState @ 0x1409813CC
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x1408706C0 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x14032D618 (PopBsdHandleRequest.c)
 */

void __fastcall PopRecordAcDcState(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  HIBYTE(PopBsdPowerTransition) = (a1 << 7) | HIBYTE(PopBsdPowerTransition) & 0x7F;
  PopBsdHandleRequest(1u);
  PopReleaseRwLock(&PopBsdUpdateLock);
}
