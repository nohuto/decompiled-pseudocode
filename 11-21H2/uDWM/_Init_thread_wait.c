/*
 * XREFs of _Init_thread_wait @ 0x180060994
 * Callers:
 *     _Init_thread_header @ 0x1800608D0 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( qword_180142A60 )
  {
    qword_180142A60(&unk_180142A28, &CriticalSection, dwMilliseconds);
  }
  else
  {
    LeaveCriticalSection(&CriticalSection);
    WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
    EnterCriticalSection(&CriticalSection);
  }
}
