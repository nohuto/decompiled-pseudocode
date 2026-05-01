/*
 * XREFs of _Init_thread_notify @ 0x18004AFC8
 * Callers:
 *     _Init_thread_footer @ 0x18004AEF0 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( qword_180062B18 )
    return qword_180062B18(&unk_180062AD8);
  SetEvent(hObject);
  return ResetEvent(hObject);
}
