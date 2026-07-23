/*
 * XREFs of AcquireDebugPrivilege @ 0x180126BA8
 * Callers:
 *     GetProcessIptTraceSize @ 0x1800610A0 (GetProcessIptTraceSize.c)
 *     GetProcessIptTrace @ 0x180126BDC (GetProcessIptTrace.c)
 * Callees:
 *     RtlAcquirePrivilege @ 0x18007F810 (RtlAcquirePrivilege.c)
 */

bool __fastcall AcquireDebugPrivilege(PVOID *ReturnedState)
{
  ULONG Privilege; // [rsp+38h] [rbp+10h] BYREF

  Privilege = 20;
  return RtlAcquirePrivilege(&Privilege, 1u, 0, ReturnedState) >= 0;
}
