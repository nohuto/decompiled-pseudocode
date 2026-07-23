/*
 * XREFs of MmGetAvailablePagesForPartitionObject @ 0x14036E800
 * Callers:
 *     CcPartitionTelemetryCallback @ 0x140880950 (CcPartitionTelemetryCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetAvailablePagesForPartitionObject(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)a1 + 17216LL);
}
