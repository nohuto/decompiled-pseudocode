/*
 * XREFs of NtUserGetProcessDefaultLayout @ 0x1C01D34C0
 * Callers:
 *     <none>
 * Callees:
 *     _GetProcessDefaultLayout @ 0x1C01B3438 (_GetProcessDefaultLayout.c)
 */

__int64 __fastcall NtUserGetProcessDefaultLayout(_DWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 ProcessDefaultLayout; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  EnterCrit(0LL, 0LL);
  ProcessDefaultLayout = (int)GetProcessDefaultLayout(a1, v2, v3);
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return ProcessDefaultLayout;
}
