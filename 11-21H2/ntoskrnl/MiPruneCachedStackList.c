/*
 * XREFs of MiPruneCachedStackList @ 0x1402690B4
 * Callers:
 *     MiAdjustCachedStackList @ 0x140268FB4 (MiAdjustCachedStackList.c)
 *     MiEmptyKernelStackCache @ 0x1405A54BC (MiEmptyKernelStackCache.c)
 * Callees:
 *     MiDeleteCachedKernelStack @ 0x140269118 (MiDeleteCachedKernelStack.c)
 *     RtlpInterlockedPopEntrySList @ 0x140429880 (RtlpInterlockedPopEntrySList.c)
 *     MiDeleteCachedKernelShadowStack @ 0x1405A50AC (MiDeleteCachedKernelShadowStack.c)
 */

__int64 __fastcall MiPruneCachedStackList(__int64 a1, union _SLIST_HEADER *a2, unsigned int a3, int a4)
{
  __int64 result; // rax
  PSLIST_ENTRY v9; // rax

  while ( 1 )
  {
    result = LOWORD(a2->Alignment);
    if ( (unsigned int)result <= a3 )
      break;
    v9 = RtlpInterlockedPopEntrySList(a2);
    if ( v9 )
    {
      if ( a4 )
        MiDeleteCachedKernelShadowStack(a1, v9, 1LL);
      else
        MiDeleteCachedKernelStack(v9);
    }
  }
  return result;
}
