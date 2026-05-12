/*
 * XREFs of RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0013FD0
 * Callers:
 *     <none>
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C00070DC (RaUnitReleaseRemoveLock.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C00089A8 (RaidAdapterPoFxIdleComponent.c)
 *     WPP_SF_qq @ 0x1C003EAA4 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C003EAF4 (WPP_SF_qqD.c)
 */

void __fastcall RaidUnitSetDevicePowerCompletionRoutine(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        IRP *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  void *DeviceExtension; // rbx
  int v7; // esi

  DeviceExtension = DeviceObject->DeviceExtension;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(
      WPP_GLOBAL_Control->AttachedDevice,
      56LL,
      &WPP_bfabe38cf0023b35987f16eff51d2245_Traceguids,
      DeviceExtension,
      Context);
  }
  if ( *(_QWORD *)(*((_QWORD *)DeviceExtension + 3) + 4896LL)
    && _InterlockedCompareExchange((volatile signed __int32 *)DeviceExtension + 878, 0, 1) == 1 )
  {
    RaidAdapterPoFxIdleComponent(*((_QWORD *)DeviceExtension + 3), 0LL, 0LL);
  }
  *((_BYTE *)DeviceExtension + 449) &= ~1u;
  v7 = RaidCompleteRequestEx(Context, 0, IoStatus->Status);
  RaUnitReleaseRemoveLock((__int64)DeviceExtension);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      57LL,
      &WPP_bfabe38cf0023b35987f16eff51d2245_Traceguids,
      DeviceExtension,
      Context,
      v7);
  }
}
