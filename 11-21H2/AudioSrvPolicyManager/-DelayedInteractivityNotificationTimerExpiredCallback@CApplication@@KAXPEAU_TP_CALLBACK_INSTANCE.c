/*
 * XREFs of ?DelayedInteractivityNotificationTimerExpiredCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180016510
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CApplication::DelayedInteractivityNotificationTimerExpiredCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        _QWORD *a2,
        struct _TP_TIMER *a3)
{
  __int64 v3; // rcx
  __int64 v5; // rdx
  char *v6; // rbx
  char *v7; // rcx

  v3 = a2[75];
  if ( !v3 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, _QWORD *, struct _TP_TIMER *))(*(_QWORD *)v3 + 16LL))(v3, a2, a3);
  v6 = (char *)(a2 + 68);
  v7 = (char *)*((_QWORD *)v6 + 7);
  if ( v7 )
  {
    LOBYTE(v5) = v7 != v6;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v7 + 32LL))(v7, v5);
    *((_QWORD *)v6 + 7) = 0LL;
  }
}
