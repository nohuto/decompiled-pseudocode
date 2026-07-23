/*
 * XREFs of sub_140881450 @ 0x140881450
 * Callers:
 *     sub_14053F590 @ 0x14053F590 (sub_14053F590.c)
 *     sub_14071F430 @ 0x14071F430 (sub_14071F430.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void sub_140881450()
{
  int v0; // eax

  if ( !BYTE1(NlsMbOemCodePageTag) )
  {
    if ( byte_140D00A10 )
    {
      v0 = dword_140C48DE0;
      if ( !dword_140C48DE0 && !_InterlockedCompareExchange(&dword_140C48DE0, 1, 0) )
        ExQueueWorkItem(&stru_140C48D40, (WORK_QUEUE_TYPE)(v0 + 1));
    }
  }
}
