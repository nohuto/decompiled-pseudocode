/*
 * XREFs of NtUserCreateAcceleratorTable @ 0x1C00ABB40
 * Callers:
 *     <none>
 * Callees:
 *     _CreateAcceleratorTable @ 0x1C00ABC04 (_CreateAcceleratorTable.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall NtUserCreateAcceleratorTable(void *Src, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 CurrentProcessWow64Process; // rax
  __int64 *AcceleratorTable; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx

  v2 = a2;
  EnterCrit(0LL, 0LL);
  if ( (unsigned int)(v2 - 1) > 0x7FFE )
  {
    v10 = 0LL;
    UserSetLastError(87LL);
  }
  else
  {
    if ( v2 > 0x2AAAAAAAAAAAAAAALL )
      ExRaiseAccessViolation();
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
    ProbeForRead(Src, 6 * v2, CurrentProcessWow64Process != 0 ? 1 : 4);
    AcceleratorTable = (__int64 *)CreateAcceleratorTable(Src, (unsigned int)(6 * v2));
    v10 = 0LL;
    if ( AcceleratorTable )
      v10 = *AcceleratorTable;
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v10;
}
