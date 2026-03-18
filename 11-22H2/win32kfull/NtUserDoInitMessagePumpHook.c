/*
 * XREFs of NtUserDoInitMessagePumpHook @ 0x1C0015D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserDoInitMessagePumpHook()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9

  EnterCrit(0LL, 0LL);
  v0 = *(_QWORD *)(gptiCurrent + 448LL);
  ++*(_DWORD *)(v0 + 28);
  UserSessionSwitchLeaveCrit(gptiCurrent, v0, v1, v2);
  return 1LL;
}
