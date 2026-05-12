/*
 * XREFs of IsReadWriteRequest @ 0x1C00150E4
 * Callers:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaUnitScsiIrp @ 0x1C0004C30 (RaUnitScsiIrp.c)
 *     RaidStartIoPacket @ 0x1C00050F0 (RaidStartIoPacket.c)
 *     StorpTelemetryCollectErrorData @ 0x1C0014E64 (StorpTelemetryCollectErrorData.c)
 *     StorpTelemetryConstructErrorEntry @ 0x1C0015178 (StorpTelemetryConstructErrorEntry.c)
 *     RaidAdapterMapBuffers @ 0x1C003677C (RaidAdapterMapBuffers.c)
 *     StorUnitStartBypassIo @ 0x1C0063780 (StorUnitStartBypassIo.c)
 * Callees:
 *     IsWriteRequest @ 0x1C0015118 (IsWriteRequest.c)
 *     IsReadRequest @ 0x1C0015148 (IsReadRequest.c)
 */

__int64 IsReadWriteRequest()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  unsigned int v2; // r9d

  if ( (unsigned int)IsReadRequest() )
    return 1LL;
  LOBYTE(v2) = (unsigned int)IsWriteRequest(v1, v0) != 0;
  return v2;
}
