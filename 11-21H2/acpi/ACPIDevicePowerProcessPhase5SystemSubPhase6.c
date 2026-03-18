/*
 * XREFs of ACPIDevicePowerProcessPhase5SystemSubPhase6 @ 0x1C0051080
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompletePhase3Common @ 0x1C00080D4 (ACPIDeviceCompletePhase3Common.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C000E14C (WPP_RECORDER_SF_qqss.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C001FF34 (ACPIWakeRemoveDevicesAndUpdate.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5SystemSubPhase6(__int64 a1)
{
  _QWORD *v1; // rbx
  const char *v2; // rax
  char v3; // r8
  const char *v5; // rdx
  __int64 v6; // rcx
  POWER_STATE v7; // esi
  struct _DEVICE_OBJECT *v8; // rbx
  KIRQL Irql; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(_QWORD **)(a1 + 40);
  v2 = (const char *)&unk_1C006FB8B;
  v3 = 0;
  Irql = 0;
  v5 = (const char *)&unk_1C006FB8B;
  if ( v1 )
  {
    v6 = v1[1];
    v3 = (char)v1;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v2 = (const char *)v1[76];
      if ( (v6 & 0x400000000000LL) != 0 )
        v5 = (const char *)v1[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x58u,
      (__int64)&WPP_a8f7cd0141bb322231380cc24ac7ac02_Traceguids,
      a1,
      v3,
      v2,
      v5);
  v7.SystemState = *(_SYSTEM_POWER_STATE *)(a1 + 104);
  IoAcquireCancelSpinLock(&Irql);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  AcpiMostRecentSleepState = v7.SystemState;
  ACPIWakeRemoveDevicesAndUpdate(0LL, 0LL);
  v8 = (struct _DEVICE_OBJECT *)v1[96];
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  IoReleaseCancelSpinLock(Irql);
  if ( v8 )
    PoSetPowerState(v8, SystemPowerState, v7);
  *(_DWORD *)(a1 + 256) = 0;
  ACPIDeviceCompletePhase3Common((volatile signed __int32 *)(a1 + 208), 0);
  return 0LL;
}
