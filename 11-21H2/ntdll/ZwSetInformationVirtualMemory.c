/*
 * XREFs of ZwSetInformationVirtualMemory @ 0x1800A7580
 * Callers:
 *     RtlDisableXfgOnTarget @ 0x18010A108 (RtlDisableXfgOnTarget.c)
 *     RtlpGuardGrantSuppressedCallAccess @ 0x18010A414 (RtlpGuardGrantSuppressedCallAccess.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetInformationVirtualMemory()
{
  __int64 result; // rax

  result = 425LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
