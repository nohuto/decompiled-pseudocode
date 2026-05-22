/*
 * XREFs of ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x1800D50AC
 * Callers:
 *     ?GetDeviceProductInfo@AugmentedInputDeviceCollection@@IEAAJKPEAG00@Z @ 0x1800D415C (-GetDeviceProductInfo@AugmentedInputDeviceCollection@@IEAAJKPEAG00@Z.c)
 *     ?OnInputReport@AugmentedInputDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800D4560 (-OnInputReport@AugmentedInputDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800D5100 (-GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?InsertDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z @ 0x1800D5388 (-InsertDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z.c)
 *     ?OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKKGG0@Z @ 0x1800D5440 (-OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKKGG0@Z.c)
 *     ?OnReadEvent@RIMDeviceCollection@@AEAAJXZ @ 0x1800D5798 (-OnReadEvent@RIMDeviceCollection@@AEAAJXZ.c)
 *     ?RemoveDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z @ 0x1800D59B0 (-RemoveDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z.c)
 *     ?DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x1800D8638 (-DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DDC80 (-OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnInputReport@MobileButtonDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800DDFF0 (-OnInputReport@MobileButtonDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInvalidateInput@MobileButtonDeviceCollection@@UEAAJPEAX@Z @ 0x1800DE400 (-OnInvalidateInput@MobileButtonDeviceCollection@@UEAAJPEAX@Z.c)
 *     ?OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DF420 (-OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800DF710 (-OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnDeviceAttach@SystemControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DFF80 (-OnDeviceAttach@SystemControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnInputReport@SystemControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800E0260 (-OnInputReport@SystemControlDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnDeviceAttach@CallControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800E0770 (-OnDeviceAttach@CallControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnInputReport@CallControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800E09C0 (-OnInputReport@CallControlDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800E0F00 (-OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?SendHeatDeviceCommand@HeatDeviceCollection@@QEAAJKPEAX@Z @ 0x1800E1170 (-SendHeatDeviceCommand@HeatDeviceCollection@@QEAAJKPEAX@Z.c)
 *     ?OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800E15F0 (-OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnInputReport@GazeDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800E17D0 (-OnInputReport@GazeDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?SetTrackingEnabled@GazeDeviceCollection@@QEAAJKH@Z @ 0x1800E1950 (-SetTrackingEnabled@GazeDeviceCollection@@QEAAJKH@Z.c)
 *     ?OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800E2340 (-OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnInputReport@DockDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800E2570 (-OnInputReport@DockDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnDeviceAttach@DockableDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800E3770 (-OnDeviceAttach@DockableDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@DockableDeviceCollection@@MEAAJK@Z @ 0x1800E38A0 (-OnDeviceRemoval@DockableDeviceCollection@@MEAAJK@Z.c)
 *     ?ProcessFeatureReport@DockableDeviceCollection@@AEAAJAEBUGetFeatureReportResult@1@@Z @ 0x1800E3E04 (-ProcessFeatureReport@DockableDeviceCollection@@AEAAJAEBUGetFeatureReportResult@1@@Z.c)
 *     ?OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800E4A30 (-OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z @ 0x1800E4BC0 (-OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z.c)
 *     ?OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800E4CC0 (-OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800E52F0 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x1800E5670 (-OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMDeviceCollection::FindDevice(
        RIMDeviceCollection *this,
        int a2,
        void *a3,
        struct RIMDevice **a4,
        unsigned int *a5)
{
  __int64 result; // rax
  __int64 *v6; // r11
  unsigned int v7; // r10d
  __int64 v8; // rcx

  result = 0LL;
  v6 = (__int64 *)((char *)this + 624);
  v7 = 0;
  while ( 1 )
  {
    v8 = *v6;
    if ( *v6 )
    {
      if ( *(void **)(v8 + 16) == a3 || *(_DWORD *)(v8 + 40) == a2 )
        break;
    }
    ++v7;
    ++v6;
    if ( v7 >= 0x100 )
      return 2147943568LL;
  }
  if ( a4 )
    *a4 = (struct RIMDevice *)v8;
  if ( a5 )
    *a5 = v7;
  return result;
}
