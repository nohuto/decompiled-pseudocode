/*
 * XREFs of NtUserGetUnpredictedMessagePos @ 0x1C01F6C20
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtUserGetUnpredictedMessagePos(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rcx
  unsigned int v5; // ebx

  EnterSharedCrit(a1, a2, a3);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v4 = *(unsigned __int16 *)(ThreadWin32Thread + 1324);
  v5 = v4 | (*(unsigned __int16 *)(ThreadWin32Thread + 1328) << 16);
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
