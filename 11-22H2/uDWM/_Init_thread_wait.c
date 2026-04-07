/*
 * XREFs of _Init_thread_wait @ 0x18005CD94
 * Callers:
 *     _Init_thread_header @ 0x18005CCD0 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( qword_1801481E0 )
  {
    qword_1801481E0(&unk_1801481A8, &CriticalSection, dwMilliseconds);
  }
  else
  {
    LeaveCriticalSection(&CriticalSection);
    WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
    EnterCriticalSection(&CriticalSection);
  }
}
