/*
 * XREFs of ?ShouldAttachDevice@HeatProcessor@@UEAA_NPEAUDeviceInfo@@@Z @ 0x1801BC520
 * Callers:
 *     <none>
 * Callees:
 *     ?OnDeviceArrival@HeatProcessor@@IEAAJPEAUDeviceInfo@@@Z @ 0x1801BC120 (-OnDeviceArrival@HeatProcessor@@IEAAJPEAUDeviceInfo@@@Z.c)
 */

bool __fastcall HeatProcessor::ShouldAttachDevice(
        HeatProcessor *this,
        struct DeviceInfo *a2,
        __int64 a3,
        const char *a4)
{
  return *((_DWORD *)a2 + 1) == 2048
      && (int)HeatProcessor::OnDeviceArrival((HeatProcessor *)((char *)this - 8), a2, a3, a4) >= 0;
}
