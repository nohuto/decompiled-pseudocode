/*
 * XREFs of ??$try_query@UIVirtualDesktopSwitcherHost@@@?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIVirtualDesktopSwitcherHost@@Uerr_failfast_policy@wil@@@1@XZ @ 0x180607498
 * Callers:
 *     _lambda_93a01a015314866c96b4de2e509c5117_::operator() @ 0x180608308 (_lambda_93a01a015314866c96b4de2e509c5117_--operator().c)
 *     _lambda_3591e69cd7734f7f9a496e70d8c5fafc_::operator() @ 0x1806083B4 (_lambda_3591e69cd7734f7f9a496e70d8c5fafc_--operator().c)
 *     _lambda_4d1b25a0649ea28e3acc4cfd8c5ad9c0_::operator() @ 0x180608460 (_lambda_4d1b25a0649ea28e3acc4cfd8c5ad9c0_--operator().c)
 *     _lambda_63f0ba8d47001b6298cbfa6e1cb1ee7f_::operator() @ 0x1806085A4 (_lambda_63f0ba8d47001b6298cbfa6e1cb1ee7f_--operator().c)
 *     _lambda_a4fc72a842dbf7eb265aa59110ec49be_::operator() @ 0x180608654 (_lambda_a4fc72a842dbf7eb265aa59110ec49be_--operator().c)
 *     _lambda_daf47e21d6afac0102e99be942e3237f_::operator() @ 0x18060877C (_lambda_daf47e21d6afac0102e99be942e3237f_--operator().c)
 *     winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_b9ce315f83a5c088afafe0d2d1441397___::Invoke @ 0x18060A470 (winrt--impl--delegate_winrt--Windows--System--Threading--TimerElapsedHandler__lambda_b9ce315f83a.c)
 *     ?VirtualDesktopSwitcherHostHookProc@VirtualDesktopSwitcherHook@@CA_JH_K_J@Z @ 0x18060C760 (-VirtualDesktopSwitcherHostHookProc@VirtualDesktopSwitcherHook@@CA_JH_K_J@Z.c)
 * Callees:
 *     ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x18002CC54 (-query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 */

void **__fastcall wil::com_ptr_t<IWeakReference,wil::err_failfast_policy>::try_query<IVirtualDesktopSwitcherHost>(
        struct IWeakReference **a1,
        void **a2)
{
  struct IWeakReference *v3; // rcx

  v3 = *a1;
  *a2 = 0LL;
  wil::details::weak_query_policy::query(v3, &GUID_1be71764_e771_4442_b78f_eda2c7f067f3, a2);
  return a2;
}
