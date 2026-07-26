/*
 * XREFs of ?Stop@KStopwatch@@QEAA_KXZ @ 0x1C0024CF0
 * Callers:
 *     ??1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ @ 0x1C00CAB10 (--1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ.c)
 *     ??1NdisFreeSharedMemoryTelemetry@@QEAA@XZ @ 0x1C00CAC20 (--1NdisFreeSharedMemoryTelemetry@@QEAA@XZ.c)
 *     ?ndisMInvokeInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_INIT_PARAMETERS@@@Z @ 0x1C010C02C (-ndisMInvokeInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_INIT_PARAMETERS@@@Z.c)
 * Callees:
 *     ?GetElapsedTimeInMilliseconds@KStopwatch@@QEBA_KXZ @ 0x1C0024D20 (-GetElapsedTimeInMilliseconds@KStopwatch@@QEBA_KXZ.c)
 */

unsigned __int64 __fastcall KStopwatch::Stop(LARGE_INTEGER *this)
{
  this[2] = KeQueryPerformanceCounter(0LL);
  return KStopwatch::GetElapsedTimeInMilliseconds((KStopwatch *)this);
}
