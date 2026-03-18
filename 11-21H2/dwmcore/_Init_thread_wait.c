/*
 * XREFs of _Init_thread_wait @ 0x18010122C
 * Callers:
 *     _Init_thread_header @ 0x180101168 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( qword_1803D2DE0 )
  {
    qword_1803D2DE0(&unk_1803D2DA8, &stru_1803D2DB8, dwMilliseconds);
  }
  else
  {
    LeaveCriticalSection(&stru_1803D2DB8);
    WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
    EnterCriticalSection(&stru_1803D2DB8);
  }
}
