/*
 * XREFs of ?IsMPCHomeGestureDevice@MPCHomeGestureProcessor@@SAHPEBUDeviceInfo@@@Z @ 0x180194A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MPCHomeGestureProcessor::IsMPCHomeGestureDevice(const struct DeviceInfo *a1)
{
  return *((_DWORD *)a1 + 1) == 0x400000;
}
