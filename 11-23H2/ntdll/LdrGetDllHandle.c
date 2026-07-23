/*
 * XREFs of LdrGetDllHandle @ 0x18002B0C0
 * Callers:
 *     <none>
 * Callees:
 *     LdrGetDllHandleEx @ 0x18002A220 (LdrGetDllHandleEx.c)
 */

NTSTATUS __cdecl LdrGetDllHandle(PWSTR DllPath, PULONG DllCharacteristics, PUNICODE_STRING DllName, PVOID *DllHandle)
{
  return LdrGetDllHandleEx(1u, DllPath, DllCharacteristics, DllName, DllHandle);
}
