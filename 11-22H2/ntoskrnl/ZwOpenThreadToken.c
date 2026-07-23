/*
 * XREFs of ZwOpenThreadToken @ 0x14041AB20
 * Callers:
 *     DifZwOpenThreadTokenWrapper @ 0x1405F29A0 (DifZwOpenThreadTokenWrapper.c)
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
