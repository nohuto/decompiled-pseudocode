/*
 * XREFs of ZwMapViewOfSectionEx @ 0x1800A1160
 * Callers:
 *     LdrpMinimalMapModule @ 0x18002C6F4 (LdrpMinimalMapModule.c)
 *     LdrpMapViewOfSection @ 0x18002CBA0 (LdrpMapViewOfSection.c)
 *     RtlGetImageFileMachines @ 0x180083000 (RtlGetImageFileMachines.c)
 * Callees:
 *     <none>
 */

__int64 ZwMapViewOfSectionEx()
{
  __int64 result; // rax

  result = 284LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
