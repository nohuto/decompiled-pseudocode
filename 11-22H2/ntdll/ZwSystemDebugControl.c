/*
 * XREFs of ZwSystemDebugControl @ 0x1800A2780
 * Callers:
 *     LdrpMapDllNtFileName @ 0x180010BF4 (LdrpMapDllNtFileName.c)
 *     LdrpLoadCustomNtdll @ 0x1800DED6C (LdrpLoadCustomNtdll.c)
 *     AvrfMiniLoadDll @ 0x1800E5AB8 (AvrfMiniLoadDll.c)
 * Callees:
 *     <none>
 */

__int64 ZwSystemDebugControl()
{
  __int64 result; // rax

  result = 461LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
