/*
 * XREFs of ZwOpenEvent @ 0x14041B8F0
 * Callers:
 *     DifZwOpenEventWrapper @ 0x1405F1CF0 (DifZwOpenEventWrapper.c)
 *     PspShutdownCsrProcess @ 0x1409AD4A8 (PspShutdownCsrProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenEvent(PHANDLE EventHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}
