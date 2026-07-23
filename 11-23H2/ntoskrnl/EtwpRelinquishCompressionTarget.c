/*
 * XREFs of EtwpRelinquishCompressionTarget @ 0x140602FB8
 * Callers:
 *     EtwpFreeCompression @ 0x14031F560 (EtwpFreeCompression.c)
 *     EtwpBufferingModeCompressionFlush @ 0x140602648 (EtwpBufferingModeCompressionFlush.c)
 *     EtwpCompressionProc @ 0x140602BA0 (EtwpCompressionProc.c)
 *     EtwpDisableCompression @ 0x140602DC8 (EtwpDisableCompression.c)
 * Callees:
 *     EtwpGetLoggerTimeStamp @ 0x140227C5C (EtwpGetLoggerTimeStamp.c)
 *     EtwpEnqueueAvailableBuffer @ 0x1402280B8 (EtwpEnqueueAvailableBuffer.c)
 */

void __fastcall EtwpRelinquishCompressionTarget(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 1152) )
  {
    *(LARGE_INTEGER *)(*(_QWORD *)(a1 + 1152) + 16LL) = EtwpGetLoggerTimeStamp(a1);
    EtwpEnqueueAvailableBuffer(a1, *(unsigned int **)(a1 + 1152), 5u);
    *(_QWORD *)(a1 + 1152) = 0LL;
  }
}
