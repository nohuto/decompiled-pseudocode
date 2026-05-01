/*
 * XREFs of ?RefreshWindowToMonitorMapping@CClassicWindowManager@@UEAAXPEAUIImmersiveShellHookService@@@Z @ 0x1802D0340
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CClassicWindowManager::RefreshWindowToMonitorMapping(
        CClassicWindowManager *this,
        struct IImmersiveShellHookService *a2)
{
  unsigned __int64 v2; // r14
  unsigned __int64 i; // rsi
  __int64 v6; // rcx
  __int64 v7; // rdi
  void (__fastcall *v8)(struct IImmersiveShellHookService *, __int64, __int64); // rbx
  __int64 v9; // rcx
  __int64 v10; // rax

  v2 = *((_QWORD *)this + 16);
  for ( i = 0LL; i < v2; ++i )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * i);
    v7 = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 160LL))(v6) != 0 ? 4 : 0;
    v8 = *(void (__fastcall **)(struct IImmersiveShellHookService *, __int64, __int64))(*(_QWORD *)a2 + 40LL);
    v9 = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * i);
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9);
    v8(a2, v7 + 20, v10);
  }
}
