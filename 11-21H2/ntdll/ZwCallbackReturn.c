/*
 * XREFs of ZwCallbackReturn @ 0x1800A4110
 * Callers:
 *     KiUserCallbackDispatcherHandler @ 0x1800A7F50 (KiUserCallbackDispatcherHandler.c)
 *     KiUserCallbackDispatcher @ 0x1800A7FE0 (KiUserCallbackDispatcher.c)
 * Callees:
 *     <none>
 */

__int64 ZwCallbackReturn()
{
  __int64 result; // rax

  result = 5LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
