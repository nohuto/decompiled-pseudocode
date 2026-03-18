/*
 * XREFs of RtlpFcLeaveRegion @ 0x1407D1610
 * Callers:
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x14035CBB8 (RtlpFcBufferManagerDereferenceBuffers.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 */

void RtlpFcLeaveRegion()
{
  KeLeaveCriticalRegion();
}
