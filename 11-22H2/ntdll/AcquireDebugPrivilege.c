/*
 * XREFs of AcquireDebugPrivilege @ 0x18012B6A8
 * Callers:
 *     GetProcessIptTrace @ 0x18012B6DC (GetProcessIptTrace.c)
 *     GetProcessIptTraceSize @ 0x18012B838 (GetProcessIptTraceSize.c)
 * Callees:
 *     RtlAcquirePrivilege @ 0x180078DC0 (RtlAcquirePrivilege.c)
 */

bool __fastcall AcquireDebugPrivilege(_QWORD *a1)
{
  int v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 20;
  return (int)RtlAcquirePrivilege(&v2, 1u, 0, a1) >= 0;
}
