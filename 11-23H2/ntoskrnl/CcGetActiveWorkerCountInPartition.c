/*
 * XREFs of CcGetActiveWorkerCountInPartition @ 0x1403D41A4
 * Callers:
 *     CcPartitionTelemetryCallback @ 0x140880950 (CcPartitionTelemetryCallback.c)
 *     CcPrivateVolumeCacheMapTelemetryCallback @ 0x140881320 (CcPrivateVolumeCacheMapTelemetryCallback.c)
 * Callees:
 *     CcForEachNumaNode @ 0x1403C3D9C (CcForEachNumaNode.c)
 */

char __fastcall CcGetActiveWorkerCountInPartition(__int64 a1, __int64 a2, _QWORD *a3)
{
  *a3 = 0LL;
  CcForEachNumaNode(
    (__int64 (__fastcall *)(__int64, __int64, _QWORD *, __int64))CcGetActiveWorkerCountPerNode,
    a1,
    a2,
    (__int64)a3);
  return 1;
}
