/*
 * XREFs of NtRaiseHardError @ 0x1800A1C40
 * Callers:
 *     LdrpReportError @ 0x18000C29C (LdrpReportError.c)
 *     LdrpMapDllNtFileName @ 0x180010BF4 (LdrpMapDllNtFileName.c)
 *     LdrpInitializationFailure @ 0x18008A4F0 (LdrpInitializationFailure.c)
 *     LdrpProcessMachineMismatch @ 0x1800DF4CC (LdrpProcessMachineMismatch.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtRaiseHardError(
        NTSTATUS ErrorStatus,
        ULONG NumberOfParameters,
        ULONG UnicodeStringParameterMask,
        PULONG_PTR Parameters,
        ULONG ValidResponseOptions,
        PULONG Response)
{
  NTSTATUS result; // eax

  result = 371;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
