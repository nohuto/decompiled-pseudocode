/*
 * XREFs of LdrQueryProcessModuleInformation @ 0x1800D9E30
 * Callers:
 *     <none>
 * Callees:
 *     LdrQueryProcessModuleInformationEx @ 0x180001614 (LdrQueryProcessModuleInformationEx.c)
 */

NTSTATUS __cdecl LdrQueryProcessModuleInformation(
        PRTL_PROCESS_MODULES ModuleInformation,
        ULONG Size,
        PULONG ReturnedSize)
{
  return LdrQueryProcessModuleInformationEx(0LL, 2LL, ModuleInformation, Size, ReturnedSize);
}
