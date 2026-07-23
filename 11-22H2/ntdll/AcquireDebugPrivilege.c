/*
 * XREFs of AcquireDebugPrivilege @ 0x18012B6A8
 * Callers:
 *     GetProcessIptTrace @ 0x18012B6DC (GetProcessIptTrace.c)
 *     GetProcessIptTraceSize @ 0x18012B838 (GetProcessIptTraceSize.c)
 * Callees:
 *     RtlAcquirePrivilege @ 0x180078DC0 (RtlAcquirePrivilege.c)
 */

bool __fastcall AcquireDebugPrivilege(PVOID *ReturnedState)
{
  ULONG Privilege; // [rsp+38h] [rbp+10h] BYREF

  Privilege = 20;
  return RtlAcquirePrivilege(&Privilege, 1u, 0, ReturnedState) >= 0;
}
