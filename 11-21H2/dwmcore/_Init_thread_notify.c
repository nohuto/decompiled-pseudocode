/*
 * XREFs of _Init_thread_notify @ 0x1801011D8
 * Callers:
 *     _Init_thread_footer @ 0x180101100 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( qword_1803D2DE8 )
    return qword_1803D2DE8(&unk_1803D2DA8);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
