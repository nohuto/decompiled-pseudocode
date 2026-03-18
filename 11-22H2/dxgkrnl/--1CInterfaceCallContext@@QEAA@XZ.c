/*
 * XREFs of ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C005E510
 * Callers:
 *     ?DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x1C005F2B8 (-DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 *     ?DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z @ 0x1C0065630 (-DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z.c)
 *     ?DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x1C00656D0 (-DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z.c)
 *     ?DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z @ 0x1C0065780 (-DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z.c)
 *     ?DpiDdiQueryPhysicalFunctionLuid@@YAJPEAXPEAU_LUID@@@Z @ 0x1C0065820 (-DpiDdiQueryPhysicalFunctionLuid@@YAJPEAXPEAU_LUID@@@Z.c)
 *     ?DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z @ 0x1C00658B0 (-DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z.c)
 *     ?DpiDdiReadVirtualFunctionConfig@@YAJPEAX0GKK@Z @ 0x1C0065950 (-DpiDdiReadVirtualFunctionConfig@@YAJPEAX0GKK@Z.c)
 *     ?DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x1C0065A10 (-DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z.c)
 *     ?DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z @ 0x1C0065B10 (-DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z.c)
 *     ?DpiDdiWriteVirtualFunctionConfig@@YAJPEAXPEBXGKK@Z @ 0x1C0065BC0 (-DpiDdiWriteVirtualFunctionConfig@@YAJPEAXPEBXGKK@Z.c)
 *     ?DpiDdiWriteVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x1C0065C80 (-DpiDdiWriteVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z.c)
 *     ?DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z @ 0x1C0065D60 (-DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z.c)
 *     ?DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z @ 0x1C0065DF0 (-DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z.c)
 *     DpiFdoDispatchIoctl @ 0x1C01E4AC0 (DpiFdoDispatchIoctl.c)
 *     DpiMitigatedRangeUpdate @ 0x1C0399454 (DpiMitigatedRangeUpdate.c)
 *     DpiFlexIovMitigationUpdate @ 0x1C039DE00 (DpiFlexIovMitigationUpdate.c)
 *     DpiSriovAttach @ 0x1C039E23C (DpiSriovAttach.c)
 *     DpiSriovDetach @ 0x1C039E3D0 (DpiSriovDetach.c)
 *     DpiSriovNotification @ 0x1C039E698 (DpiSriovNotification.c)
 *     DpiIovGetBackingResource @ 0x1C03A34E0 (DpiIovGetBackingResource.c)
 *     DpiIovGetMmioRangeCount @ 0x1C03A3650 (DpiIovGetMmioRangeCount.c)
 *     DpiIovGetMmioRanges @ 0x1C03A3770 (DpiIovGetMmioRanges.c)
 *     DpiIovGetVirtualizationFlags @ 0x1C03A3870 (DpiIovGetVirtualizationFlags.c)
 * Callees:
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0198444 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiEnableD3Requests @ 0x1C01987EC (DpiEnableD3Requests.c)
 *     DxgkReleaseAdapterStopResetSync @ 0x1C02C32C8 (DxgkReleaseAdapterStopResetSync.c)
 */

void __fastcall CInterfaceCallContext::~CInterfaceCallContext(CInterfaceCallContext *this)
{
  PVOID *v2; // rbx

  if ( *((_BYTE *)this + 20) )
  {
    v2 = (PVOID *)((char *)this + 8);
    if ( *((_BYTE *)this + 21) )
    {
      *((_BYTE *)*v2 + 5468) = 0;
      ExReleasePushLockExclusiveEx((char *)*v2 + 5424, 0LL);
      DpiReleaseCoreSyncAccessSafe(*(_QWORD *)this, 0LL);
    }
    if ( *((_BYTE *)this + 22) )
    {
      *((_BYTE *)*v2 + 5468) = 0;
      DxgkReleaseAdapterStopResetSync(*((_QWORD *)*v2 + 489), 0LL);
    }
    if ( *((_BYTE *)this + 23) )
    {
      if ( *((_BYTE *)*v2 + 484) )
        DpiEnableD3Requests(*((_QWORD *)*v2 + 3));
      ExReleaseResourceLite(*((PERESOURCE *)*v2 + 21));
      KeLeaveCriticalRegion();
    }
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)*v2 + 2, *v2, 0x20u);
  }
}
