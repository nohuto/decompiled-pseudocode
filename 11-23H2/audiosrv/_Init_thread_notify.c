/*
 * XREFs of _Init_thread_notify @ 0x180067328
 * Callers:
 *     _Init_thread_footer @ 0x180067250 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( qword_1801CF668 )
    return qword_1801CF668(&unk_1801CF628);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
