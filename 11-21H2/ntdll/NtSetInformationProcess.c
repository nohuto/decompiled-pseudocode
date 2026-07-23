/*
 * XREFs of NtSetInformationProcess @ 0x1800A43F0
 * Callers:
 *     LdrpHandleTlsData @ 0x180033A94 (LdrpHandleTlsData.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800779E0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x1800781D0 (RtlAddGrowableFunctionTable.c)
 *     RtlCreateUserStack @ 0x180085730 (RtlCreateUserStack.c)
 *     RtlSetProcessIsCritical @ 0x180093010 (RtlSetProcessIsCritical.c)
 *     AVrfpEnableHandleVerifier @ 0x1800E5FD4 (AVrfpEnableHandleVerifier.c)
 *     WerpSetProcessFaultInformation @ 0x1800E9088 (WerpSetProcessFaultInformation.c)
 *     RtlCreateUserFiberShadowStack @ 0x1800EC9B0 (RtlCreateUserFiberShadowStack.c)
 *     RtlFreeUserFiberShadowStack @ 0x1800ECAC0 (RtlFreeUserFiberShadowStack.c)
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
