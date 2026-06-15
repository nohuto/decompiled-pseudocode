/*
 * XREFs of _Init_thread_wait @ 0x18005F2FC
 * Callers:
 *     _Init_thread_header @ 0x18005F238 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( qword_1801C2180 )
  {
    qword_1801C2180(&unk_1801C2148, &stru_1801C2158, dwMilliseconds);
  }
  else
  {
    LeaveCriticalSection(&stru_1801C2158);
    WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
    EnterCriticalSection(&stru_1801C2158);
  }
}
