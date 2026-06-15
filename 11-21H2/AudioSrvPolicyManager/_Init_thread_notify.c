/*
 * XREFs of _Init_thread_notify @ 0x180002DB8
 * Callers:
 *     _Init_thread_footer @ 0x180002CE0 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( qword_18005C298 )
    return qword_18005C298(&unk_18005C258);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
