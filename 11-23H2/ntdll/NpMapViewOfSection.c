/*
 * XREFs of NpMapViewOfSection @ 0x1800A0A60
 * Callers:
 *     LdrpLoadCustomNtdll @ 0x1800E0098 (LdrpLoadCustomNtdll.c)
 * Callees:
 *     <none>
 */

__int64 NpMapViewOfSection()
{
  __int64 result; // rax

  result = 40LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
