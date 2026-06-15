/*
 * XREFs of _Init_thread_wait @ 0x18006736C
 * Callers:
 *     _Init_thread_header @ 0x1800672A8 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( qword_1801CF660 )
  {
    qword_1801CF660(&unk_1801CF628, &stru_1801CF638, dwMilliseconds);
  }
  else
  {
    LeaveCriticalSection(&stru_1801CF638);
    WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
    EnterCriticalSection(&stru_1801CF638);
  }
}
