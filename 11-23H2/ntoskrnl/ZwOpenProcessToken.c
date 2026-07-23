/*
 * XREFs of ZwOpenProcessToken @ 0x14041D710
 * Callers:
 *     DifZwOpenProcessTokenWrapper @ 0x1405F2700 (DifZwOpenProcessTokenWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenProcessToken(HANDLE ProcessHandle, ACCESS_MASK DesiredAccess, PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
