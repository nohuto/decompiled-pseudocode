/*
 * XREFs of _Init_thread_wait @ 0x18004AE94
 * Callers:
 *     _Init_thread_header @ 0x18004ADD0 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( qword_180242648 )
  {
    qword_180242648(&unk_180242610, &CriticalSection, dwMilliseconds);
  }
  else
  {
    LeaveCriticalSection(&CriticalSection);
    WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
    EnterCriticalSection(&CriticalSection);
  }
}
