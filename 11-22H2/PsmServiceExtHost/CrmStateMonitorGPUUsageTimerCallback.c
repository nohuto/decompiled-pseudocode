/*
 * XREFs of CrmStateMonitorGPUUsageTimerCallback @ 0x180009220
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorGPUUsageQuery @ 0x180009374 (CrmStateMonitorGPUUsageQuery.c)
 *     CrmLogStateMonitorStateSet @ 0x18000A2A0 (CrmLogStateMonitorStateSet.c)
 *     CrmStateMonitorLogDataGet @ 0x18000A4E0 (CrmStateMonitorLogDataGet.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CrmStateMonitorGPUUsageTimerCallback(__int64 a1, unsigned int *a2)
{
  int v3; // eax
  __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned int *i; // rsi
  __int64 result; // rax
  int v10; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v11; // [rsp+28h] [rbp-B0h] BYREF
  __int64 v12; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v13[112]; // [rsp+40h] [rbp-98h] BYREF

  v3 = CrmStateMonitorGPUUsageQuery(&v12);
  v4 = v12;
  if ( v3 < 0 )
    v4 = -1LL;
  RtlQueryUnbiasedInterruptTime(&v11);
  v5 = v11 - *((_QWORD *)a2 + 12);
  if ( v4 == -1 || *((_QWORD *)a2 + 13) == -1LL )
    v6 = v11 - *((_QWORD *)a2 + 12);
  else
    v6 = v4 - *((_QWORD *)a2 + 13);
  if ( v5 )
    v7 = 100 * v6 / v5;
  else
    LODWORD(v7) = 100;
  v10 = v7;
  RtlAcquireSRWLockExclusive(a2 + 2);
  a2[4] = GetCurrentThreadId();
  CrmStateMonitorLogDataGet(a2, v13, &v10);
  **((_DWORD **)a2 + 5) = v10;
  for ( i = (unsigned int *)*((_QWORD *)a2 + 3); i != a2 + 6; i = *(unsigned int **)i )
    (*((void (__fastcall **)(unsigned int *, _QWORD, int *))i - 1))(i - 2, *a2, &v10);
  a2[4] = 0;
  RtlReleaseSRWLockExclusive(a2 + 2);
  CrmLogStateMonitorStateSet(a2, v13);
  result = v11;
  *((_QWORD *)a2 + 12) = v11;
  *((_QWORD *)a2 + 13) = v4;
  return result;
}
