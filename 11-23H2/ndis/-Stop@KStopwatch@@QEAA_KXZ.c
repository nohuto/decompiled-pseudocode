/*
 * XREFs of ?Stop@KStopwatch@@QEAA_KXZ @ 0x1C0023248
 * Callers:
 *     ??1MiniportHaltTelemetry@AzTelemetry@@UEAA@XZ @ 0x1C001447C (--1MiniportHaltTelemetry@AzTelemetry@@UEAA@XZ.c)
 *     ??1Protocol@BindingMetrics@@QEAA@XZ @ 0x1C00216E0 (--1Protocol@BindingMetrics@@QEAA@XZ.c)
 *     ??1Filter@BindingMetrics@@QEAA@XZ @ 0x1C0021700 (--1Filter@BindingMetrics@@QEAA@XZ.c)
 *     ??1UpdateBindings@BindingMetrics@@QEAA@XZ @ 0x1C0022090 (--1UpdateBindings@BindingMetrics@@QEAA@XZ.c)
 *     ??1MiniportDevicePnPEventNotify@AzTelemetry@@UEAA@XZ @ 0x1C0023E84 (--1MiniportDevicePnPEventNotify@AzTelemetry@@UEAA@XZ.c)
 *     ??1Miniport@BindingMetrics@@QEAA@XZ @ 0x1C0025590 (--1Miniport@BindingMetrics@@QEAA@XZ.c)
 *     ??1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ @ 0x1C00CF7E4 (--1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ.c)
 *     ??1NdisFreeSharedMemoryTelemetry@@QEAA@XZ @ 0x1C00CF8F4 (--1NdisFreeSharedMemoryTelemetry@@QEAA@XZ.c)
 *     ??1MiniportAddDeviceTelemetry@AzTelemetry@@UEAA@XZ @ 0x1C00D13E0 (--1MiniportAddDeviceTelemetry@AzTelemetry@@UEAA@XZ.c)
 *     ??1MiniportDriverUnload@AzTelemetry@@UEAA@XZ @ 0x1C00D1494 (--1MiniportDriverUnload@AzTelemetry@@UEAA@XZ.c)
 *     ??1MiniportFilterResourceRequirements@AzTelemetry@@UEAA@XZ @ 0x1C00D1584 (--1MiniportFilterResourceRequirements@AzTelemetry@@UEAA@XZ.c)
 *     ??1MiniportRemoveDeviceTelemetry@AzTelemetry@@UEAA@XZ @ 0x1C00D1638 (--1MiniportRemoveDeviceTelemetry@AzTelemetry@@UEAA@XZ.c)
 *     ??1MiniportStartDevice@AzTelemetry@@UEAA@XZ @ 0x1C00D16D4 (--1MiniportStartDevice@AzTelemetry@@UEAA@XZ.c)
 *     ?ndisMInvokeInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_INIT_PARAMETERS@@@Z @ 0x1C01171F8 (-ndisMInvokeInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_INIT_PARAMETERS@@@Z.c)
 * Callees:
 *     ?GetElapsedTimeInMilliseconds@KStopwatch@@QEBA_KXZ @ 0x1C0023354 (-GetElapsedTimeInMilliseconds@KStopwatch@@QEBA_KXZ.c)
 */

unsigned __int64 __fastcall KStopwatch::Stop(LARGE_INTEGER *this)
{
  this[2] = KeQueryPerformanceCounter(0LL);
  return KStopwatch::GetElapsedTimeInMilliseconds((KStopwatch *)this);
}
