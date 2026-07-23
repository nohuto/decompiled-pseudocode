/*
 * XREFs of RtlpFcInitializeBuffers @ 0x14036F1FC
 * Callers:
 *     RtlpFcBufferManagerUpdateBuffers @ 0x14080DF64 (RtlpFcBufferManagerUpdateBuffers.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall RtlpFcInitializeBuffers(void *a1)
{
  return memset(a1, 0, 0x48uLL);
}
