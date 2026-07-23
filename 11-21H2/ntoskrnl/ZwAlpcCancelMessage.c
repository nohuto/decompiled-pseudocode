/*
 * XREFs of ZwAlpcCancelMessage @ 0x14041C660
 * Callers:
 *     sub_1407EFC00 @ 0x1407EFC00 (sub_1407EFC00.c)
 *     sub_14081AFCC @ 0x14081AFCC (sub_14081AFCC.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwAlpcCancelMessage(HANDLE PortHandle, ULONG Flags, PALPC_CONTEXT_ATTR MessageContext)
{
  _disable();
  __readeflags();
  return sub_140433F80(PortHandle, *(_QWORD *)&Flags);
}
