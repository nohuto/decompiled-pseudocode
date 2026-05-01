/*
 * XREFs of CrmStateMonitorListenerAdd @ 0x18006E1A0
 * Callers:
 *     CrmRegisterToStateMonitor @ 0x180009414 (CrmRegisterToStateMonitor.c)
 *     CrmActivityStart @ 0x18002B870 (CrmActivityStart.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 */

int __fastcall CrmStateMonitorListenerAdd(unsigned int *a1, __int64 a2, int a3)
{
  unsigned int **v6; // rdx
  unsigned int *v7; // rax
  __int64 v8; // rax
  int v10; // [rsp+30h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+40h] [rbp-68h] BYREF
  UUID *v12; // [rsp+60h] [rbp-48h]
  int v13; // [rsp+68h] [rbp-40h]
  int v14; // [rsp+6Ch] [rbp-3Ch]
  int *v15; // [rsp+70h] [rbp-38h]
  int v16; // [rsp+78h] [rbp-30h]
  int v17; // [rsp+7Ch] [rbp-2Ch]

  RtlAcquireSRWLockExclusive(a1 + 2);
  a1[4] = GetCurrentThreadId();
  v6 = (unsigned int **)*((_QWORD *)a1 + 4);
  v7 = (unsigned int *)(a2 + 8);
  if ( *v6 != a1 + 6 )
    __fastfail(3u);
  *(_QWORD *)v7 = a1 + 6;
  *(_QWORD *)(a2 + 16) = v6;
  *v6 = v7;
  *((_QWORD *)a1 + 4) = v7;
  if ( a3 == 1 )
  {
    dword_1800DC048 = 0;
    RtlReleaseSRWLockExclusive(&CrmGlobals);
  }
  else if ( a3 == 2 )
  {
    RtlReleaseSRWLockShared(&CrmGlobals);
  }
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))a2)(a2, *a1, *((_QWORD *)a1 + 5));
  a1[4] = 0;
  LODWORD(v8) = RtlReleaseSRWLockExclusive(a1 + 2);
  if ( (unsigned int)dword_1800DB250 > 5 && (qword_1800DB260 & 8) != 0 )
  {
    v8 = qword_1800DB268 & 8;
    if ( v8 == qword_1800DB268 )
    {
      v14 = 0;
      v17 = 0;
      v12 = &Uuid;
      v10 = *a1;
      v16 = 4;
      v15 = &v10;
      v13 = 16;
      LODWORD(v8) = tlgWriteTransfer_EventWriteTransfer(
                      (__int64)&dword_1800DB250,
                      (unsigned __int8 *)dword_1800BEFE8,
                      0LL,
                      0LL,
                      4u,
                      &v11);
    }
  }
  return v8;
}
