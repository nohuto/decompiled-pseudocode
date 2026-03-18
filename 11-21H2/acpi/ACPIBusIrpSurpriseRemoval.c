/*
 * XREFs of ACPIBusIrpSurpriseRemoval @ 0x1C004C940
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0001CCC (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIWakeDisconnectWakeInterrupts @ 0x1C002FABC (ACPIWakeDisconnectWakeInterrupts.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C004B044 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIFanStopDevice @ 0x1C00550FC (ACPIFanStopDevice.c)
 *     ACPIInternalIsReportedMissing @ 0x1C00575F8 (ACPIInternalIsReportedMissing.c)
 *     ACPIThermalStopZone @ 0x1C0061054 (ACPIThermalStopZone.c)
 *     IsPciBus @ 0x1C0091898 (IsPciBus.c)
 *     EnableDisableRegions @ 0x1C0094CC0 (EnableDisableRegions.c)
 *     ACPIInitStopDevice @ 0x1C00AEFEC (ACPIInitStopDevice.c)
 *     EnableDisableIPMIRegions @ 0x1C00AF540 (EnableDisableIPMIRegions.c)
 *     ACPIPepCleanupPlatformNotificationSupport @ 0x1C00B0268 (ACPIPepCleanupPlatformNotificationSupport.c)
 */

__int64 __fastcall ACPIBusIrpSurpriseRemoval(ULONG_PTR a1, IRP *a2)
{
  unsigned int MinorFunction; // r14d
  __int64 DeviceExtension; // rax
  ULONG_PTR v5; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rcx
  struct _DEVICE_OBJECT *v11; // rcx
  int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rax
  const char *v19; // rcx
  const char *v20; // rdx
  __int64 v21; // rax

  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = DeviceExtension;
  if ( *(_DWORD *)(DeviceExtension + 368) == 4 )
  {
    a2->IoStatus.Status = -1073741810;
    IofCompleteRequest(a2, 0);
    return 3221225486LL;
  }
  else
  {
    if ( (unsigned __int8)ACPIInternalIsReportedMissing(DeviceExtension) )
    {
      v9 = *(_QWORD *)(v5 + 1000);
      if ( (v9 & 0x20000000) != 0 )
      {
        v10 = *(_QWORD *)(v5 + 792);
        if ( v10 )
        {
          v11 = *(struct _DEVICE_OBJECT **)(v10 + 784);
          if ( v11 )
          {
            IoInvalidateDeviceRelations(v11, BusRelations);
            v9 = *(_QWORD *)(v5 + 1000);
          }
        }
      }
      v12 = v9 & 0x8000;
      if ( (unsigned __int8)IsPciBus(*(_QWORD *)(v5 + 768)) || v12 )
      {
        LOBYTE(v14) = v12 != 0;
        EnableDisableRegions(*(_QWORD *)(v5 + 760), 0LL, v14);
      }
      v15 = *(_QWORD *)(v5 + 8);
      if ( (v15 & 0x1000) != 0 )
      {
        EnableDisableIPMIRegions(*(_QWORD *)(v5 + 760), 0LL);
        v15 = *(_QWORD *)(v5 + 8);
      }
      if ( (v15 & 0x8000000) != 0 )
      {
        ACPIThermalStopZone(v5);
      }
      else
      {
        v16 = *(_QWORD *)(v5 + 1000);
        if ( (v16 & 0x200000000LL) != 0 )
        {
          ACPIFanStopDevice(v5);
        }
        else if ( (v16 & 0x10000000000LL) != 0 )
        {
          ACPIPepCleanupPlatformNotificationSupport(v5);
        }
      }
      v17 = *(_DWORD *)(v5 + 1000);
      *(_DWORD *)(v5 + 368) = 5;
      if ( (*(_QWORD *)&v17 & 0x800000LL) != 0 )
        _InterlockedAnd64((volatile signed __int64 *)(v5 + 8), 0xFFFFFFFFFFFFF7FFuLL);
      else
        _InterlockedOr64((volatile signed __int64 *)(v5 + 8), 0x800uLL);
      LOBYTE(v13) = 1;
      ACPIInitStopDevice(v5, v13);
      ACPIWakeDisconnectWakeInterrupts(v5);
      ACPIBuildSurpriseRemovedExtension(v5);
      a2->IoStatus.Status = 0;
      a2->IoStatus.Information = 0LL;
      IofCompleteRequest(a2, 0);
      v18 = *(_QWORD *)(v5 + 8);
      v19 = (const char *)&unk_1C006FB8B;
      v20 = (const char *)&unk_1C006FB8B;
      if ( (v18 & 0x200000000000LL) != 0 )
      {
        v19 = *(const char **)(v5 + 608);
        if ( (v18 & 0x400000000000LL) != 0 )
          v20 = *(const char **)(v5 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v21 = MinorFunction;
        if ( MinorFunction >= 0x1A )
          v21 = 26LL;
        WPP_RECORDER_SF_qsLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0xCu,
          0x40u,
          (__int64)&WPP_e0390298aa1f3c0f48cd552b2cad3fe8_Traceguids,
          (char)a2,
          ACPIDispatchPnpTableNames[v21],
          0,
          v5,
          v19,
          v20);
      }
    }
    else
    {
      if ( (*(_DWORD *)(v5 + 8) & 0x8000000) != 0 )
      {
        ACPIThermalStopZone(v5);
      }
      else
      {
        v7 = *(_QWORD *)(v5 + 1000);
        if ( (v7 & 0x200000000LL) != 0 )
        {
          ACPIFanStopDevice(v5);
        }
        else if ( (v7 & 0x10000000000LL) != 0 )
        {
          ACPIPepCleanupPlatformNotificationSupport(v5);
        }
      }
      *(_DWORD *)(v5 + 368) = 0;
      a2->IoStatus.Status = 0;
      IofCompleteRequest(a2, 0);
      LOBYTE(v8) = 1;
      ACPIInitStopDevice(v5, v8);
    }
    return 0LL;
  }
}
