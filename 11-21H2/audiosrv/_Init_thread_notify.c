/*
 * XREFs of _Init_thread_notify @ 0x18005F2A8
 * Callers:
 *     _Init_thread_footer @ 0x18005F1D0 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( qword_1801C2188 )
    return qword_1801C2188(&unk_1801C2148);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
