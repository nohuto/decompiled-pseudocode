/*
 * XREFs of RaidPauseDeviceQueue @ 0x1C004071C
 * Callers:
 *     RaidStallDeviceQueue @ 0x1C0040748 (RaidStallDeviceQueue.c)
 *     RaidPauseUnitQueue @ 0x1C0044AB0 (RaidPauseUnitQueue.c)
 * Callees:
 *     RiDisableDeviceQueueFastPath @ 0x1C0019640 (RiDisableDeviceQueueFastPath.c)
 */

_BOOL8 __fastcall RaidPauseDeviceQueue(__int64 a1)
{
  signed __int32 v1; // ebx

  v1 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 24), 1u);
  RiDisableDeviceQueueFastPath((struct _EX_RUNDOWN_REF *)a1);
  return v1 == -1;
}
