/*
 * XREFs of CrmStateMonitorSebCallback @ 0x18003B8F0
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorLogDataGet @ 0x18002EEE0 (CrmStateMonitorLogDataGet.c)
 *     CrmLogStateMonitorStateSet @ 0x18002EFA0 (CrmLogStateMonitorStateSet.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CrmStateMonitorSebCallback(__int64 a1, __int64 a2, __int64 a3, const void **a4, _QWORD *a5)
{
  _DWORD *v6; // rcx
  unsigned int *i; // rbx
  _BYTE v9[12]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v10[56]; // [rsp+30h] [rbp-48h] BYREF

  *(_DWORD *)v9 = 1;
  *(_QWORD *)&v9[4] = *a5;
  RtlAcquireSRWLockExclusive(a4 + 1);
  *((_DWORD *)a4 + 4) = GetCurrentThreadId();
  CrmStateMonitorLogDataGet(a4, (__int64)v10, v9);
  v6 = a4[5];
  *(_QWORD *)v6 = *(_QWORD *)v9;
  v6[2] = *(_DWORD *)&v9[8];
  for ( i = (unsigned int *)a4[3]; i != (unsigned int *)(a4 + 3); i = *(unsigned int **)i )
    (*((void (__fastcall **)(unsigned int *, _QWORD, _BYTE *))i - 1))(i - 2, *(unsigned int *)a4, v9);
  *((_DWORD *)a4 + 4) = 0;
  RtlReleaseSRWLockExclusive(a4 + 1);
  CrmLogStateMonitorStateSet((unsigned int *)a4, (__int64)v10);
  return 0LL;
}
