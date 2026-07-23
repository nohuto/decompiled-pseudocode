/*
 * XREFs of EtwpReferenceLastBranchLookasideList @ 0x1409F06EC
 * Callers:
 *     EtwpUpdateLastBranchTracingConfiguration @ 0x1409F076C (EtwpUpdateLastBranchTracingConfiguration.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140429280 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

_SLIST_ENTRY *EtwpReferenceLastBranchLookasideList()
{
  __int64 v0; // rdi
  int v1; // ebx
  _SLIST_ENTRY *result; // rax

  v0 = (unsigned int)(24 * EtwpLastBranchStackSize + 16);
  v1 = 2 * KeNumberProcessors_0 * _InterlockedIncrement(&dword_140C6B3F0);
  do
  {
    result = (_SLIST_ENTRY *)ExAllocatePool2(64LL, v0, 2021094469LL);
    if ( !result )
      break;
    RtlpInterlockedPushEntrySList(&EtwpLastBranchLookAsideList, result);
    result = (_SLIST_ENTRY *)(unsigned int)_InterlockedIncrement(&dword_140C6B3F4);
  }
  while ( (int)result < v1 );
  return result;
}
