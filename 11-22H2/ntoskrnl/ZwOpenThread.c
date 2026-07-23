/*
 * XREFs of ZwOpenThread @ 0x14041CD80
 * Callers:
 *     DifZwOpenThreadWrapper @ 0x1405F2AE0 (DifZwOpenThreadWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenThread(
        PHANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PCLIENT_ID ClientId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
