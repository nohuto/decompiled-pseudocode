/*
 * XREFs of CrmStateMonitorDisconnectedStandbyStart @ 0x1800487A4
 * Callers:
 *     CrmStateMonitorStart @ 0x1800095D8 (CrmStateMonitorStart.c)
 * Callees:
 *     CrmRegisterToStateMonitor @ 0x180009414 (CrmRegisterToStateMonitor.c)
 *     CrmStateMonitorStateSizeGet @ 0x18000A5A4 (CrmStateMonitorStateSizeGet.c)
 *     memcpy_0 @ 0x1800534A2 (memcpy_0.c)
 */

__int64 __fastcall CrmStateMonitorDisconnectedStandbyStart(__int64 a1)
{
  unsigned int v2; // eax
  const void *v3; // r9
  void *v4; // r10
  __int64 result; // rax

  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 40) = a1 + 56;
  v2 = CrmStateMonitorStateSizeGet(*(_DWORD *)a1);
  memcpy_0(v4, v3, v2);
  result = CrmRegisterToStateMonitor(a1 + 64, 8);
  if ( (int)result >= 0 )
    return CrmRegisterToStateMonitor(a1 + 88, 30);
  return result;
}
