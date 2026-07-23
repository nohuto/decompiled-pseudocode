/*
 * XREFs of ZwTraceEvent @ 0x14041C320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwTraceEvent(HANDLE TraceHandle, ULONG Flags, ULONG FieldSize, PVOID Fields)
{
  _disable();
  __readeflags();
  return sub_140433F80(TraceHandle, *(_QWORD *)&Flags);
}
