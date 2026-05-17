/*
 * XREFs of NtQuerySection @ 0x1800A4A90
 * Callers:
 *     PsspDumpObject_Section @ 0x18008D6C0 (PsspDumpObject_Section.c)
 *     RtlGetImageFileMachines @ 0x1800A30A0 (RtlGetImageFileMachines.c)
 *     AvrfMiniLoadDll @ 0x1800E6C5C (AvrfMiniLoadDll.c)
 * Callees:
 *     <none>
 */

__int64 NtQuerySection()
{
  __int64 result; // rax

  result = 81LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
