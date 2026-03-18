/*
 * XREFs of MiRevertRelocatedImagePfn @ 0x1406F367C
 * Callers:
 *     MiValidateImagePfn @ 0x1406F3408 (MiValidateImagePfn.c)
 * Callees:
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     KeCopyPage @ 0x140424FF0 (KeCopyPage.c)
 *     MiPageHasRelocations @ 0x1406F3800 (MiPageHasRelocations.c)
 *     MiPerformFixups @ 0x1407BF2E0 (MiPerformFixups.c)
 */

__int64 __fastcall MiRevertRelocatedImagePfn(__int64 a1, ULONG_PTR a2, unsigned int a3)
{
  __int64 v4; // rcx
  __int64 result; // rax
  ULONG_PTR v7; // rbx

  v4 = *(_QWORD *)(a2 + 96);
  if ( !*(_QWORD *)(v4 + 32) || !(unsigned int)MiPageHasRelocations(v4, a3, 1LL) )
    return -1LL;
  result = (__int64)MiAllocatePool(256, 0x1000uLL, 0x68496D4Du);
  v7 = result;
  if ( result )
  {
    KeCopyPage(result, a1);
    MiPerformFixups(v7, a2, 0LL, 41);
    return v7;
  }
  return result;
}
