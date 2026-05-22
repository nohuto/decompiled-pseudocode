/*
 * XREFs of _Init_thread_notify @ 0x18004AE40
 * Callers:
 *     _Init_thread_abort @ 0x18004AD30 (_Init_thread_abort.c)
 *     _Init_thread_footer @ 0x18004AD68 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( qword_180242650 )
    return qword_180242650(&unk_180242610);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
