/*
 * XREFs of ZwOpenEvent @ 0x14041AEA0
 * Callers:
 *     DifZwOpenEventWrapper @ 0x1405F1810 (DifZwOpenEventWrapper.c)
 *     PspShutdownCsrProcess @ 0x1409AD358 (PspShutdownCsrProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenEvent(PHANDLE EventHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}
