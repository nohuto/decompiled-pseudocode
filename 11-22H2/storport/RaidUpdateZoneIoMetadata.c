/*
 * XREFs of RaidUpdateZoneIoMetadata @ 0x1C0043214
 * Callers:
 *     RaidpAdapterContinueScatterGather @ 0x1C0008CD0 (RaidpAdapterContinueScatterGather.c)
 *     RaUnitStartIo @ 0x1C0008F30 (RaUnitStartIo.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x1C0009EC0 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidpAdapterContinueDataBufferScatterGather @ 0x1C003D760 (RaidpAdapterContinueDataBufferScatterGather.c)
 * Callees:
 *     IsZonedWriteRequest @ 0x1C000F7D0 (IsZonedWriteRequest.c)
 *     RaidUpdateZoneIoSubmission @ 0x1C0040C6C (RaidUpdateZoneIoSubmission.c)
 */

void __fastcall RaidUpdateZoneIoMetadata(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 && (*(_BYTE *)(a1 + 128) & 2) != 0 )
  {
    v6 = 0;
    if ( IsZonedWriteRequest(a1, a2, a3, &v6) )
    {
      RtlInterlockedClearBitRun(a1 + 3360, v6, 1LL);
      RaidUpdateZoneIoSubmission(a1 + 656, a2, a3);
    }
  }
}
