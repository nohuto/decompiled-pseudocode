/*
 * XREFs of RaidUpdateZoneIoMetadata @ 0x1C0018A88
 * Callers:
 *     RaidpAdapterContinueScatterGather @ 0x1C0004120 (RaidpAdapterContinueScatterGather.c)
 *     RaUnitStartIo @ 0x1C0004190 (RaUnitStartIo.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x1C00050F0 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidpAdapterContinueDataBufferScatterGather @ 0x1C003BA30 (RaidpAdapterContinueDataBufferScatterGather.c)
 * Callees:
 *     IsZonedWriteRequest @ 0x1C00159A0 (IsZonedWriteRequest.c)
 *     RaidUpdateZoneIoSubmission @ 0x1C003E538 (RaidUpdateZoneIoSubmission.c)
 */

void __fastcall RaidUpdateZoneIoMetadata(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 && (*(_BYTE *)(a1 + 128) & 2) != 0 )
  {
    v6 = 0;
    if ( IsZonedWriteRequest(a1, a2, a3, &v6) )
    {
      RtlInterlockedClearBitRun(a1 + 3312, v6, 1LL);
      RaidUpdateZoneIoSubmission(a1 + 656, a2, a3);
    }
  }
}
