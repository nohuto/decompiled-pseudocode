/*
 * XREFs of _Init_thread_wait @ 0x180189954
 * Callers:
 *     _Init_thread_header @ 0x180189890 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( qword_1807B2F68 )
  {
    qword_1807B2F68(&unk_1807B2F30, &stru_1807B2F40, dwMilliseconds);
  }
  else
  {
    LeaveCriticalSection(&stru_1807B2F40);
    WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
    EnterCriticalSection(&stru_1807B2F40);
  }
}
