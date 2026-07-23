/*
 * XREFs of ZwSystemDebugControl @ 0x14041F080
 * Callers:
 *     sub_14066D650 @ 0x14066D650 (sub_14066D650.c)
 *     sub_14084565C @ 0x14084565C (sub_14084565C.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwSystemDebugControl(
        SYSDBG_COMMAND Command,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return sub_140433F80(*(_QWORD *)&Command, InputBuffer);
}
