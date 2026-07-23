/*
 * XREFs of ZwRequestPort @ 0x14041E780
 * Callers:
 *     sub_1402037E8 @ 0x1402037E8 (sub_1402037E8.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRequestPort(HANDLE PortHandle, PPORT_MESSAGE RequestMessage)
{
  _disable();
  __readeflags();
  return sub_140433F80(PortHandle, RequestMessage);
}
