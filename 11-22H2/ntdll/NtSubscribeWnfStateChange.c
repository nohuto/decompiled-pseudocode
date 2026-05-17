/*
 * XREFs of NtSubscribeWnfStateChange @ 0x1800A2720
 * Callers:
 *     RtlpRemoveUserSubFromNameSub @ 0x18004C6DC (RtlpRemoveUserSubFromNameSub.c)
 *     RtlpAddWnfUserSubToNameSub @ 0x18005BE6C (RtlpAddWnfUserSubToNameSub.c)
 * Callees:
 *     <none>
 */

__int64 NtSubscribeWnfStateChange()
{
  __int64 result; // rax

  result = 458LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
