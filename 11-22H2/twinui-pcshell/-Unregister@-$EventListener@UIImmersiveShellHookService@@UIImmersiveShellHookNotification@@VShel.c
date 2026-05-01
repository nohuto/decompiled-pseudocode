/*
 * XREFs of ?Unregister@?$EventListener@UIImmersiveShellHookService@@UIImmersiveShellHookNotification@@VShellHookRegistration@details@AppViewEventHelpers@@@AppViewEventHelpers@@QEAAXXZ @ 0x1800813FC
 * Callers:
 *     ??1AppViewDataSourceAdapterBase@@IEAA@XZ @ 0x180080FD4 (--1AppViewDataSourceAdapterBase@@IEAA@XZ.c)
 *     ??1ShellHookEventListener@AppViewEventHelpers@@QEAA@XZ @ 0x18078E304 (--1ShellHookEventListener@AppViewEventHelpers@@QEAA@XZ.c)
 *     ?Register@?$EventListener@UIImmersiveShellHookService@@UIImmersiveShellHookNotification@@VShellHookRegistration@details@AppViewEventHelpers@@@AppViewEventHelpers@@QEAAJPEAUIImmersiveShellHookService@@@Z @ 0x18078F2AC (-Register@-$EventListener@UIImmersiveShellHookService@@UIImmersiveShellHookNotification@@VShellH.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Unregister@?$EventRegistration@UIImmersiveShellHookService@@UIImmersiveShellHookNotification@@@details@AppViewEventHelpers@@QEAAXXZ @ 0x18078F600 (-Unregister@-$EventRegistration@UIImmersiveShellHookService@@UIImmersiveShellHookNotification@@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppViewEventHelpers::EventListener<IImmersiveShellHookService,IImmersiveShellHookNotification,AppViewEventHelpers::details::ShellHookRegistration>::Unregister(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  if ( *(_QWORD *)(a1 + 8) )
  {
    result = AppViewEventHelpers::details::EventRegistration<IImmersiveShellHookService,IImmersiveShellHookNotification>::Unregister();
    v3 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8) = 0LL;
    if ( v3 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
