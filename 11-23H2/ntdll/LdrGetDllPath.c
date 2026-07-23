/*
 * XREFs of LdrGetDllPath @ 0x180031B40
 * Callers:
 *     <none>
 * Callees:
 *     LdrpGetDllPath @ 0x180031B6C (LdrpGetDllPath.c)
 */

NTSTATUS __cdecl LdrGetDllPath(PCWSTR DllName, ULONG Flags, PWSTR *DllPath, PWSTR *SearchPaths)
{
  return LdrpGetDllPath(DllName, 0LL, 0LL, (__int64)SearchPaths);
}
