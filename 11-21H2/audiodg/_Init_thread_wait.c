/*
 * XREFs of _Init_thread_wait @ 0x140030004
 * Callers:
 *     _Init_thread_header @ 0x14002FF40 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( qword_1400C0FC0 )
  {
    qword_1400C0FC0(&unk_1400C0F88, &CriticalSection, dwMilliseconds);
  }
  else
  {
    LeaveCriticalSection(&CriticalSection);
    WaitForSingleObjectEx(hEvent, dwMilliseconds, 0);
    EnterCriticalSection(&CriticalSection);
  }
}
