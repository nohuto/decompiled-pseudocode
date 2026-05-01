/*
 * XREFs of _Init_thread_notify @ 0x18004BEB8
 * Callers:
 *     _Init_thread_footer @ 0x18004BDE0 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( qword_180064B18 )
    return qword_180064B18(&unk_180064AD8);
  SetEvent(hObject);
  return ResetEvent(hObject);
}
