/*
 * XREFs of CrmStateMonitorSystemDiskUsageTimerCallback @ 0x18002ED70
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorLogDataGet @ 0x18002EEE0 (CrmStateMonitorLogDataGet.c)
 *     CrmLogStateMonitorStateSet @ 0x18002EFA0 (CrmLogStateMonitorStateSet.c)
 *     CrmStateMonitorSystemDiskUsageIdleTimeGet @ 0x18002F144 (CrmStateMonitorSystemDiskUsageIdleTimeGet.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CrmStateMonitorSystemDiskUsageTimerCallback(__int64 a1, unsigned int *a2)
{
  __int64 v3; // rbp
  unsigned __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned int *i; // rbx
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-78h] BYREF
  __int64 v12; // [rsp+28h] [rbp-70h] BYREF
  __int64 v13; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v14[56]; // [rsp+38h] [rbp-60h] BYREF

  if ( (int)CrmStateMonitorSystemDiskUsageIdleTimeGet(a2, &v13) < 0 )
    v3 = -1LL;
  else
    v3 = v13;
  RtlQueryUnbiasedInterruptTime(&v12);
  v4 = v12 - *((_QWORD *)a2 + 13);
  v5 = *((_QWORD *)a2 + 14);
  if ( v5 == -1 || v3 == -1 )
  {
    v6 = 0LL;
    goto LABEL_6;
  }
  v6 = v3 - v5;
  if ( v4 >= v3 - v5 )
  {
LABEL_6:
    v7 = v4 - v6;
    goto LABEL_7;
  }
  v7 = 0LL;
LABEL_7:
  if ( v4 )
    v8 = 100 * v7 / v4;
  else
    LODWORD(v8) = 100;
  v11 = v8;
  RtlAcquireSRWLockExclusive(a2 + 2);
  a2[4] = GetCurrentThreadId();
  CrmStateMonitorLogDataGet(a2, v14, &v11);
  **((_DWORD **)a2 + 5) = v11;
  for ( i = (unsigned int *)*((_QWORD *)a2 + 3); i != a2 + 6; i = *(unsigned int **)i )
    (*((void (__fastcall **)(unsigned int *, _QWORD, int *))i - 1))(i - 2, *a2, &v11);
  a2[4] = 0;
  RtlReleaseSRWLockExclusive(a2 + 2);
  CrmLogStateMonitorStateSet(a2, v14);
  result = v12;
  *((_QWORD *)a2 + 13) = v12;
  *((_QWORD *)a2 + 14) = v3;
  return result;
}
