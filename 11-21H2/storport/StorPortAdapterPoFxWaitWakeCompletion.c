/*
 * XREFs of StorPortAdapterPoFxWaitWakeCompletion @ 0x1C004ACB0
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterPoFxActivateComponent @ 0x1C0002B10 (RaidAdapterPoFxActivateComponent.c)
 *     WPP_SF_d @ 0x1C003C4B8 (WPP_SF_d.c)
 */

void __fastcall StorPortAdapterPoFxWaitWakeCompletion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _QWORD *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  int Status; // ebx
  __int64 v6; // rcx

  Status = IoStatus->Status;
  *(_QWORD *)(Context[604] + 72LL) = 0LL;
  v6 = Context[604];
  if ( v6
    && (*((_DWORD *)Context + 77) != 1 || (*((_BYTE *)Context + 107) & 4) != 0)
    && !_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 24), 1, 0) )
  {
    RaidAdapterPoFxActivateComponent((__int64)Context);
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x43u,
      (__int64)&WPP_da8695fb3edb33e33ecd2adca73d6fb8_Traceguids,
      Status);
  }
}
