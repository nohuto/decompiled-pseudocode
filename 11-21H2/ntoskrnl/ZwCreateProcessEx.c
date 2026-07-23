/*
 * XREFs of ZwCreateProcessEx @ 0x14041C100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwCreateProcessEx(
        PHANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ParentProcess,
        ULONG Flags,
        HANDLE SectionHandle,
        HANDLE DebugPort,
        HANDLE TokenHandle,
        ULONG Reserved)
{
  _disable();
  __readeflags();
  return sub_140433F80(ProcessHandle, *(_QWORD *)&DesiredAccess);
}
