/*
 * XREFs of RtlpInterlockedPopEntrySList @ 0x1800A2B80
 * Callers:
 *     EtwpAllocateRegistration @ 0x18003292C (EtwpAllocateRegistration.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x18003D6C0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpFreeUserBlock @ 0x180047BC8 (RtlpFreeUserBlock.c)
 *     RtlInitializeResource @ 0x18005F860 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18005F9E0 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlpAllocateUserBlock @ 0x1800636C0 (RtlpAllocateUserBlock.c)
 *     RtlpStdGetSpaceForTrace @ 0x18010E634 (RtlpStdGetSpaceForTrace.c)
 *     RtlpLocalInfoAllocFromCache @ 0x180118AA0 (RtlpLocalInfoAllocFromCache.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x18012F010 (RtlAllocateMemoryBlockLookaside.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedPopEntrySList(PSLIST_HEADER ListHead)
{
  _SLIST_ENTRY *v1; // r8
  unsigned __int64 Alignment; // rbx
  _SLIST_HEADER v3; // rt0

  _m_prefetchw(ListHead);
  while ( 1 )
  {
    v1 = (_SLIST_ENTRY *)(ListHead->Region & 0xFFFFFFFFFFFFFFF0uLL);
    if ( !v1 )
      break;
    Alignment = ListHead->Alignment;
    v3 = *ListHead;
    LOWORD(Alignment) = ListHead->Alignment - 1;
    if ( _InterlockedCompareExchange128(
           (volatile signed __int64 *)ListHead,
           (signed __int64)v1->Next,
           Alignment,
           (signed __int64 *)&v3) )
    {
      return v1;
    }
  }
  _InterlockedOr64((volatile signed __int64 *)ListHead, 0LL);
  return v1;
}
