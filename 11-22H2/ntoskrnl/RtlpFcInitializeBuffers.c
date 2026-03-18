/*
 * XREFs of RtlpFcInitializeBuffers @ 0x14036EA0C
 * Callers:
 *     RtlpFcBufferManagerUpdateBuffers @ 0x140810214 (RtlpFcBufferManagerUpdateBuffers.c)
 * Callees:
 *     memset @ 0x140435400 (memset.c)
 */

void *__fastcall RtlpFcInitializeBuffers(void *a1)
{
  return memset(a1, 0, 0x48uLL);
}
