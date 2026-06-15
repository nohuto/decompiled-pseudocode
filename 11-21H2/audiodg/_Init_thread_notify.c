/*
 * XREFs of _Init_thread_notify @ 0x14002FFB0
 * Callers:
 *     _Init_thread_abort @ 0x14002FEA0 (_Init_thread_abort.c)
 *     _Init_thread_footer @ 0x14002FED8 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( qword_1400C0FC8 )
    return qword_1400C0FC8(&unk_1400C0F88);
  SetEvent(hEvent);
  return ResetEvent(hEvent);
}
