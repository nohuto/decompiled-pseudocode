/*
 * XREFs of _Init_thread_notify @ 0x180189900
 * Callers:
 *     _Init_thread_abort @ 0x1801897F0 (_Init_thread_abort.c)
 *     _Init_thread_footer @ 0x180189828 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( qword_1807B2F70 )
    return qword_1807B2F70(&unk_1807B2F30);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
