/*
 * XREFs of _Init_thread_wait @ 0x140028884
 * Callers:
 *     _Init_thread_header @ 0x1400287C0 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( qword_1400CF140 )
  {
    qword_1400CF140(&unk_1400CF108, &CriticalSection, dwMilliseconds);
  }
  else
  {
    LeaveCriticalSection(&CriticalSection);
    WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
    EnterCriticalSection(&CriticalSection);
  }
}
