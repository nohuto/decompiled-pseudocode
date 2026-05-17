/*
 * XREFs of ZwSystemDebugControl @ 0x1800A7980
 * Callers:
 *     LdrpMapDllNtFileName @ 0x18004FDE4 (LdrpMapDllNtFileName.c)
 *     LdrpLoadCustomNtdll @ 0x1800E0454 (LdrpLoadCustomNtdll.c)
 *     AvrfMiniLoadDll @ 0x1800E6C5C (AvrfMiniLoadDll.c)
 * Callees:
 *     <none>
 */

__int64 ZwSystemDebugControl()
{
  __int64 result; // rax

  result = 457LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
