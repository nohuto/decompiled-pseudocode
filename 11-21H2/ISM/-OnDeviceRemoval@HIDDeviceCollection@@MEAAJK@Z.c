/*
 * XREFs of ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x1800CC060
 * Callers:
 *     ?OnDeviceRemoval@SpatialRimDeviceCollection@@MEAAJK@Z @ 0x1800C1510 (-OnDeviceRemoval@SpatialRimDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@MobileButtonDeviceCollection@@MEAAJK@Z @ 0x1800C4C80 (-OnDeviceRemoval@MobileButtonDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@ConsumerControlDeviceCollection@@MEAAJK@Z @ 0x1800C6280 (-OnDeviceRemoval@ConsumerControlDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@SystemControlDeviceCollection@@MEAAJK@Z @ 0x1800C6DD0 (-OnDeviceRemoval@SystemControlDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@HeatDeviceCollection@@MEAAJK@Z @ 0x1800C76B0 (-OnDeviceRemoval@HeatDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@GazeDeviceCollection@@MEAAJK@Z @ 0x1800C7DF0 (-OnDeviceRemoval@GazeDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@DockDeviceCollection@@MEAAJK@Z @ 0x1800C8B50 (-OnDeviceRemoval@DockDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@DockableDeviceCollection@@MEAAJK@Z @ 0x1800CA220 (-OnDeviceRemoval@DockableDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z @ 0x1800CB4F0 (-OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z.c)
 * Callees:
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x1800BBFE0 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?LogRawInputDeviceRemoved@RawInputProvidersTelemetry@@SAXIGGG@Z @ 0x1800CBC18 (-LogRawInputDeviceRemoved@RawInputProvidersTelemetry@@SAXIGGG@Z.c)
 */

__int64 __fastcall HIDDeviceCollection::OnDeviceRemoval(HIDDeviceCollection *this, int a2)
{
  struct RIMDevice *v3; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0LL;
  if ( (int)RIMDeviceCollection::FindDevice(this, a2, 0LL, &v3, 0LL) >= 0 )
    RawInputProvidersTelemetry::LogRawInputDeviceRemoved(
      *(unsigned int *)(*((_QWORD *)v3 + 4) + 4LL),
      *(_WORD *)(*((_QWORD *)v3 + 4) + 32LL),
      *(_WORD *)(*((_QWORD *)v3 + 4) + 34LL),
      *(_WORD *)(*((_QWORD *)v3 + 4) + 36LL));
  return 0LL;
}
