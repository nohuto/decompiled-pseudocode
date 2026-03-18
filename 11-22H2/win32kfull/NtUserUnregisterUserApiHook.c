/*
 * XREFs of NtUserUnregisterUserApiHook @ 0x1C01DF320
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _UnregisterUserApiHook @ 0x1C0071F20 (_UnregisterUserApiHook.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 */

__int64 NtUserUnregisterUserApiHook()
{
  __int64 v0; // rcx
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  char v9; // [rsp+30h] [rbp+8h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v9);
  v1 = (int)UnregisterUserApiHook(v0);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v9, v2, v3);
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v1;
}
