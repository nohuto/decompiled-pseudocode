/*
 * XREFs of _Init_thread_wait @ 0x180002E0C
 * Callers:
 *     _Init_thread_header @ 0x180002D48 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( qword_18005C290 )
  {
    qword_18005C290(&unk_18005C258, &stru_18005C268, dwMilliseconds);
  }
  else
  {
    LeaveCriticalSection(&stru_18005C268);
    WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
    EnterCriticalSection(&stru_18005C268);
  }
}
