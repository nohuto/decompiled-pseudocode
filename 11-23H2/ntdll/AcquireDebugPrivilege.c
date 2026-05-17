/*
 * XREFs of AcquireDebugPrivilege @ 0x18012CB9C
 * Callers:
 *     GetProcessIptTrace @ 0x18012CBD0 (GetProcessIptTrace.c)
 *     GetProcessIptTraceSize @ 0x18012CD2C (GetProcessIptTraceSize.c)
 * Callees:
 *     RtlAcquirePrivilege @ 0x180079430 (RtlAcquirePrivilege.c)
 */

bool __fastcall AcquireDebugPrivilege(_QWORD *a1)
{
  int v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 20;
  return (int)RtlAcquirePrivilege(&v2, 1u, 0, a1) >= 0;
}
