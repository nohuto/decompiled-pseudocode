/*
 * XREFs of NpUnmapViewOfSection @ 0x1800A3C60
 * Callers:
 *     LdrpLoadCustomNtdll @ 0x1800E0454 (LdrpLoadCustomNtdll.c)
 *     LdrpLoadPatchedNtdll @ 0x1800E061C (LdrpLoadPatchedNtdll.c)
 * Callees:
 *     <none>
 */

__int64 NpUnmapViewOfSection()
{
  __int64 result; // rax

  result = 42LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
