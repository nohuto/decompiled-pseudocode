/*
 * XREFs of RtlpFcLeaveRegion @ 0x1407D1360
 * Callers:
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x14035D3A8 (RtlpFcBufferManagerDereferenceBuffers.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 */

void RtlpFcLeaveRegion()
{
  KeLeaveCriticalRegion();
}
