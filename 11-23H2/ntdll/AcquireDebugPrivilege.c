/*
 * XREFs of AcquireDebugPrivilege @ 0x18012CBC8
 * Callers:
 *     GetProcessIptTrace @ 0x18012CBFC (GetProcessIptTrace.c)
 *     GetProcessIptTraceSize @ 0x18012CD58 (GetProcessIptTraceSize.c)
 * Callees:
 *     RtlAcquirePrivilege @ 0x180079430 (RtlAcquirePrivilege.c)
 */

bool __fastcall AcquireDebugPrivilege(PVOID *ReturnedState)
{
  ULONG Privilege; // [rsp+38h] [rbp+10h] BYREF

  Privilege = 20;
  return RtlAcquirePrivilege(&Privilege, 1u, 0, ReturnedState) >= 0;
}
