/*
 * XREFs of ?IsTouchDevice@TouchProcessor@@SAHPEBUDeviceInfo@@@Z @ 0x1801EB3D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TouchProcessor::IsTouchDevice(const struct DeviceInfo *a1)
{
  return (*((_DWORD *)a1 + 1) >> 3) & 1;
}
