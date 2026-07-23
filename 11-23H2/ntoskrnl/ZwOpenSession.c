/*
 * XREFs of ZwOpenSession @ 0x14041D790
 * Callers:
 *     PnpInitializeNotifyEntry @ 0x14068840C (PnpInitializeNotifyEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenSession(PHANDLE SessionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SessionHandle);
}
