/*
 * XREFs of _Init_thread_notify @ 0x18010F9A8
 * Callers:
 *     _Init_thread_footer @ 0x18010F8D0 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( qword_1803E56C8 )
    return qword_1803E56C8(&unk_1803E5688);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
