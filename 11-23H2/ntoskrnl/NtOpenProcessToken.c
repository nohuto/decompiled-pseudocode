/*
 * XREFs of NtOpenProcessToken @ 0x1407C4F70
 * Callers:
 *     <none>
 * Callees:
 *     NtOpenProcessTokenEx @ 0x1407376D0 (NtOpenProcessTokenEx.c)
 */

NTSTATUS __stdcall NtOpenProcessToken(HANDLE ProcessHandle, ACCESS_MASK DesiredAccess, PHANDLE TokenHandle)
{
  return NtOpenProcessTokenEx(ProcessHandle, DesiredAccess, 0, TokenHandle);
}
