/*
 * XREFs of IoApplyPriorityInfoThread @ 0x1402BAE50
 * Callers:
 *     <none>
 * Callees:
 *     KeAbProcessBaseIoPriorityChange @ 0x1402078A4 (KeAbProcessBaseIoPriorityChange.c)
 *     KeSetActualBasePriorityThread @ 0x1402B98F0 (KeSetActualBasePriorityThread.c)
 *     EtwTracePriority @ 0x14046778E (EtwTracePriority.c)
 */

NTSTATUS __stdcall IoApplyPriorityInfoThread(
        PIO_PRIORITY_INFO InputPriorityInfo,
        PIO_PRIORITY_INFO OutputPriorityInfo,
        PETHREAD Thread)
{
  signed __int32 v6; // eax
  _IO_PRIORITY_HINT IoPriority; // ebp
  unsigned __int32 v8; // ebx
  int v9; // ebx
  unsigned int PagePriority; // r9d
  signed __int32 v11; // eax
  unsigned __int32 v12; // ebx
  int v13; // ebx
  unsigned int ThreadPriority; // edx
  struct _IO_PRIORITY_INFO v16; // [rsp+30h] [rbp-18h]

  if ( InputPriorityInfo->ThreadPriority == 0xFFFF )
    return -1073741585;
  v6 = *((_DWORD *)&Thread[1].SwapListEntry + 2);
  IoPriority = InputPriorityInfo->IoPriority;
  do
  {
    v8 = v6;
    v6 = _InterlockedCompareExchange(
           (volatile signed __int32 *)&Thread[1].SwapListEntry + 2,
           (IoPriority << 9) | v6 & 0xFFFFF1FF,
           v6);
  }
  while ( v6 != v8 );
  v9 = (v8 >> 9) & 7;
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority((_DWORD)Thread, 1332, v9, IoPriority, 0LL);
  if ( IoPriority != v9 )
    KeAbProcessBaseIoPriorityChange((__int64)Thread, v9, IoPriority);
  PagePriority = InputPriorityInfo->PagePriority;
  v16.IoPriority = v9;
  if ( PagePriority == -1 )
  {
    v16.PagePriority = -1;
  }
  else
  {
    v11 = *((_DWORD *)&Thread[1].SwapListEntry + 2);
    do
    {
      v12 = v11;
      v11 = _InterlockedCompareExchange(
              (volatile signed __int32 *)&Thread[1].SwapListEntry + 2,
              (PagePriority << 12) | v11 & 0xFFFF8FFF,
              v11);
    }
    while ( v11 != v12 );
    v13 = (v12 >> 12) & 7;
    if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
      EtwTracePriority((_DWORD)Thread, 1331, v13, PagePriority, 0LL);
    v16.PagePriority = v13;
  }
  ThreadPriority = InputPriorityInfo->ThreadPriority;
  if ( ThreadPriority == -1 )
  {
    v16.ThreadPriority = -1;
  }
  else
  {
    v16.ThreadPriority = Thread->BasePriority;
    KeSetActualBasePriorityThread((ULONG_PTR)Thread, ThreadPriority);
  }
  if ( OutputPriorityInfo )
  {
    v16.Size = 16;
    *OutputPriorityInfo = v16;
  }
  return 0;
}
