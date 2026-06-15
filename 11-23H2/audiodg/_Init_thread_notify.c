/*
 * XREFs of _Init_thread_notify @ 0x140028830
 * Callers:
 *     _Init_thread_abort @ 0x140028720 (_Init_thread_abort.c)
 *     _Init_thread_footer @ 0x140028758 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( qword_1400CF148 )
    return qword_1400CF148(&unk_1400CF108);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
