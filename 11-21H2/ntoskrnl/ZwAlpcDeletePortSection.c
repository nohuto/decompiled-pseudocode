/*
 * XREFs of ZwAlpcDeletePortSection @ 0x14041C760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwAlpcDeletePortSection(HANDLE PortHandle, ULONG Flags, ALPC_HANDLE SectionHandle)
{
  _disable();
  __readeflags();
  return sub_140433F80(PortHandle, *(_QWORD *)&Flags);
}
