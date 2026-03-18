/*
 * XREFs of EtwpRelinquishCompressionTarget @ 0x140602A68
 * Callers:
 *     EtwpFreeCompression @ 0x14031F2D0 (EtwpFreeCompression.c)
 *     EtwpBufferingModeCompressionFlush @ 0x1406020F8 (EtwpBufferingModeCompressionFlush.c)
 *     EtwpCompressionProc @ 0x140602650 (EtwpCompressionProc.c)
 *     EtwpDisableCompression @ 0x140602878 (EtwpDisableCompression.c)
 * Callees:
 *     EtwpGetLoggerTimeStamp @ 0x140227B4C (EtwpGetLoggerTimeStamp.c)
 *     EtwpEnqueueAvailableBuffer @ 0x140227FA8 (EtwpEnqueueAvailableBuffer.c)
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
