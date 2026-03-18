/*
 * XREFs of ACPIDeviceCompleteGenericPhase @ 0x1C000EB80
 * Callers:
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C0008730 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C00088C0 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase1 @ 0x1C000C340 (ACPIDevicePowerProcessPhase5DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase2 @ 0x1C00263D0 (ACPIDevicePowerProcessPhase1DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C0026570 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C00266A0 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase1 @ 0x1C0027D40 (ACPIDevicePowerProcessPhase0DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase4 @ 0x1C00286C0 (ACPIDevicePowerProcessPhase5DeviceSubPhase4.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase2 @ 0x1C0028810 (ACPIDevicePowerProcessPhase0DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase5 @ 0x1C00288F0 (ACPIDevicePowerProcessPhase5DeviceSubPhase5.c)
 *     ACPIDeviceCompleteInterpreterRequest @ 0x1C004F4B0 (ACPIDeviceCompleteInterpreterRequest.c)
 *     ACPIDevicePowerProcessPhase0SystemSubPhase1 @ 0x1C00502A0 (ACPIDevicePowerProcessPhase0SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C0050360 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase2 @ 0x1C0050680 (ACPIDevicePowerProcessPhase2SystemSubPhase2.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase3 @ 0x1C0050720 (ACPIDevicePowerProcessPhase2SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase4 @ 0x1C0050840 (ACPIDevicePowerProcessPhase2SystemSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase1 @ 0x1C0050A60 (ACPIDevicePowerProcessPhase5SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase2 @ 0x1C0050B60 (ACPIDevicePowerProcessPhase5SystemSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C0050C20 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C0050DC0 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase5 @ 0x1C0050F80 (ACPIDevicePowerProcessPhase5SystemSubPhase5.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x1C00511D0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C0051370 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     ACPIWakeRestoreEnablesCompletion @ 0x1C00637A0 (ACPIWakeRestoreEnablesCompletion.c)
 * Callees:
 *     ACPIDeviceCompletePhase3Common @ 0x1C00080D4 (ACPIDeviceCompletePhase3Common.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0010020 (WPP_RECORDER_SF_Lqss.c)
 */

void __fastcall ACPIDeviceCompleteGenericPhase(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rax
  void *v5; // rcx
  __int64 v6; // r10
  int v8; // edi
  void *v9; // r8
  KIRQL v10; // bl
  int v11; // edx

  v4 = *(_QWORD **)(a4 + 40);
  v5 = &unk_1C006FB8B;
  LOBYTE(v6) = 0;
  v8 = a2;
  v9 = &unk_1C006FB8B;
  if ( v4 )
  {
    a2 = v4[1];
    v6 = *(_QWORD *)(a4 + 40);
    if ( (a2 & 0x200000000000LL) != 0 )
    {
      v5 = (void *)v4[76];
      if ( (a2 & 0x400000000000LL) != 0 )
        v9 = (void *)v4[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      14,
      (__int64)&WPP_a8f7cd0141bb322231380cc24ac7ac02_Traceguids,
      v8,
      v6,
      (__int64)v5,
      (__int64)v9);
  }
  *(_DWORD *)(a4 + 56) &= 0xEEFFFFFF;
  if ( v8 < 0 )
  {
    *(_DWORD *)(a4 + 256) = v8;
    ACPIDeviceCompletePhase3Common((volatile signed __int32 *)(a4 + 208), 2);
  }
  else
  {
    _InterlockedCompareExchange((volatile signed __int32 *)(a4 + 208), *(_DWORD *)(a4 + 212), 1);
    v10 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
    v11 = AcpiPowerDpcFlags | 2;
    AcpiPowerDpcFlags = v11;
    if ( (v11 & 1) == 0 )
    {
      AcpiPowerDpcFlags = v11 | 1;
      KeInsertQueueDpc(&AcpiPowerDpc, 0LL, 0LL);
    }
    KeReleaseSpinLock(&AcpiPowerQueueLock, v10);
  }
}
