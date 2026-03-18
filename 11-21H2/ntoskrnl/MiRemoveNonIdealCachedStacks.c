/*
 * XREFs of MiRemoveNonIdealCachedStacks @ 0x1405A57F0
 * Callers:
 *     MiAdjustCachedStackList @ 0x140268FB4 (MiAdjustCachedStackList.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x140429900 (RtlpInterlockedFlushSList.c)
 *     MiDeleteCachedKernelShadowStack @ 0x1405A50AC (MiDeleteCachedKernelShadowStack.c)
 *     MiKernelShadowStackIdealForCaching @ 0x1405A5628 (MiKernelShadowStackIdealForCaching.c)
 */

PSLIST_ENTRY __fastcall MiRemoveNonIdealCachedStacks(PSLIST_HEADER ListHead)
{
  PSLIST_ENTRY result; // rax
  struct _SLIST_ENTRY *v3; // rbx
  struct _SLIST_ENTRY *v4; // rsi
  int v5; // [rsp+30h] [rbp+8h] BYREF
  union _SLIST_HEADER *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  v5 = 0;
  result = RtlpInterlockedFlushSList(ListHead);
  v3 = result;
  while ( v3 )
  {
    v4 = v3;
    v3 = v3->Next;
    if ( (unsigned int)MiKernelShadowStackIdealForCaching(
                         (((unsigned __int64)v4[1].Next >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                         (((unsigned __int64)v4[1].Next >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFFFF8LL,
                         (__int64)&v6,
                         &v5) )
      result = MiDeleteCachedKernelShadowStack(v6, v4, 1);
    else
      result = RtlpInterlockedPushEntrySList(ListHead, v4);
  }
  return result;
}
