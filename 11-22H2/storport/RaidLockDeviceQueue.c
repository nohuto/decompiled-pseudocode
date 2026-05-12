/*
 * XREFs of RaidLockDeviceQueue @ 0x1C0040380
 * Callers:
 *     RaUnitStopDeviceIrp @ 0x1C00A97D8 (RaUnitStopDeviceIrp.c)
 *     StorProcessNVMeNewUnit @ 0x1C00ABBA8 (StorProcessNVMeNewUnit.c)
 * Callees:
 *     RiDisableDeviceQueueFastPath @ 0x1C0019640 (RiDisableDeviceQueueFastPath.c)
 */

void __fastcall RaidLockDeviceQueue(__int64 a1)
{
  *(_BYTE *)(a1 + 37) = 1;
  RiDisableDeviceQueueFastPath((struct _EX_RUNDOWN_REF *)a1);
}
