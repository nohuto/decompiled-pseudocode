/*
 * XREFs of IopLiveDumpTrace @ 0x14055A74C
 * Callers:
 *     IoCaptureLiveDump @ 0x14094BBE8 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x14094C4C4 (IoWriteDeferredLiveDumpData.c)
 *     IopLiveDumpStartDumpDataBuffering @ 0x140A9C3A8 (IopLiveDumpStartDumpDataBuffering.c)
 * Callees:
 *     EtwWriteEx @ 0x1402582A0 (EtwWriteEx.c)
 *     IopLiveDumpIsTracingEnabled @ 0x14055A450 (IopLiveDumpIsTracingEnabled.c)
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
