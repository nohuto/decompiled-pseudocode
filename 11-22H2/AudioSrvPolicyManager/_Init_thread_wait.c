/*
 * XREFs of _Init_thread_wait @ 0x18001715C
 * Callers:
 *     _Init_thread_header @ 0x180017098 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( qword_180063390 )
  {
    qword_180063390(&unk_180063358, &stru_180063368, dwMilliseconds);
  }
  else
  {
    LeaveCriticalSection(&stru_180063368);
    WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
    EnterCriticalSection(&stru_180063368);
  }
}
