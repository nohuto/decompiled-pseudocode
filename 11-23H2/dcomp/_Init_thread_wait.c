/*
 * XREFs of _Init_thread_wait @ 0x18009645C
 * Callers:
 *     _Init_thread_header @ 0x180096398 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( qword_18021C200 )
  {
    qword_18021C200(&unk_18021C1C8, &CriticalSection, dwMilliseconds);
  }
  else
  {
    LeaveCriticalSection(&CriticalSection);
    WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
    EnterCriticalSection(&CriticalSection);
  }
}
