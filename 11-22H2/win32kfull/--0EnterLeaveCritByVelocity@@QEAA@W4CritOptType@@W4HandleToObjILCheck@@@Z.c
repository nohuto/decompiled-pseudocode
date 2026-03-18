/*
 * XREFs of ??0EnterLeaveCritByVelocity@@QEAA@W4CritOptType@@W4HandleToObjILCheck@@@Z @ 0x1C0070A7C
 * Callers:
 *     NtUserBuildPropList @ 0x1C006ED10 (NtUserBuildPropList.c)
 *     NtUserUnhookWinEvent @ 0x1C006F080 (NtUserUnhookWinEvent.c)
 *     NtUserSetWinEventHook @ 0x1C0070880 (NtUserSetWinEventHook.c)
 *     NtUserCallMsgFilter @ 0x1C0153EE0 (NtUserCallMsgFilter.c)
 *     NtUserUnhookWindowsHook @ 0x1C01DF2D0 (NtUserUnhookWindowsHook.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EnterLeaveCritByVelocity::EnterLeaveCritByVelocity(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8

  if ( (unsigned __int8)ShouldRunShared(a2) )
    EnterSharedCrit(v6, v5, v7);
  else
    EnterCrit(0LL, a3);
  return a1;
}
