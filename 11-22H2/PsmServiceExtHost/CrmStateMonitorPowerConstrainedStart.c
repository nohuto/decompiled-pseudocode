/*
 * XREFs of CrmStateMonitorPowerConstrainedStart @ 0x1800485D0
 * Callers:
 *     CrmStateMonitorStart @ 0x1800095D8 (CrmStateMonitorStart.c)
 * Callees:
 *     CrmRegisterToStateMonitor @ 0x180009414 (CrmRegisterToStateMonitor.c)
 *     CrmStateMonitorStateSizeGet @ 0x18000A5A4 (CrmStateMonitorStateSizeGet.c)
 *     memcpy_0 @ 0x1800536E2 (memcpy_0.c)
 */

__int64 __fastcall CrmStateMonitorPowerConstrainedStart(__int64 a1)
{
  _DWORD *v1; // r9
  int v3; // ecx
  unsigned int v4; // eax
  const void *v5; // r9
  void *v6; // r10
  __int64 result; // rax

  v1 = (_DWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 40) = a1 + 56;
  *(_DWORD *)(a1 + 64) = 0;
  v3 = *(_DWORD *)a1;
  *v1 = 0;
  v4 = CrmStateMonitorStateSizeGet(v3);
  memcpy_0(v6, v5, v4);
  result = CrmRegisterToStateMonitor(a1 + 96, 4);
  if ( (int)result >= 0 )
  {
    result = CrmRegisterToStateMonitor(a1 + 120, 23);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
