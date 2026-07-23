/*
 * XREFs of ZwAlpcDisconnectPort @ 0x14041C7E0
 * Callers:
 *     sub_140929940 @ 0x140929940 (sub_140929940.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwAlpcDisconnectPort(HANDLE PortHandle, ULONG Flags)
{
  _disable();
  __readeflags();
  return sub_140433F80(PortHandle, *(_QWORD *)&Flags);
}
