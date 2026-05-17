/*
 * XREFs of AcquireDebugPrivilege @ 0x180126BA8
 * Callers:
 *     GetProcessIptTraceSize @ 0x1800610A0 (GetProcessIptTraceSize.c)
 *     GetProcessIptTrace @ 0x180126BDC (GetProcessIptTrace.c)
 * Callees:
 *     RtlAcquirePrivilege @ 0x18007F810 (RtlAcquirePrivilege.c)
 */

bool __fastcall AcquireDebugPrivilege(_QWORD *a1)
{
  int v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 20;
  return (int)RtlAcquirePrivilege(&v2, 1u, 0, a1) >= 0;
}
