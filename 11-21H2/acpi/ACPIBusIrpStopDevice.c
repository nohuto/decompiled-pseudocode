/*
 * XREFs of ACPIBusIrpStopDevice @ 0x1C00ACBF0
 * Callers:
 *     ACPIEcStopDevice @ 0x1C00534A0 (ACPIEcStopDevice.c)
 * Callees:
 *     ACPIDebugGetIrpText @ 0x1C0001908 (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0001CCC (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C002EF8C (ACPIThermalReleaseCoolingInterfaces.c)
 *     ACPIFanStopDevice @ 0x1C00550FC (ACPIFanStopDevice.c)
 *     EnableDisableRegionSpacesForDevice @ 0x1C005D840 (EnableDisableRegionSpacesForDevice.c)
 *     ACPIThermalStopZone @ 0x1C0061054 (ACPIThermalStopZone.c)
 *     EnableDisableRegions @ 0x1C0094CC0 (EnableDisableRegions.c)
 *     IsNsobjPciBus @ 0x1C0094D74 (IsNsobjPciBus.c)
 *     ACPIInitStopDevice @ 0x1C00AEFEC (ACPIInitStopDevice.c)
 *     EnableDisableIPMIRegions @ 0x1C00AF540 (EnableDisableIPMIRegions.c)
 *     ACPIPepCleanupPlatformNotificationSupport @ 0x1C00B0268 (ACPIPepCleanupPlatformNotificationSupport.c)
 */

__int64 __fastcall ACPIBusIrpStopDevice(ULONG_PTR a1, IRP *a2)
{
  unsigned __int8 MinorFunction; // r14
  __int64 DeviceExtension; // rbx
  int v5; // eax
  __int64 v6; // rdi
  char v7; // bp
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  char *IrpText; // rax
  const char *v13; // r8
  const char *v14; // r10

  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = *(_DWORD *)(DeviceExtension + 368);
  if ( v5 != 1 )
  {
    if ( v5 == 3 && (*(_DWORD *)(DeviceExtension + 668) & 0x300) != 0 )
      EnableDisableRegionSpacesForDevice(DeviceExtension, 0);
    *(_DWORD *)(DeviceExtension + 368) = *(_DWORD *)(DeviceExtension + 372);
  }
  ACPIThermalReleaseCoolingInterfaces(DeviceExtension);
  v6 = *(_QWORD *)(DeviceExtension + 1000) & 0x8000LL;
  v7 = (*(_QWORD *)(DeviceExtension + 1000) & 0x8000) != 0;
  v8 = ACPIInternalGetDeviceExtension(*(_QWORD *)(DeviceExtension + 768));
  if ( IsNsobjPciBus(*(volatile signed __int32 **)(v8 + 760)) || v6 )
    EnableDisableRegions(*(__int64 **)(DeviceExtension + 760), 0, v7);
  v9 = *(_QWORD *)(DeviceExtension + 8);
  if ( (v9 & 0x1000) != 0 )
  {
    EnableDisableIPMIRegions(*(_QWORD *)(DeviceExtension + 760), 0LL);
    v9 = *(_QWORD *)(DeviceExtension + 8);
  }
  if ( (v9 & 0x8000000) != 0 )
  {
    ACPIThermalStopZone(DeviceExtension);
  }
  else
  {
    v10 = *(_QWORD *)(DeviceExtension + 1000);
    if ( (v10 & 0x200000000LL) != 0 )
    {
      ACPIFanStopDevice(DeviceExtension);
    }
    else if ( (v10 & 0x10000000000LL) != 0 )
    {
      ACPIPepCleanupPlatformNotificationSupport(DeviceExtension);
    }
  }
  *(_DWORD *)(DeviceExtension + 368) = 0;
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  ACPIInitStopDevice(DeviceExtension, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v11, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x3Fu,
      (__int64)&WPP_e0390298aa1f3c0f48cd552b2cad3fe8_Traceguids,
      (char)a2,
      IrpText,
      0,
      DeviceExtension,
      v13,
      v14);
  }
  return 0LL;
}
