/*
 * XREFs of MmGetAvailablePagesForPartitionObject @ 0x1402581BC
 * Callers:
 *     CcPartitionTelemetryCallback @ 0x1406E14E0 (CcPartitionTelemetryCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetAvailablePagesForPartitionObject(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)a1 + 16896LL);
}
