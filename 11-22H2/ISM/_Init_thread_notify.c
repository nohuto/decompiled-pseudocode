/*
 * XREFs of _Init_thread_notify @ 0x180057A10
 * Callers:
 *     _Init_thread_abort @ 0x180057900 (_Init_thread_abort.c)
 *     _Init_thread_footer @ 0x180057938 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( qword_1802776B0 )
    return qword_1802776B0(&unk_180277670);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
