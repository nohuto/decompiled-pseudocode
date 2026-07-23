/*
 * XREFs of NtPropagationFailed @ 0x1403DFC60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtPropagationFailed(HANDLE ResourceManagerHandle, ULONG RequestCookie, NTSTATUS PropStatus)
{
  return NtPropagationFailed_0(ResourceManagerHandle, RequestCookie, PropStatus);
}
