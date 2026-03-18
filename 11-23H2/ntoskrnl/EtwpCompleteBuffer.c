/*
 * XREFs of EtwpCompleteBuffer @ 0x1407FD9A8
 * Callers:
 *     EtwpCompressPendingBuffers @ 0x1406024E4 (EtwpCompressPendingBuffers.c)
 * Callees:
 *     EtwpEnqueueAvailableBuffer @ 0x140227FA8 (EtwpEnqueueAvailableBuffer.c)
 */

__int64 __fastcall EtwpCompleteBuffer(__int64 a1, __int64 a2)
{
  *(_WORD *)(a2 + 52) = 0;
  return EtwpEnqueueAvailableBuffer(a1, (unsigned int *)a2, 0);
}
