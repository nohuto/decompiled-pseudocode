/*
 * XREFs of ?GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800D5100
 * Callers:
 *     ?SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x1800D3900 (-SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z.c)
 *     ?SendDeviceUpdate@SpatialRimDeviceCollection@@UEAAJKAEBUMPCSourceDeviceInfo@@@Z @ 0x1800DAEC0 (-SendDeviceUpdate@SpatialRimDeviceCollection@@UEAAJKAEBUMPCSourceDeviceInfo@@@Z.c)
 *     ?OnInputReport@MobileButtonDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800DDFF0 (-OnInputReport@MobileButtonDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800DF710 (-OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInputReport@SystemControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800E0260 (-OnInputReport@SystemControlDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInputReport@CallControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800E09C0 (-OnInputReport@CallControlDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x1800D50AC (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 */

__int64 __fastcall RIMDeviceCollection::GetDeviceInfo(RIMDeviceCollection *this, int a2, struct DeviceInfo **a3)
{
  __int64 result; // rax
  struct RIMDevice *v5; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0LL;
  result = RIMDeviceCollection::FindDevice(this, a2, 0LL, &v5, 0LL);
  if ( (int)result >= 0 )
  {
    result = 0LL;
    *a3 = (struct DeviceInfo *)*((_QWORD *)v5 + 4);
  }
  return result;
}
