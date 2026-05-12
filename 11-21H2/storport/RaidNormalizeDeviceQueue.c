/*
 * XREFs of RaidNormalizeDeviceQueue @ 0x1C0009308
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0006E70 (RaidUnitCompleteRequest.c)
 *     RaidRestartIoQueue @ 0x1C0009220 (RaidRestartIoQueue.c)
 * Callees:
 *     RiNormalizeDeviceQueue @ 0x1C000936C (RiNormalizeDeviceQueue.c)
 */

__int64 __fastcall RaidNormalizeDeviceQueue(__int64 a1)
{
  volatile LONG *v1; // rsi
  KIRQL v3; // di
  __int64 v4; // rbx

  v1 = (volatile LONG *)(a1 + 72);
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v4 = RiNormalizeDeviceQueue(a1, 0LL);
  ExReleaseSpinLockExclusive(v1, v3);
  return v4;
}
