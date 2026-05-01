/*
 * XREFs of ?ProcessWorkItem@ModernResourceEnforcer@@IEAAXPEAUModernResourceEnforcerWorkItem@1@@Z @ 0x18000C9E4
 * Callers:
 *     ?NotificationWorkCallback@ModernResourceEnforcer@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000C820 (-NotificationWorkCallback@ModernResourceEnforcer@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180053740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ModernResourceEnforcer::ProcessWorkItem(
        ModernResourceEnforcer *this,
        struct ModernResourceEnforcer::ModernResourceEnforcerWorkItem *a2)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  _QWORD *v4; // rcx
  _QWORD *v5; // r9

  v2 = *((_QWORD *)this + 36);
  if ( v2 )
  {
    if ( *(_DWORD *)a2 == 1 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, char *, _QWORD, _DWORD, _QWORD))(*(_QWORD *)v2 + 24LL))(
        v2,
        *((_QWORD *)a2 + 1),
        (char *)a2 + 40,
        *((unsigned int *)a2 + 27),
        *((_DWORD *)a2 + 28),
        *((_QWORD *)a2 + 15));
    }
    else if ( *(_DWORD *)a2 == 2 )
    {
      v3 = *((_DWORD *)a2 + 32);
      v4 = (_QWORD *)((char *)a2 + 112);
      v5 = (_QWORD *)((char *)a2 + 120);
      if ( v3 > 1 )
      {
        v4 = (_QWORD *)*v4;
        v5 = (_QWORD *)*v5;
      }
      (*(void (__fastcall **)(__int64, _QWORD, char *, _QWORD, _QWORD *, _QWORD *, unsigned int, _DWORD))(*(_QWORD *)v2 + 32LL))(
        v2,
        *((_QWORD *)a2 + 1),
        (char *)a2 + 40,
        *((unsigned int *)a2 + 27),
        v4,
        v5,
        v3,
        *((_DWORD *)a2 + 33));
    }
  }
}
