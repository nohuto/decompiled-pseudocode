/*
 * XREFs of _Init_thread_wait @ 0x18000C664
 * Callers:
 *     _Init_thread_header @ 0x18000C5A0 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( qword_1801D3210 )
  {
    qword_1801D3210(&unk_1801D31D8, &CriticalSection, dwMilliseconds);
  }
  else
  {
    LeaveCriticalSection(&CriticalSection);
    WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
    EnterCriticalSection(&CriticalSection);
  }
}
