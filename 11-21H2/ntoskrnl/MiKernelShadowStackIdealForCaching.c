/*
 * XREFs of MiKernelShadowStackIdealForCaching @ 0x1405A5628
 * Callers:
 *     MiRemoveNonIdealCachedStacks @ 0x1405A57F0 (MiRemoveNonIdealCachedStacks.c)
 *     MmDeleteKernelShadowStack @ 0x1405A5DF0 (MmDeleteKernelShadowStack.c)
 * Callees:
 *     MiIsPfnFromSlabAllocation @ 0x140277C50 (MiIsPfnFromSlabAllocation.c)
 *     MiSearchNumaNodeTable @ 0x1402C1550 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiValidateKernelShadowStackPage @ 0x1405A5940 (MiValidateKernelShadowStackPage.c)
 */

__int64 __fastcall MiKernelShadowStackIdealForCaching(
        ULONG_PTR BugCheckParameter2,
        unsigned __int64 a2,
        __int64 a3,
        _DWORD *a4)
{
  unsigned int v4; // ebx
  unsigned __int64 i; // rdi
  __int64 v9; // rsi
  ULONG_PTR v10; // rcx

  *(_QWORD *)a3 = 0LL;
  v4 = 0;
  *a4 = -1;
  for ( i = BugCheckParameter2; i < a2; i += 8LL )
  {
    v9 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(i) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    if ( !*(_QWORD *)a3 )
      *(_QWORD *)a3 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL));
    MiValidateKernelShadowStackPage(i);
    v10 = (v9 + 0x220000000000LL) / 48;
    if ( *a4 == -1 )
    {
      *a4 = *((_DWORD *)MiSearchNumaNodeTable(v10) + 2);
    }
    else if ( *a4 != *((_DWORD *)MiSearchNumaNodeTable(v10) + 2) )
    {
      v4 = 1;
    }
    if ( (*(_DWORD *)(*(_QWORD *)a3 + 4LL) & 8) != 0 && !MiIsPfnFromSlabAllocation(v9) )
      v4 = 1;
  }
  return v4;
}
