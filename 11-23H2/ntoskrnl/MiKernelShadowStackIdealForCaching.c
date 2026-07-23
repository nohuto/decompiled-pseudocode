/*
 * XREFs of MiKernelShadowStackIdealForCaching @ 0x140645324
 * Callers:
 *     MiRemoveNonIdealCachedStacks @ 0x1406454DC (MiRemoveNonIdealCachedStacks.c)
 *     MmDeleteKernelShadowStack @ 0x140645B14 (MmDeleteKernelShadowStack.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x14026ED60 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCheckSlabPfnBitmap @ 0x1403249C0 (MiCheckSlabPfnBitmap.c)
 *     MiValidateKernelShadowStackPage @ 0x14064562C (MiValidateKernelShadowStackPage.c)
 */

__int64 __fastcall MiKernelShadowStackIdealForCaching(
        ULONG_PTR BugCheckParameter2,
        unsigned __int64 a2,
        __int64 a3,
        _DWORD *a4)
{
  unsigned int v4; // ebx
  unsigned __int64 i; // rdi
  signed __int64 v9; // r15
  ULONG_PTR v10; // rcx

  *(_QWORD *)a3 = 0LL;
  v4 = 0;
  *a4 = -1;
  for ( i = BugCheckParameter2; i < a2; i += 8LL )
  {
    v9 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(i) >> 12) & 0xFFFFFFFFFFLL);
    if ( !*(_QWORD *)a3 )
      *(_QWORD *)a3 = *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(v9 - 0x220000000000LL + 40) >> 43) & 0x3FFLL));
    MiValidateKernelShadowStackPage(i);
    v10 = v9 / 48;
    if ( *a4 == -1 )
    {
      *a4 = *((_DWORD *)MiSearchNumaNodeTable(v10) + 2);
    }
    else if ( *a4 != *((_DWORD *)MiSearchNumaNodeTable(v10) + 2) )
    {
      v4 = 1;
    }
    if ( (*(_DWORD *)(*(_QWORD *)a3 + 4LL) & 8) != 0
      && !(unsigned int)MiCheckSlabPfnBitmap(v9 - 0x220000000000LL, 1LL, 0) )
    {
      v4 = 1;
    }
  }
  return v4;
}
