/*
 * XREFs of LdrGetProcedureAddressEx @ 0x180072FD0
 * Callers:
 *     LdrpGetShimEngineInterface @ 0x180072C90 (LdrpGetShimEngineInterface.c)
 * Callees:
 *     LdrGetProcedureAddressForCaller @ 0x18003AFD0 (LdrGetProcedureAddressForCaller.c)
 */

NTSTATUS __cdecl LdrGetProcedureAddressEx(
        PVOID DllHandle,
        PANSI_STRING ProcedureName,
        ULONG ProcedureNumber,
        PVOID *ProcedureAddress,
        ULONG Flags)
{
  PVOID *Callback; // [rsp+38h] [rbp+0h]

  return LdrGetProcedureAddressForCaller(DllHandle, ProcedureName, ProcedureNumber, ProcedureAddress, Flags, Callback);
}
