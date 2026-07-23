/*
 * XREFs of ZwTraceEvent @ 0x14041B260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwTraceEvent(HANDLE TraceHandle, ULONG Flags, ULONG FieldSize, PVOID Fields)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TraceHandle);
}
