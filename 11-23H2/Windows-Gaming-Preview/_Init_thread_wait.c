/*
 * XREFs of _Init_thread_wait @ 0x18004BF0C
 * Callers:
 *     _Init_thread_header @ 0x18004BE48 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( qword_180064B10 )
  {
    qword_180064B10(&unk_180064AD8, &stru_180064AE8, dwMilliseconds);
  }
  else
  {
    LeaveCriticalSection(&stru_180064AE8);
    WaitForSingleObjectEx(hObject, dwMilliseconds, 0);
    EnterCriticalSection(&stru_180064AE8);
  }
}
