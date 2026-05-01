/*
 * XREFs of _Init_thread_wait @ 0x18004B01C
 * Callers:
 *     _Init_thread_header @ 0x18004AF58 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( qword_180062B10 )
  {
    qword_180062B10(&unk_180062AD8, &stru_180062AE8, dwMilliseconds);
  }
  else
  {
    LeaveCriticalSection(&stru_180062AE8);
    WaitForSingleObjectEx(hObject, dwMilliseconds, 0);
    EnterCriticalSection(&stru_180062AE8);
  }
}
