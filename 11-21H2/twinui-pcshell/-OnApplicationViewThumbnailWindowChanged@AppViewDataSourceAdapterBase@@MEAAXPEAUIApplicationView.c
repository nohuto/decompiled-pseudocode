/*
 * XREFs of ?OnApplicationViewThumbnailWindowChanged@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180454C70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall AppViewDataSourceAdapterBase::OnApplicationViewThumbnailWindowChanged(
        AppViewDataSourceAdapterBase *this,
        struct IApplicationView *a2,
        struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *a3)
{
  if ( a3 )
    (*(void (__fastcall **)(AppViewDataSourceAdapterBase *, struct IApplicationView *))(*(_QWORD *)this + 128LL))(
      this,
      a2);
}
