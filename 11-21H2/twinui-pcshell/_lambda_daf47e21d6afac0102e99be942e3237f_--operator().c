/*
 * XREFs of _lambda_daf47e21d6afac0102e99be942e3237f_::operator() @ 0x18060877C
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::UI::Xaml::RoutedEventHandler__lambda_daf47e21d6afac0102e99be942e3237f___::Invoke @ 0x18060A420 (winrt--impl--delegate_winrt--Windows--UI--Xaml--RoutedEventHandler__lambda_daf47e21d6afac0102e99.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180141840 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??$try_query@UIVirtualDesktopSwitcherHost@@@?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIVirtualDesktopSwitcherHost@@Uerr_failfast_policy@wil@@@1@XZ @ 0x180607498 (--$try_query@UIVirtualDesktopSwitcherHost@@@-$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wi.c)
 */

void __fastcall lambda_daf47e21d6afac0102e99be942e3237f_::operator()(struct IWeakReference **a1)
{
  char *v1; // rbx
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  int v3; // eax
  void *v4[5]; // [rsp+20h] [rbp-28h] BYREF

  wil::com_ptr_t<IWeakReference,wil::err_failfast_policy>::try_query<IVirtualDesktopSwitcherHost>(a1, v4);
  if ( v4[0] )
  {
    v1 = (char *)v4[0] - 8;
    v2 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)v4[0] + 24) & -(__int64)(v4[0] != (void *)8));
    v3 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v2, 1);
    v1[450] = 1;
    if ( v3 >= 0 )
      LeaveCriticalSection(v2);
  }
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)v4);
}
