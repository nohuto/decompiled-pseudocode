/*
 * XREFs of CrmStateMonitorPostShellReadyUsageCallback @ 0x18000A100
 * Callers:
 *     <none>
 * Callees:
 *     CrmLogStateMonitorStateSet @ 0x18000A2A0 (CrmLogStateMonitorStateSet.c)
 *     CrmStateMonitorLogDataGet @ 0x18000A4E0 (CrmStateMonitorLogDataGet.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CrmStateMonitorPostShellReadyUsageCallback(__int64 a1, int a2, unsigned int *a3)
{
  unsigned int v3; // esi
  __int64 v4; // rax
  unsigned int *v6; // rdi
  unsigned int v7; // ecx
  _DWORD *v8; // rax
  unsigned int *i; // rbx
  _DWORD v11[4]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v12[112]; // [rsp+30h] [rbp-88h] BYREF

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
        v11[0] = 1;
        CrmStateMonitorLogDataGet(v6, v12, v11);
        **((_DWORD **)v6 + 5) = v11[0];
        for ( i = (unsigned int *)*((_QWORD *)v6 + 3); i != v6 + 6; i = *(unsigned int **)i )
          (*((void (__fastcall **)(unsigned int *, _QWORD, _DWORD *))i - 1))(i - 2, *v6, v11);
        CrmLogStateMonitorStateSet(v6, v12);
        goto LABEL_14;
      }
    }
  }
  v11[0] = 0;
LABEL_14:
  v6[4] = 0;
  return RtlReleaseSRWLockExclusive(v6 + 2);
}
