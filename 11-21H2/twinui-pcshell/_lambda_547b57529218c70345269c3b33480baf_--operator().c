/*
 * XREFs of _lambda_547b57529218c70345269c3b33480baf_::operator() @ 0x1806084EC
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::UI::Xaml::RoutedEventHandler__lambda_547b57529218c70345269c3b33480baf___::Invoke @ 0x18060A3D0 (winrt--impl--delegate_winrt--Windows--UI--Xaml--RoutedEventHandler__lambda_547b57529218c70345269.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180141840 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$try_query@UIVirtualDesktopSwitcherViewHostInternal@@@?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIVirtualDesktopSwitcherViewHostInternal@@Uerr_failfast_policy@wil@@@1@XZ @ 0x1806074C8 (--$try_query@UIVirtualDesktopSwitcherViewHostInternal@@@-$com_ptr_t@UIWeakReference@@Uerr_failfa.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_547b57529218c70345269c3b33480baf_::operator()(struct IWeakReference **a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  int v2; // ebx
  void *v3[2]; // [rsp+20h] [rbp-38h] BYREF
  int v4; // [rsp+30h] [rbp-28h]

  wil::com_ptr_t<IWeakReference,wil::err_failfast_policy>::try_query<IVirtualDesktopSwitcherViewHostInternal>(a1, v3);
  if ( v3[0] )
  {
    v1 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)v3[0] - 104) & -(__int64)(v3[0] != (void *)136));
    v3[1] = v1;
    v2 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v1, 1);
    v4 = v2;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v3[0] + 24LL))(v3[0]);
    if ( v2 >= 0 )
      LeaveCriticalSection(v1);
  }
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)v3);
}
