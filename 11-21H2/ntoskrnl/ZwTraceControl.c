/*
 * XREFs of ZwTraceControl @ 0x14041F140
 * Callers:
 *     EtwWriteStartScenario @ 0x14081C9F0 (EtwWriteStartScenario.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwTraceControl(
        ETWTRACECONTROLCODE TraceControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return sub_140433F80(*(_QWORD *)&TraceControlCode, InputBuffer);
}
