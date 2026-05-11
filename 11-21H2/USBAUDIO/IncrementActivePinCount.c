/*
 * XREFs of IncrementActivePinCount @ 0x1C002A354
 * Callers:
 *     PinSetDeviceState @ 0x1C002BAE0 (PinSetDeviceState.c)
 * Callees:
 *     DeviceRequestPowerUp @ 0x1C002806C (DeviceRequestPowerUp.c)
 */

__int64 __fastcall IncrementActivePinCount(PKSPIN Pin)
{
  _QWORD *Context; // rax
  __int64 v3; // rsi
  __int64 v4; // rdi
  NTSTATUS v5; // edx
  PKSFILTER ParentFilter; // rbx
  void *v7; // rcx

  Context = Pin->Context;
  v3 = Context[2];
  v4 = *(_QWORD *)(v3 + 16);
  if ( *(_DWORD *)(v4 + 536) != 1 )
  {
    v5 = DeviceRequestPowerUp(Context[2]);
    if ( v5 < 0 )
      return (unsigned int)v5;
    ParentFilter = KsPinGetParentFilter(Pin);
    KsReleaseControl(ParentFilter);
    KeWaitForSingleObject((PVOID)(v4 + 552), Executive, 0, 0, 0LL);
    KsAcquireControl(ParentFilter);
  }
  v5 = 0;
  if ( _InterlockedIncrement((volatile signed __int32 *)(v4 + 708)) == 1 )
  {
    v7 = *(void **)(v4 + 520);
    if ( v7 )
      PoSetPowerRequest(v7, PowerRequestSystemRequired);
    *(_QWORD *)(v4 + 528) = PoRegisterDeviceForIdleDetection(
                              *(PDEVICE_OBJECT *)(v3 + 32),
                              0,
                              0,
                              (DEVICE_POWER_STATE)*(_DWORD *)(v4 + 540));
    return 0;
  }
  return (unsigned int)v5;
}
