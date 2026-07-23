/*
 * XREFs of LdrGetProcedureAddressEx @ 0x180079E30
 * Callers:
 *     LdrpGetShimEngineInterface @ 0x180079AA8 (LdrpGetShimEngineInterface.c)
 * Callees:
 *     LdrGetProcedureAddressForCaller @ 0x180021FB0 (LdrGetProcedureAddressForCaller.c)
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
