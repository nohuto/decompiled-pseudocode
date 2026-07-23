/*
 * XREFs of MiDeleteCachedKernelShadowStack @ 0x1406443C4
 * Callers:
 *     MiAdjustCachedStacks @ 0x14021E8DC (MiAdjustCachedStacks.c)
 *     MiPruneCachedStackList @ 0x14021EB20 (MiPruneCachedStackList.c)
 *     MiEmptyKernelStackCache @ 0x140644800 (MiEmptyKernelStackCache.c)
 *     MiRemoveNonIdealCachedStacks @ 0x140644FFC (MiRemoveNonIdealCachedStacks.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140428830 (RtlpInterlockedPushEntrySList.c)
 *     MiDeleteKernelShadowStack @ 0x140644434 (MiDeleteKernelShadowStack.c)
 */

PSLIST_ENTRY __fastcall MiDeleteCachedKernelShadowStack(_SLIST_HEADER *a1, _SLIST_ENTRY *a2, int a3)
{
  PSLIST_ENTRY result; // rax

  result = (PSLIST_ENTRY)MiDeleteKernelShadowStack((((unsigned __int64)a2[1].Next >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL);
  if ( a3 )
    return RtlpInterlockedPushEntrySList(a1 + 29, a2);
  return result;
}
