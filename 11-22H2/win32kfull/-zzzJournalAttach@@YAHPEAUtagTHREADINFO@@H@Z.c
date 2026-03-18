/*
 * XREFs of ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01BB5CC
 * Callers:
 *     zzzUnhookWindowsHookEx @ 0x1C006F404 (zzzUnhookWindowsHookEx.c)
 *     zzzSetWindowsHookEx @ 0x1C006F810 (zzzSetWindowsHookEx.c)
 *     NtUserRegisterSystemThread @ 0x1C01D9960 (NtUserRegisterSystemThread.c)
 * Callees:
 *     zzzReattachThreads @ 0x1C005C0B8 (zzzReattachThreads.c)
 */

__int64 __fastcall zzzJournalAttach(struct tagTHREADINFO *a1, int a2)
{
  __int64 result; // rax
  struct tagQ *v5; // r14
  _QWORD **v6; // rsi
  _QWORD *i; // rbx

  if ( a2 )
  {
    result = AllocQueue(a1, 0LL);
    v5 = (struct tagQ *)result;
    if ( !result )
      return result;
    v6 = (_QWORD **)(*((_QWORD *)a1 + 57) + 176LL);
    for ( i = *v6; i != v6; i = (_QWORD *)*i )
    {
      if ( (*(_DWORD *)(i - 32) & 0x81) == 0 )
        tagTHREADINFO::AssignAttachQueue((tagTHREADINFO *)(i - 93), v5);
    }
  }
  zzzReattachThreads(a2 != 0, 0LL, 0LL);
  return 1LL;
}
