/*
 * XREFs of NtPropagationComplete @ 0x1403DFC40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtPropagationComplete(
        HANDLE ResourceManagerHandle,
        ULONG RequestCookie,
        ULONG BufferLength,
        PVOID Buffer)
{
  return NtPropagationComplete_0(ResourceManagerHandle, RequestCookie, BufferLength, Buffer);
}
