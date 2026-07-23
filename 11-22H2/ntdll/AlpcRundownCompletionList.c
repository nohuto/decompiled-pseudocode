/*
 * XREFs of AlpcRundownCompletionList @ 0x180089160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl AlpcRundownCompletionList(HANDLE PortHandle)
{
  return NtAlpcSetInformation(PortHandle, AlpcCompletionListRundownInformation, 0LL, 0);
}
