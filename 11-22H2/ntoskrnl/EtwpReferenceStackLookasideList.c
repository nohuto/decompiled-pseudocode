/*
 * XREFs of EtwpReferenceStackLookasideList @ 0x1409E8C0C
 * Callers:
 *     EtwpEnableGuid @ 0x140780210 (EtwpEnableGuid.c)
 *     EtwpInitializeClassicStackTracing @ 0x1409E8B84 (EtwpInitializeClassicStackTracing.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140428830 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

_SLIST_ENTRY *EtwpReferenceStackLookasideList()
{
  int v0; // ebx
  _SLIST_ENTRY *result; // rax

  v0 = 2 * KeNumberProcessors_0 * _InterlockedIncrement(&dword_140C6B4D0);
  do
  {
    result = (_SLIST_ENTRY *)ExAllocatePool2(64LL, 2080LL, 1819767877LL);
    if ( !result )
      break;
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, result);
    result = (_SLIST_ENTRY *)(unsigned int)_InterlockedIncrement(&dword_140C6B4D4);
  }
  while ( (int)result < v0 );
  return result;
}
