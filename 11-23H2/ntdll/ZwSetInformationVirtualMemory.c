/*
 * XREFs of ZwSetInformationVirtualMemory @ 0x1800A4440
 * Callers:
 *     RtlDisableXfgOnTarget @ 0x18010B768 (RtlDisableXfgOnTarget.c)
 *     RtlpGuardGrantSuppressedCallAccess @ 0x18010BA74 (RtlpGuardGrantSuppressedCallAccess.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetInformationVirtualMemory()
{
  __int64 result; // rax

  result = 429LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
