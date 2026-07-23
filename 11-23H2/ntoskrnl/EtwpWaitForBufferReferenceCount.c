/*
 * XREFs of EtwpWaitForBufferReferenceCount @ 0x1406BD94C
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x1406BDE48 (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x1408A7C78 (EtwpBufferingModeFlush.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402468E0 (KeDelayExecutionThread.c)
 */

__int64 __fastcall EtwpWaitForBufferReferenceCount(__int64 a1)
{
  __int64 result; // rax

  for ( result = *(unsigned int *)(a1 + 12); (_DWORD)result; result = *(unsigned int *)(a1 + 12) )
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&EtwpShortTime);
  return result;
}
