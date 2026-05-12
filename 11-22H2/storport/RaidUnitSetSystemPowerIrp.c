/*
 * XREFs of RaidUnitSetSystemPowerIrp @ 0x1C0011CB4
 * Callers:
 *     RaidUnitSetPowerIrp @ 0x1C001170C (RaidUnitSetPowerIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaUnitAcquireRemoveLock @ 0x1C0007014 (RaUnitAcquireRemoveLock.c)
 *     RaUnitReleaseRemoveLock @ 0x1C00070DC (RaUnitReleaseRemoveLock.c)
 *     StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged @ 0x1C001272C (StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged.c)
 *     WPP_SF_qqD @ 0x1C003EAF4 (WPP_SF_qqD.c)
 */

__int64 __fastcall RaidUnitSetSystemPowerIrp(__int64 a1, IRP *a2, __int64 a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r9
  __int64 LowPart; // rax
  unsigned int EaLength; // edx
  POWER_STATE v8; // ebx
  bool v9; // cl
  REQUEST_POWER_COMPLETE *v10; // rsi
  void *Context; // r14
  NTSTATUS v12; // eax
  unsigned int v13; // r14d
  signed int v14; // esi

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  LowPart = (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  EaLength = CurrentStackLocation->Parameters.Create.EaLength;
  v8.SystemState = (_SYSTEM_POWER_STATE)DeviceStateTable[LowPart];
  v9 = (_DWORD)LowPart != 1 && *(_DWORD *)(a1 + 488) < (int)LowPart;
  *(_BYTE *)(a1 + 500) = v9;
  *(_DWORD *)(a1 + 488) = LowPart;
  *(_DWORD *)(a1 + 496) = EaLength;
  if ( v9 )
  {
    if ( (_DWORD)LowPart == 5 )
      StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged(a1);
    v10 = RaidUnitSetDevicePowerCompletionRoutine;
    Context = a2;
    a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  }
  else
  {
    v10 = (REQUEST_POWER_COMPLETE *)RaidUnitDeviceStackPowerUpCompletion;
    Context = (void *)a1;
  }
  LOBYTE(a3) = 1;
  RaUnitAcquireRemoveLock(a1, (__int64)a2, a3);
  v12 = PoRequestPowerIrp(*(PDEVICE_OBJECT *)(a1 + 8), 2u, v8, v10, Context, 0LL);
  v13 = 259;
  v14 = v12;
  if ( v12 == 259 )
  {
    if ( v8.SystemState == PowerSystemWorking )
      *(_BYTE *)(a1 + 448) |= 0x80u;
    else
      *(_BYTE *)(a1 + 449) |= 1u;
    v14 = 0;
  }
  if ( !*(_BYTE *)(a1 + 500) || v14 < 0 )
  {
    RaUnitReleaseRemoveLock(a1);
    v13 = RaidCompleteRequestEx(a2, 0, v14);
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 58LL, &WPP_bfabe38cf0023b35987f16eff51d2245_Traceguids, a1, a2, v13);
  }
  return v13;
}
