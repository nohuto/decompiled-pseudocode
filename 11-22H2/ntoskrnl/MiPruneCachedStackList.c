/*
 * XREFs of MiPruneCachedStackList @ 0x14021EB20
 * Callers:
 *     MiAdjustCachedStackList @ 0x14021EA10 (MiAdjustCachedStackList.c)
 *     MiEmptyKernelStackCache @ 0x140644800 (MiEmptyKernelStackCache.c)
 * Callees:
 *     MiDeleteCachedKernelStack @ 0x14021EB84 (MiDeleteCachedKernelStack.c)
 *     RtlpInterlockedPopEntrySList @ 0x1404287F0 (RtlpInterlockedPopEntrySList.c)
 *     MiDeleteCachedKernelShadowStack @ 0x1406443C4 (MiDeleteCachedKernelShadowStack.c)
 */

__int64 __fastcall MiPruneCachedStackList(__int64 a1, _SLIST_HEADER *a2, unsigned int a3, int a4)
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
