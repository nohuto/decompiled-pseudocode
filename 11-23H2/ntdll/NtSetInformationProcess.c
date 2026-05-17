/*
 * XREFs of NtSetInformationProcess @ 0x1800A1230
 * Callers:
 *     LdrpHandleTlsData @ 0x180004568 (LdrpHandleTlsData.c)
 *     RtlDeleteGrowableFunctionTable @ 0x180072330 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x180072880 (RtlAddGrowableFunctionTable.c)
 *     RtlCreateUserStack @ 0x180082800 (RtlCreateUserStack.c)
 *     RtlSetProcessIsCritical @ 0x18008E580 (RtlSetProcessIsCritical.c)
 *     AVrfpEnableHandleVerifier @ 0x1800E6184 (AVrfpEnableHandleVerifier.c)
 *     WerpSetProcessFaultInformation @ 0x1800E9248 (WerpSetProcessFaultInformation.c)
 *     RtlCreateUserFiberShadowStack @ 0x1800ED5B0 (RtlCreateUserFiberShadowStack.c)
 *     RtlFreeUserFiberShadowStack @ 0x1800ED6C0 (RtlFreeUserFiberShadowStack.c)
 * Callees:
 *     <none>
 */

__int64 NtSetInformationProcess()
{
  __int64 result; // rax

  result = 28LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
