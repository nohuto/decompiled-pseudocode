/*
 * XREFs of ??1?$test_data_control@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180235758
 * Callers:
 *     _lambda_a7ff001bd589f864b6844592adbd9d86_::operator() @ 0x180236C54 (_lambda_a7ff001bd589f864b6844592adbd9d86_--operator().c)
 *     _lambda_eb4cd3094334dda46300329bfc912a3e_::operator() @ 0x180237734 (_lambda_eb4cd3094334dda46300329bfc912a3e_--operator().c)
 *     _lambda_fa22f7386584b172c2544cf81792da3a_::operator() @ 0x1802378EC (_lambda_fa22f7386584b172c2544cf81792da3a_--operator().c)
 *     ?EnsureLockWidgetCanvasRegistryPath@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18023930C (-EnsureLockWidgetCanvasRegistryPath@DashboardManager@implementation@Shell@Internal@Windows@winrt.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1 @ 0x180242400 (winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvasD_ea_180242400.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1_::_1_::dtor$19 @ 0x180242A6C (_winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvas_ea_180242A6C.c)
 * Callees:
 *     ?end_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18001319C (-end_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18024B658 (-reset@-$com_ptr_t@V-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@t.c)
 */

__int64 __fastcall tip2::test_data_control<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>::~test_data_control<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>(
        void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    tip2::details::shared_data<1,0,0>::end_update((__int64)v2 + 8);
    wil::com_ptr_t<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>,wil::err_returncode_policy>::reset(a1);
  }
  return wil::com_ptr_t<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>,wil::err_returncode_policy>(a1);
}
