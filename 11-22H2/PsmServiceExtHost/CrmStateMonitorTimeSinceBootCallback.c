/*
 * XREFs of CrmStateMonitorTimeSinceBootCallback @ 0x180008FB0
 * Callers:
 *     <none>
 * Callees:
 *     CrmLogStateMonitorStateSet @ 0x18000A2A0 (CrmLogStateMonitorStateSet.c)
 *     CrmStateMonitorLogDataGet @ 0x18000A4E0 (CrmStateMonitorLogDataGet.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CrmStateMonitorTimeSinceBootCallback(__int64 a1, unsigned int *a2, __int64 a3)
{
  _QWORD *v5; // rdi
  unsigned int *i; // rbx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // [rsp+20h] [rbp-E8h] BYREF
  _QWORD SystemInformation[7]; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v14[112]; // [rsp+60h] [rbp-A8h] BYREF

  NtQuerySystemInformation(SystemTimeOfDayInformation, SystemInformation, 0x30u, 0LL);
  v5 = a2 + 16;
  RtlAcquireSRWLockExclusive(a2 + 2);
  a2[4] = GetCurrentThreadId();
  CrmStateMonitorLogDataGet(a2, v14, a2 + 16);
  **((_QWORD **)a2 + 5) = *((_QWORD *)a2 + 8);
  for ( i = (unsigned int *)*((_QWORD *)a2 + 3); i != a2 + 6; i = *(unsigned int **)i )
    (*((void (__fastcall **)(unsigned int *, _QWORD, unsigned int *))i - 1))(i - 2, *a2, a2 + 16);
  a2[4] = 0;
  RtlReleaseSRWLockExclusive(a2 + 2);
  CrmLogStateMonitorStateSet(a2, v14);
  v7 = SystemInformation[0];
  v8 = SystemInformation[1];
  v9 = 20000000LL * *v5;
  *v5 *= 2LL;
  if ( v8 >= v9 + v7 )
    v10 = -1LL;
  else
    v10 = v8 - v9 - v7;
  v12 = v10;
  return TpSetTimer(a3, &v12, 0LL, 0LL);
}
