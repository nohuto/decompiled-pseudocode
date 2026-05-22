/*
 * XREFs of _Init_thread_wait @ 0x180057A64
 * Callers:
 *     _Init_thread_header @ 0x1800579A0 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( qword_1802776A8 )
  {
    qword_1802776A8(&unk_180277670, &CriticalSection, dwMilliseconds);
  }
  else
  {
    LeaveCriticalSection(&CriticalSection);
    WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
    EnterCriticalSection(&CriticalSection);
  }
}
