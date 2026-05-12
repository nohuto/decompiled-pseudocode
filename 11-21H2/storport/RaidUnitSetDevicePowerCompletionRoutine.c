/*
 * XREFs of RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0018800
 * Callers:
 *     <none>
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C000B52C (RaUnitReleaseRemoveLock.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C00136DC (RaidAdapterPoFxIdleComponent.c)
 *     WPP_SF_qq @ 0x1C003C710 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C003C760 (WPP_SF_qqD.c)
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
      &WPP_da8695fb3edb33e33ecd2adca73d6fb8_Traceguids,
      DeviceExtension,
      Context);
  }
  if ( *(_QWORD *)(*((_QWORD *)DeviceExtension + 3) + 4832LL)
    && _InterlockedCompareExchange((volatile signed __int32 *)DeviceExtension + 858, 0, 1) == 1 )
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
      &WPP_da8695fb3edb33e33ecd2adca73d6fb8_Traceguids,
      DeviceExtension,
      Context,
      v7);
  }
}
