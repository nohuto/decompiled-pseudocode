/*
 * XREFs of ?Stop@KStopwatch@@QEAA_KXZ @ 0x1C00230B8
 * Callers:
 *     ??1MiniportHaltTelemetry@AzTelemetry@@UEAA@XZ @ 0x1C00142EC (--1MiniportHaltTelemetry@AzTelemetry@@UEAA@XZ.c)
 *     ??1Protocol@BindingMetrics@@QEAA@XZ @ 0x1C0021550 (--1Protocol@BindingMetrics@@QEAA@XZ.c)
 *     ??1Filter@BindingMetrics@@QEAA@XZ @ 0x1C0021570 (--1Filter@BindingMetrics@@QEAA@XZ.c)
 *     ??1UpdateBindings@BindingMetrics@@QEAA@XZ @ 0x1C0021F00 (--1UpdateBindings@BindingMetrics@@QEAA@XZ.c)
 *     ??1MiniportDevicePnPEventNotify@AzTelemetry@@UEAA@XZ @ 0x1C0023CF4 (--1MiniportDevicePnPEventNotify@AzTelemetry@@UEAA@XZ.c)
 *     ??1Miniport@BindingMetrics@@QEAA@XZ @ 0x1C0025400 (--1Miniport@BindingMetrics@@QEAA@XZ.c)
 *     ??1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ @ 0x1C00CF7C4 (--1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ.c)
 *     ??1NdisFreeSharedMemoryTelemetry@@QEAA@XZ @ 0x1C00CF8D4 (--1NdisFreeSharedMemoryTelemetry@@QEAA@XZ.c)
 *     ??1MiniportAddDeviceTelemetry@AzTelemetry@@UEAA@XZ @ 0x1C00D13C0 (--1MiniportAddDeviceTelemetry@AzTelemetry@@UEAA@XZ.c)
 *     ??1MiniportDriverUnload@AzTelemetry@@UEAA@XZ @ 0x1C00D1474 (--1MiniportDriverUnload@AzTelemetry@@UEAA@XZ.c)
 *     ??1MiniportFilterResourceRequirements@AzTelemetry@@UEAA@XZ @ 0x1C00D1564 (--1MiniportFilterResourceRequirements@AzTelemetry@@UEAA@XZ.c)
 *     ??1MiniportRemoveDeviceTelemetry@AzTelemetry@@UEAA@XZ @ 0x1C00D1618 (--1MiniportRemoveDeviceTelemetry@AzTelemetry@@UEAA@XZ.c)
 *     ??1MiniportStartDevice@AzTelemetry@@UEAA@XZ @ 0x1C00D16B4 (--1MiniportStartDevice@AzTelemetry@@UEAA@XZ.c)
 *     ?ndisMInvokeInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_INIT_PARAMETERS@@@Z @ 0x1C0117238 (-ndisMInvokeInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_INIT_PARAMETERS@@@Z.c)
 * Callees:
 *     ?GetElapsedTimeInMilliseconds@KStopwatch@@QEBA_KXZ @ 0x1C00231C4 (-GetElapsedTimeInMilliseconds@KStopwatch@@QEBA_KXZ.c)
 */

unsigned __int64 __fastcall KStopwatch::Stop(LARGE_INTEGER *this)
{
  this[2] = KeQueryPerformanceCounter(0LL);
  return KStopwatch::GetElapsedTimeInMilliseconds((KStopwatch *)this);
}
