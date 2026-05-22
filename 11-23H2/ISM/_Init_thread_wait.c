/*
 * XREFs of _Init_thread_wait @ 0x180056CD4
 * Callers:
 *     _Init_thread_header @ 0x180056C10 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( qword_1802686A8 )
  {
    qword_1802686A8(&unk_180268670, &CriticalSection, dwMilliseconds);
  }
  else
  {
    LeaveCriticalSection(&CriticalSection);
    WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
    EnterCriticalSection(&CriticalSection);
  }
}
