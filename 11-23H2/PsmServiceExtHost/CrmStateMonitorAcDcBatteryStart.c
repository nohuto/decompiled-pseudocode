/*
 * XREFs of CrmStateMonitorAcDcBatteryStart @ 0x1800089C0
 * Callers:
 *     CrmStateMonitorStart @ 0x1800095D8 (CrmStateMonitorStart.c)
 * Callees:
 *     CrmRegisterToStateMonitor @ 0x180009414 (CrmRegisterToStateMonitor.c)
 *     CrmStateMonitorStateSizeGet @ 0x18000A5A4 (CrmStateMonitorStateSizeGet.c)
 *     memcpy_0 @ 0x1800534A2 (memcpy_0.c)
 */

__int64 __fastcall CrmStateMonitorAcDcBatteryStart(unsigned int *a1)
{
  _DWORD *v1; // r9
  __int64 v3; // rcx
  unsigned int v4; // eax
  const void *v5; // r9
  void *v6; // r10
  __int64 result; // rax

  v1 = a1 + 14;
  *((_QWORD *)a1 + 5) = a1 + 14;
  a1[15] = -1;
  v3 = *a1;
  *v1 = -1;
  v4 = CrmStateMonitorStateSizeGet(v3);
  memcpy_0(v6, v5, v4);
  result = CrmRegisterToStateMonitor(a1 + 16, 4LL);
  if ( (int)result >= 0 )
  {
    result = CrmRegisterToStateMonitor(a1 + 22, 5LL);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
