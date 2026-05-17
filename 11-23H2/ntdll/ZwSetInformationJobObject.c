/*
 * XREFs of ZwSetInformationJobObject @ 0x1800A4360
 * Callers:
 *     TpAllocJobNotification @ 0x180050B40 (TpAllocJobNotification.c)
 *     TppJobpRundownJob @ 0x180050DF0 (TppJobpRundownJob.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetInformationJobObject()
{
  __int64 result; // rax

  result = 422LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
