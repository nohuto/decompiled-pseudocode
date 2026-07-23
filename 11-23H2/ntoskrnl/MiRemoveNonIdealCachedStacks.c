/*
 * XREFs of MiRemoveNonIdealCachedStacks @ 0x1406454DC
 * Callers:
 *     MiAdjustCachedStackList @ 0x14021E9F0 (MiAdjustCachedStackList.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140429280 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1404292C0 (RtlpInterlockedFlushSList.c)
 *     MiDeleteCachedKernelShadowStack @ 0x1406448A4 (MiDeleteCachedKernelShadowStack.c)
 *     MiKernelShadowStackIdealForCaching @ 0x140645324 (MiKernelShadowStackIdealForCaching.c)
 */

PSLIST_ENTRY __fastcall MiRemoveNonIdealCachedStacks(PSLIST_HEADER ListHead)
{
  PSLIST_ENTRY result; // rax
  _SLIST_ENTRY *v3; // rbx
  _SLIST_ENTRY *v4; // rsi
  int v5; // [rsp+30h] [rbp+8h] BYREF
  _SLIST_HEADER *v6; // [rsp+38h] [rbp+10h] BYREF

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
