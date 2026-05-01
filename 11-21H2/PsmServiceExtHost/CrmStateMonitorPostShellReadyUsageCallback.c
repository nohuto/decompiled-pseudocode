/*
 * XREFs of CrmStateMonitorPostShellReadyUsageCallback @ 0x18002EA80
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorLogDataGet @ 0x18002EEE0 (CrmStateMonitorLogDataGet.c)
 *     CrmLogStateMonitorStateSet @ 0x18002EFA0 (CrmLogStateMonitorStateSet.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CrmStateMonitorPostShellReadyUsageCallback(__int64 a1, int a2, unsigned int *a3)
{
  unsigned int v3; // esi
  __int64 v4; // rax
  unsigned int *v6; // rdi
  unsigned int v7; // ecx
  _DWORD *v8; // rax
  unsigned int *i; // rbx
  int v11; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v12[56]; // [rsp+28h] [rbp-50h] BYREF

  v3 = *a3;
  v4 = 88LL;
  if ( a2 != 24 )
    v4 = 112LL;
  v6 = (unsigned int *)(a1 - v4);
  RtlAcquireSRWLockExclusive(a1 - v4 + 8);
  v6[4] = GetCurrentThreadId();
  if ( a2 == 24 )
    v6[(v6[40]++ & 3) + 36] = v3;
  else
    v6[(v6[45]++ & 3) + 41] = v3;
  if ( v6[40] >= 4 && v6[45] >= 4 )
  {
    v7 = 0;
    v8 = v6 + 41;
    while ( *(v8 - 5) <= 0x1Eu && *v8 <= 0x1Eu )
    {
      ++v7;
      ++v8;
      if ( v7 >= 4 )
      {
        v11 = 1;
        CrmStateMonitorLogDataGet(v6, v12, &v11);
        **((_DWORD **)v6 + 5) = v11;
        for ( i = (unsigned int *)*((_QWORD *)v6 + 3); i != v6 + 6; i = *(unsigned int **)i )
          (*((void (__fastcall **)(unsigned int *, _QWORD, int *))i - 1))(i - 2, *v6, &v11);
        CrmLogStateMonitorStateSet(v6, v12);
        goto LABEL_15;
      }
    }
  }
  v11 = 0;
LABEL_15:
  v6[4] = 0;
  return RtlReleaseSRWLockExclusive(v6 + 2);
}
