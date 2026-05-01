/*
 * XREFs of CrmStateMonitorTimeSinceLogonCallback @ 0x180009100
 * Callers:
 *     <none>
 * Callees:
 *     CrmLogStateMonitorStateSet @ 0x18000A2A0 (CrmLogStateMonitorStateSet.c)
 *     CrmStateMonitorLogDataGet @ 0x18000A4E0 (CrmStateMonitorLogDataGet.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CrmStateMonitorTimeSinceLogonCallback(__int64 a1, unsigned int *a2, __int64 a3)
{
  _QWORD *v5; // rdi
  unsigned int *i; // rbx
  __int64 v7; // rdx
  __int64 v9; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v10[112]; // [rsp+30h] [rbp-A8h] BYREF

  v5 = a2 + 16;
  RtlAcquireSRWLockExclusive(a2 + 2);
  a2[4] = GetCurrentThreadId();
  CrmStateMonitorLogDataGet(a2, v10, v5);
  **((_QWORD **)a2 + 5) = *v5;
  for ( i = (unsigned int *)*((_QWORD *)a2 + 3); i != a2 + 6; i = *(unsigned int **)i )
    (*((void (__fastcall **)(unsigned int *, _QWORD, _QWORD *))i - 1))(i - 2, *a2, v5);
  a2[4] = 0;
  RtlReleaseSRWLockExclusive(a2 + 2);
  CrmLogStateMonitorStateSet(a2, v10);
  v7 = *v5;
  *v5 *= 2LL;
  v9 = -10000000 * v7;
  return TpSetTimer(a3, &v9, 0LL, 0LL);
}
