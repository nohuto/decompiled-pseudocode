/*
 * XREFs of _Init_thread_notify @ 0x180096408
 * Callers:
 *     _Init_thread_footer @ 0x180096330 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( qword_18021C208 )
    return qword_18021C208(&unk_18021C1C8);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
