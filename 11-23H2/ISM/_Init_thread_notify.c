/*
 * XREFs of _Init_thread_notify @ 0x180056C80
 * Callers:
 *     _Init_thread_abort @ 0x180056B70 (_Init_thread_abort.c)
 *     _Init_thread_footer @ 0x180056BA8 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( qword_1802686B0 )
    return qword_1802686B0(&unk_180268670);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
