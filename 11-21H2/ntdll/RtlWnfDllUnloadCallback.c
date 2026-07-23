/*
 * XREFs of RtlWnfDllUnloadCallback @ 0x18008E120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __cdecl RtlWnfDllUnloadCallback(PVOID DllBase)
{
  return LdrUnloadDll(DllBase);
}
