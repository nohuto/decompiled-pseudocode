/*
 * XREFs of ZwManageHotPatch @ 0x1800A31A0
 * Callers:
 *     LdrpInitializeHotPatching @ 0x1800AFA3C (LdrpInitializeHotPatching.c)
 *     LdrpQueryCurrentPatch @ 0x1800D9F80 (LdrpQueryCurrentPatch.c)
 *     LdrpLoadPatchedNtdll @ 0x1800E0260 (LdrpLoadPatchedNtdll.c)
 *     LdrpApplyPatchImage @ 0x1800E0FB4 (LdrpApplyPatchImage.c)
 *     LdrpUndoPatchImage @ 0x1800E1580 (LdrpUndoPatchImage.c)
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
