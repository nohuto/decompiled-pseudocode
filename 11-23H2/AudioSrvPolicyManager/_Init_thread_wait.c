/*
 * XREFs of _Init_thread_wait @ 0x180016F6C
 * Callers:
 *     _Init_thread_header @ 0x180016EA8 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( qword_180061310 )
  {
    qword_180061310(&unk_1800612D8, &stru_1800612E8, dwMilliseconds);
  }
  else
  {
    LeaveCriticalSection(&stru_1800612E8);
    WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
    EnterCriticalSection(&stru_1800612E8);
  }
}
