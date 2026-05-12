/*
 * XREFs of RaidNormalizeDeviceQueue @ 0x1C00195C4
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0001770 (RaidUnitCompleteRequest.c)
 *     RaidRestartIoQueue @ 0x1C00194E0 (RaidRestartIoQueue.c)
 * Callees:
 *     RiNormalizeDeviceQueue @ 0x1C0004130 (RiNormalizeDeviceQueue.c)
 *     RiTryEnableDeviceQueueFastPath @ 0x1C000464C (RiTryEnableDeviceQueueFastPath.c)
 *     RiDisableDeviceQueueFastPath @ 0x1C0019640 (RiDisableDeviceQueueFastPath.c)
 */

char *__fastcall RaidNormalizeDeviceQueue(__int64 a1)
{
  KIRQL v2; // di
  __int64 v3; // rdx
  char *v4; // rbx

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  RiDisableDeviceQueueFastPath(a1, v3);
  v4 = RiNormalizeDeviceQueue(a1, 0);
  RiTryEnableDeviceQueueFastPath(a1);
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v2);
  return v4;
}
