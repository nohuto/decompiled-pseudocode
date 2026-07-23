/*
 * XREFs of NtSetInformationProcess @ 0x18009F170
 * Callers:
 *     LdrpHandleTlsData @ 0x180004574 (LdrpHandleTlsData.c)
 *     RtlDeleteGrowableFunctionTable @ 0x180071CC0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x180072210 (RtlAddGrowableFunctionTable.c)
 *     RtlCreateUserStack @ 0x180082190 (RtlCreateUserStack.c)
 *     RtlSetProcessIsCritical @ 0x18008DD80 (RtlSetProcessIsCritical.c)
 *     AVrfpEnableHandleVerifier @ 0x1800E4E54 (AVrfpEnableHandleVerifier.c)
 *     WerpSetProcessFaultInformation @ 0x1800E7F18 (WerpSetProcessFaultInformation.c)
 *     RtlCreateUserFiberShadowStack @ 0x1800EC280 (RtlCreateUserFiberShadowStack.c)
 *     RtlFreeUserFiberShadowStack @ 0x1800EC390 (RtlFreeUserFiberShadowStack.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength)
{
  NTSTATUS result; // eax

  result = 28;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
