/*
 * XREFs of IopLiveDumpTrace @ 0x14055A08C
 * Callers:
 *     IoCaptureLiveDump @ 0x14094B9E8 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x14094C2C4 (IoWriteDeferredLiveDumpData.c)
 *     IopLiveDumpStartDumpDataBuffering @ 0x140A9C538 (IopLiveDumpStartDumpDataBuffering.c)
 * Callees:
 *     EtwWriteEx @ 0x1402581E0 (EtwWriteEx.c)
 *     IopLiveDumpIsTracingEnabled @ 0x140559D90 (IopLiveDumpIsTracingEnabled.c)
 */

char IopLiveDumpTrace()
{
  char result; // al
  const EVENT_DESCRIPTOR *v1; // rcx

  result = IopLiveDumpIsTracingEnabled();
  if ( result )
    return EtwWriteEx(IopLiveDumpEtwRegHandle, v1, 0LL, 0, 0LL, 0LL, 0, 0LL);
  return result;
}
