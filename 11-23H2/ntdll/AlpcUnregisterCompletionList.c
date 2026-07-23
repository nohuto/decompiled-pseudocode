/*
 * XREFs of AlpcUnregisterCompletionList @ 0x180089940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl AlpcUnregisterCompletionList(HANDLE PortHandle)
{
  return NtAlpcSetInformation(PortHandle, AlpcUnregisterCompletionListInformation, 0LL, 0);
}
