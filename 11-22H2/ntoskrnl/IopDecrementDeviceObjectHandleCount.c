/*
 * XREFs of IopDecrementDeviceObjectHandleCount @ 0x1403D6B4C
 * Callers:
 *     IopRemoveDevice @ 0x140869E38 (IopRemoveDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140882FB8 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PiIrpQueryRemoveDevice @ 0x14096D1CC (PiIrpQueryRemoveDevice.c)
 * Callees:
 *     IopDecrementDeviceObjectRef @ 0x1402AFD80 (IopDecrementDeviceObjectRef.c)
 */

__int64 __fastcall IopDecrementDeviceObjectHandleCount(ULONG_PTR a1)
{
  return IopDecrementDeviceObjectRef(a1, 0);
}
