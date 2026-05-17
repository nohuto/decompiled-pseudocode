/*
 * XREFs of NtSetInformationObject @ 0x18009F960
 * Callers:
 *     TppCritSetThread @ 0x18007DF14 (TppCritSetThread.c)
 *     TppCritResetThread @ 0x180081504 (TppCritResetThread.c)
 * Callees:
 *     <none>
 */

__int64 NtSetInformationObject()
{
  __int64 result; // rax

  result = 92LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
