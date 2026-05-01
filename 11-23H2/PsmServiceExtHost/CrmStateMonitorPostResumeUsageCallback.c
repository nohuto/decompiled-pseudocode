/*
 * XREFs of CrmStateMonitorPostResumeUsageCallback @ 0x18003F540
 * Callers:
 *     <none>
 * Callees:
 *     CrmLogStateMonitorStateSet @ 0x18000A2A0 (CrmLogStateMonitorStateSet.c)
 *     CrmStateMonitorLogDataGet @ 0x18000A4E0 (CrmStateMonitorLogDataGet.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CrmStateMonitorPostResumeUsageCallback(__int64 a1, int a2, unsigned int *a3)
{
  unsigned int v3; // esi
  __int64 v4; // rax
  unsigned int *v6; // rdi
  _DWORD *v7; // rdx
  _DWORD *v8; // rcx
  unsigned int v9; // ecx
  _DWORD *v10; // rax
  unsigned int *i; // rbx
  _DWORD v13[4]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v14[112]; // [rsp+30h] [rbp-88h] BYREF

  v3 = *a3;
  v4 = 96LL;
  if ( a2 != 24 )
    v4 = 120LL;
  v6 = (unsigned int *)(a1 - v4);
  RtlAcquireSRWLockExclusive(a1 - v4 + 8);
  v6[4] = GetCurrentThreadId();
  v7 = v6 + 47;
  v8 = v6 + 42;
  if ( a2 == 24 )
    v6[((*v8)++ & 3) + 38] = v3;
  else
    v6[((*v7)++ & 3) + 43] = v3;
  if ( *v8 >= 4u && *v7 >= 4u )
  {
    v9 = 0;
    v10 = v6 + 43;
    while ( *(v10 - 5) <= 0x1Eu && *v10 <= 0x1Eu )
    {
      ++v9;
      ++v10;
      if ( v9 >= 4 )
      {
        v13[0] = 1;
        CrmStateMonitorLogDataGet((const void **)v6, (__int64)v14, v13);
        **((_DWORD **)v6 + 5) = v13[0];
        for ( i = (unsigned int *)*((_QWORD *)v6 + 3); i != v6 + 6; i = *(unsigned int **)i )
          (*((void (__fastcall **)(unsigned int *, _QWORD, _DWORD *))i - 1))(i - 2, *v6, v13);
        CrmLogStateMonitorStateSet(v6, (__int64)v14);
        goto LABEL_15;
      }
    }
  }
  v13[0] = 0;
LABEL_15:
  v6[4] = 0;
  return RtlReleaseSRWLockExclusive(v6 + 2);
}
