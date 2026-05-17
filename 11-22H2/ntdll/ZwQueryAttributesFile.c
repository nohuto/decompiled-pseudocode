/*
 * XREFs of ZwQueryAttributesFile @ 0x18009F590
 * Callers:
 *     LdrpIsReparsePoint @ 0x180008270 (LdrpIsReparsePoint.c)
 *     RtlDoesFileExists_UstrEx @ 0x18001E298 (RtlDoesFileExists_UstrEx.c)
 *     LdrpGetNtPathFromDosPath @ 0x18002B2F4 (LdrpGetNtPathFromDosPath.c)
 *     LdrAddDllDirectory @ 0x180078440 (LdrAddDllDirectory.c)
 *     AvrfMiniLoadDll @ 0x1800E5AB8 (AvrfMiniLoadDll.c)
 *     LdrpResValidateFilePath @ 0x1800EFCB8 (LdrpResValidateFilePath.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryAttributesFile()
{
  __int64 result; // rax

  result = 61LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
