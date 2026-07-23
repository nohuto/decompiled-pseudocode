/*
 * XREFs of TmPropagationComplete @ 0x1403D87F0
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
  return __imp_TmPropagationComplete(ResourceManager, RequestCookie, BufferLength, Buffer);
}
