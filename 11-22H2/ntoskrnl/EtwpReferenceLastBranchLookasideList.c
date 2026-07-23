/*
 * XREFs of EtwpReferenceLastBranchLookasideList @ 0x1409F050C
 * Callers:
 *     EtwpUpdateLastBranchTracingConfiguration @ 0x1409F058C (EtwpUpdateLastBranchTracingConfiguration.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140428830 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

_SLIST_ENTRY *EtwpReferenceLastBranchLookasideList()
{
  __int64 v0; // rdi
  int v1; // ebx
  _SLIST_ENTRY *result; // rax

  v0 = (unsigned int)(24 * EtwpLastBranchStackSize + 16);
  v1 = 2 * KeNumberProcessors_0 * _InterlockedIncrement(&dword_140C6B4B0);
  do
  {
    result = (_SLIST_ENTRY *)ExAllocatePool2(64LL, v0, 2021094469LL);
    if ( !result )
      break;
    RtlpInterlockedPushEntrySList(&EtwpLastBranchLookAsideList, result);
    result = (_SLIST_ENTRY *)(unsigned int)_InterlockedIncrement(&dword_140C6B4B4);
  }
  while ( (int)result < v1 );
  return result;
}
