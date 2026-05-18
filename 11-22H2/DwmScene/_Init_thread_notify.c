/*
 * XREFs of _Init_thread_notify @ 0x18000C610
 * Callers:
 *     _Init_thread_abort @ 0x18000C500 (_Init_thread_abort.c)
 *     _Init_thread_footer @ 0x18000C538 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( qword_1801D3218 )
    return qword_1801D3218(&unk_1801D31D8);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
