/*
 * XREFs of _Init_thread_notify @ 0x180060940
 * Callers:
 *     _Init_thread_abort @ 0x180060830 (_Init_thread_abort.c)
 *     _Init_thread_footer @ 0x180060868 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( qword_180142A68 )
    return qword_180142A68(&unk_180142A28);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
