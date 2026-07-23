/*
 * XREFs of ViGrowPoolAllocation @ 0x1405D0140
 * Callers:
 *     VfHandlePoolAlloc @ 0x140AD0FD0 (VfHandlePoolAlloc.c)
 * Callees:
 *     KeZeroSinglePage @ 0x140424990 (KeZeroSinglePage.c)
 *     RtlpInterlockedPopEntrySList @ 0x140429240 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140429280 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

PSLIST_ENTRY __fastcall ViGrowPoolAllocation(_SLIST_HEADER *a1)
{
  _SLIST_ENTRY *Pool2; // rax
  _SLIST_HEADER *v3; // rdi
  _SLIST_ENTRY *v4; // rbx
  __int64 v6; // rsi

  Pool2 = (_SLIST_ENTRY *)ExAllocatePool2(576LL, 4096LL, 1886414166LL);
  v3 = a1 + 5;
  v4 = Pool2;
  if ( !Pool2 )
    return RtlpInterlockedPopEntrySList(a1 + 5);
  KeZeroSinglePage(Pool2);
  *((_QWORD *)&v4->Next + 1) = a1;
  v4[1].Next = (_SLIST_ENTRY *)556929861;
  RtlpInterlockedPushEntrySList(a1 + 4, v4);
  v6 = 126LL;
  do
  {
    v4 += 2;
    v4[1].Next = (_SLIST_ENTRY *)1;
    RtlpInterlockedPushEntrySList(v3, v4);
    --v6;
  }
  while ( v6 );
  v4[3].Next = (_SLIST_ENTRY *)1;
  return v4 + 2;
}
