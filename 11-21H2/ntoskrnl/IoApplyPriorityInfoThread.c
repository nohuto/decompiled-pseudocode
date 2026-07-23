/*
 * XREFs of IoApplyPriorityInfoThread @ 0x14028F280
 * Callers:
 *     <none>
 * Callees:
 *     sub_14028F63C @ 0x14028F63C (sub_14028F63C.c)
 *     sub_14028F698 @ 0x14028F698 (sub_14028F698.c)
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 */

NTSTATUS __stdcall IoApplyPriorityInfoThread(
        PIO_PRIORITY_INFO InputPriorityInfo,
        PIO_PRIORITY_INFO OutputPriorityInfo,
        PETHREAD Thread)
{
  struct _IO_PRIORITY_INFO v7; // [rsp+20h] [rbp-18h]

  if ( InputPriorityInfo->ThreadPriority == 0xFFFF )
    return -1073741585;
  v7.IoPriority = sub_14028F698(Thread, (unsigned int)InputPriorityInfo->IoPriority);
  if ( InputPriorityInfo->PagePriority == -1 )
    v7.PagePriority = -1;
  else
    v7.PagePriority = sub_14028F63C(Thread);
  if ( InputPriorityInfo->ThreadPriority == -1 )
  {
    v7.ThreadPriority = -1;
  }
  else
  {
    v7.ThreadPriority = *((char *)Thread + 563);
    KeSetActualBasePriorityThread((ULONG_PTR)Thread);
  }
  if ( OutputPriorityInfo )
  {
    v7.Size = 16;
    *OutputPriorityInfo = v7;
  }
  return 0;
}
