/*
 * XREFs of RaidBusyDeviceQueue @ 0x1C004011C
 * Callers:
 *     RaidAdapterDeviceBusy @ 0x1C003511C (RaidAdapterDeviceBusy.c)
 * Callees:
 *     RiDisableDeviceQueueFastPath @ 0x1C0019640 (RiDisableDeviceQueueFastPath.c)
 */

void __fastcall RaidBusyDeviceQueue(__int64 a1, unsigned int a2)
{
  int v2; // ebp
  KIRQL v4; // bl

  v2 = a2;
  if ( a2 >= 0x7FFFFFFF )
    v2 = 0x7FFFFFFF;
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  RiDisableDeviceQueueFastPath((struct _EX_RUNDOWN_REF *)a1);
  if ( v2 > (((__int64)*(unsigned int *)(a1 + 88) >> 1) & 0x7FFFFFFF) )
    v2 = ((__int64)*(unsigned int *)(a1 + 88) >> 1) & 0x7FFFFFFF;
  *(_DWORD *)(a1 + 28) = v2;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v4);
}
