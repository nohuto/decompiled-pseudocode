/*
 * XREFs of RaidAdapterPowerUpDevice @ 0x1C0011EBC
 * Callers:
 *     RaidAdapterSetDevicePowerIrp @ 0x1C0011970 (RaidAdapterSetDevicePowerIrp.c)
 * Callees:
 *     RaidAcquireAdapterRemoveLock @ 0x1C0007534 (RaidAcquireAdapterRemoveLock.c)
 *     WPP_SF_qq @ 0x1C003EAA4 (WPP_SF_qq.c)
 */

__int64 __fastcall RaidAdapterPowerUpDevice(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v5; // rax

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 27LL, &WPP_bfabe38cf0023b35987f16eff51d2245_Traceguids, a1, a2);
  }
  RaidAcquireAdapterRemoveLock(a1);
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v5 = a2->Tail.Overlay.CurrentStackLocation;
  v5[-1].Context = 0LL;
  v5[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))RaidAdapterPowerUpDeviceCompletion;
  v5[-1].Control = -32;
  PoCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), a2);
  return 259LL;
}
