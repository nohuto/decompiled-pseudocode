/*
 * XREFs of _lambda_3591e69cd7734f7f9a496e70d8c5fafc_::operator() @ 0x1806083B4
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::UI::Xaml::Input::PointerEventHandler__lambda_3591e69cd7734f7f9a496e70d8c5fafc___::Invoke @ 0x18060A2E0 (winrt--impl--delegate_winrt--Windows--UI--Xaml--Input--PointerEventHandler__lambda_3591e69cd7734.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180141840 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??$try_query@UIVirtualDesktopSwitcherHost@@@?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIVirtualDesktopSwitcherHost@@Uerr_failfast_policy@wil@@@1@XZ @ 0x180607498 (--$try_query@UIVirtualDesktopSwitcherHost@@@-$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wi.c)
 *     ?StartPointerExitedTimer@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x18060C0D0 (-StartPointerExitedTimer@VirtualDesktopSwitcherHost@@AEAAXXZ.c)
 */

void __fastcall lambda_3591e69cd7734f7f9a496e70d8c5fafc_::operator()(struct IWeakReference **a1)
{
  VirtualDesktopSwitcherHost *v1; // rdi
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v3; // ebx
  void *v4[2]; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+30h] [rbp-28h]

  wil::com_ptr_t<IWeakReference,wil::err_failfast_policy>::try_query<IVirtualDesktopSwitcherHost>(a1, v4);
  if ( v4[0] )
  {
    v1 = (VirtualDesktopSwitcherHost *)((char *)v4[0] - 8);
    v2 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)v4[0] + 24) & -(__int64)(v4[0] != (void *)8));
    v4[1] = v2;
    v3 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v2, 1);
    v5 = v3;
    *((_BYTE *)v1 + 449) = 0;
    VirtualDesktopSwitcherHost::StartPointerExitedTimer(v1);
    if ( v3 >= 0 )
      LeaveCriticalSection(v2);
  }
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)v4);
}
