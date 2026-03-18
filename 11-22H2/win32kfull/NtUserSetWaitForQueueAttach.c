/*
 * XREFs of NtUserSetWaitForQueueAttach @ 0x1C01DD0E0
 * Callers:
 *     <none>
 * Callees:
 *     _SetWaitForQueueAttach @ 0x1C01B3660 (_SetWaitForQueueAttach.c)
 */

__int64 __fastcall NtUserSetWaitForQueueAttach(int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  EnterCrit(0LL, 0LL);
  v2 = (int)SetWaitForQueueAttach(a1);
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v2;
}
