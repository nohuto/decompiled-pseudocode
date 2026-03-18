/*
 * XREFs of _Init_thread_wait @ 0x18010F9FC
 * Callers:
 *     _Init_thread_header @ 0x18010F938 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( qword_1803E56C0 )
  {
    qword_1803E56C0(&unk_1803E5688, &stru_1803E5698, dwMilliseconds);
  }
  else
  {
    LeaveCriticalSection(&stru_1803E5698);
    WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
    EnterCriticalSection(&stru_1803E5698);
  }
}
