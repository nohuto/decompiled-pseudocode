/*
 * XREFs of ZwAlpcDeleteSecurityContext @ 0x14041C7C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwAlpcDeleteSecurityContext(HANDLE PortHandle, ULONG Flags, ALPC_HANDLE ContextHandle)
{
  _disable();
  __readeflags();
  return sub_140433F80(PortHandle, *(_QWORD *)&Flags);
}
