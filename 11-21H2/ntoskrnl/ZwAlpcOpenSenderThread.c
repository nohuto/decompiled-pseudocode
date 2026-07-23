/*
 * XREFs of ZwAlpcOpenSenderThread @ 0x14041C860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcOpenSenderThread(
        PHANDLE ThreadHandle,
        HANDLE PortHandle,
        PPORT_MESSAGE PortMessage,
        ULONG Flags,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return sub_140433F80(ThreadHandle, PortHandle);
}
