/*
 * XREFs of ZwManageHotPatch @ 0x1800A10E0
 * Callers:
 *     LdrpInitializeHotPatching @ 0x1800AD96C (LdrpInitializeHotPatching.c)
 *     LdrpQueryCurrentPatch @ 0x1800DA5D0 (LdrpQueryCurrentPatch.c)
 *     LdrpLoadPatchedNtdll @ 0x1800DEF34 (LdrpLoadPatchedNtdll.c)
 *     LdrpApplyPatchImage @ 0x1800DFC84 (LdrpApplyPatchImage.c)
 *     LdrpUndoPatchImage @ 0x1800E0250 (LdrpUndoPatchImage.c)
 * Callees:
 *     <none>
 */

__int64 ZwManageHotPatch()
{
  __int64 result; // rax

  result = 280LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
