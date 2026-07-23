/*
 * XREFs of ZwOpenThreadToken @ 0x14041B570
 * Callers:
 *     DifZwOpenThreadTokenWrapper @ 0x1405F2E80 (DifZwOpenThreadTokenWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenThreadToken(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
