/*
 * XREFs of EtwpRotateCompressionTargetIfNeeded @ 0x140602B24
 * Callers:
 *     EtwpCompressBuffer @ 0x140602160 (EtwpCompressBuffer.c)
 *     EtwpCompressPendingBuffers @ 0x1406024E4 (EtwpCompressPendingBuffers.c)
 * Callees:
 *     EtwpRotateCompressionTarget @ 0x140602AB8 (EtwpRotateCompressionTarget.c)
 */

unsigned int *__fastcall EtwpRotateCompressionTargetIfNeeded(__int64 a1)
{
  __int64 v1; // rax
  unsigned int *result; // rax

  v1 = *(_QWORD *)(a1 + 1152);
  if ( !v1 )
    return EtwpRotateCompressionTarget(a1);
  result = (unsigned int *)*(unsigned int *)(v1 + 8);
  if ( (unsigned int)(*(_DWORD *)(a1 + 4) - (_DWORD)result) <= 0x148 )
    return EtwpRotateCompressionTarget(a1);
  return result;
}
