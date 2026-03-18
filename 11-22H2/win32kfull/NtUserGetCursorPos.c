/*
 * XREFs of NtUserGetCursorPos @ 0x1C0042FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z @ 0x1C004301C (-xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z.c)
 */

__int64 __fastcall NtUserGetCursorPos(struct tagPOINT *a1, unsigned int a2)
{
  __int64 CursorPos; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  EnterSharedCrit();
  CursorPos = (int)xxxGetCursorPos(a1, a2);
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return CursorPos;
}
