/*
 * XREFs of ?Unregister@?$EventListener@UIApplicationViewCollection@@UIApplicationViewChangeListener@@VApplicationViewEventRegistration@details@AppViewEventHelpers@@@AppViewEventHelpers@@QEAAXXZ @ 0x18004E548
 * Callers:
 *     ?Register@?$EventListener@UIApplicationViewCollection@@UIApplicationViewChangeListener@@VApplicationViewEventRegistration@details@AppViewEventHelpers@@@AppViewEventHelpers@@QEAAJPEAUIApplicationViewCollection@@@Z @ 0x18004E4A0 (-Register@-$EventListener@UIApplicationViewCollection@@UIApplicationViewChangeListener@@VApplica.c)
 *     ??1AppViewDataSourceAdapterBase@@IEAA@XZ @ 0x18004E650 (--1AppViewDataSourceAdapterBase@@IEAA@XZ.c)
 *     ??1ApplicationViewEventListener@AppViewEventHelpers@@QEAA@XZ @ 0x180453B68 (--1ApplicationViewEventListener@AppViewEventHelpers@@QEAA@XZ.c)
 * Callees:
 *     ?Unregister@?$EventRegistration@UIApplicationViewCollection@@UIApplicationViewChangeListener@@@details@AppViewEventHelpers@@QEAAXXZ @ 0x18004E594 (-Unregister@-$EventRegistration@UIApplicationViewCollection@@UIApplicationViewChangeListener@@@d.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppViewEventHelpers::EventListener<IApplicationViewCollection,IApplicationViewChangeListener,AppViewEventHelpers::details::ApplicationViewEventRegistration>::Unregister(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  if ( *(_QWORD *)(a1 + 8) )
  {
    result = AppViewEventHelpers::details::EventRegistration<IApplicationViewCollection,IApplicationViewChangeListener>::Unregister();
    v3 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8) = 0LL;
    if ( v3 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
