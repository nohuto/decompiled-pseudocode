/*
 * XREFs of _Init_thread_notify @ 0x180017108
 * Callers:
 *     _Init_thread_footer @ 0x180017030 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( qword_180063398 )
    return qword_180063398(&unk_180063358);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
