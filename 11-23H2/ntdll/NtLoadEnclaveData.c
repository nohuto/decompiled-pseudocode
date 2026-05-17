/*
 * XREFs of NtLoadEnclaveData @ 0x1800A3040
 * Callers:
 *     LdrpLoadEnclaveModule @ 0x1800D8B60 (LdrpLoadEnclaveModule.c)
 * Callees:
 *     <none>
 */

__int64 NtLoadEnclaveData()
{
  __int64 result; // rax

  result = 269LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
