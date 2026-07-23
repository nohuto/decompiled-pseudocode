/*
 * XREFs of TmPropagationComplete @ 0x1403E00A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmPropagationComplete(
        PKRESOURCEMANAGER ResourceManager,
        ULONG RequestCookie,
        ULONG BufferLength,
        PVOID Buffer)
{
  return TmPropagationComplete_0(ResourceManager, RequestCookie, BufferLength, Buffer);
}
