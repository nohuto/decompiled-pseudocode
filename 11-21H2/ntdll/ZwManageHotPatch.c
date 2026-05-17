/*
 * XREFs of ZwManageHotPatch @ 0x1800A6340
 * Callers:
 *     LdrpInitializeHotPatching @ 0x1800B092A (LdrpInitializeHotPatching.c)
 *     LdrpQueryCurrentPatch @ 0x1800DA4E0 (LdrpQueryCurrentPatch.c)
 *     LdrpLoadPatchedNtdll @ 0x1800E061C (LdrpLoadPatchedNtdll.c)
 *     LdrpApplyPatchImage @ 0x1800E1480 (LdrpApplyPatchImage.c)
 *     LdrpUndoPatchImage @ 0x1800E1A40 (LdrpUndoPatchImage.c)
 * Callees:
 *     <none>
 */

__int64 ZwManageHotPatch()
{
  __int64 result; // rax

  result = 279LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
