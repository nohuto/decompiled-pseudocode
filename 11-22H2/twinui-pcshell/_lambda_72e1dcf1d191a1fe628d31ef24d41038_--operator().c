/*
 * XREFs of _lambda_72e1dcf1d191a1fe628d31ef24d41038_::operator() @ 0x180772688
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::UI::Xaml::Controls::DragItemsStartingEventHandler__lambda_72e1dcf1d191a1fe628d31ef24d41038___::Invoke @ 0x180774940 (winrt--impl--delegate_winrt--Windows--UI--Xaml--Controls--DragItemsStartingEventHandler__lambda_.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??$try_query@UIVirtualDesktopSwitcherHost@@@?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIVirtualDesktopSwitcherHost@@Uerr_failfast_policy@wil@@@1@XZ @ 0x1807712B0 (--$try_query@UIVirtualDesktopSwitcherHost@@@-$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wi.c)
 *     ?StopPointerExitedTimer@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x180776A30 (-StopPointerExitedTimer@VirtualDesktopSwitcherHost@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_72e1dcf1d191a1fe628d31ef24d41038_::operator()(struct IWeakReference **a1)
{
  VirtualDesktopSwitcherHost *v1; // rdi
  int v2; // ebx
  __int64 v3; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v4; // [rsp+28h] [rbp-30h]
  int v5; // [rsp+30h] [rbp-28h]

  wil::com_ptr_t<IWeakReference,wil::err_failfast_policy>::try_query<IVirtualDesktopSwitcherHost>(a1, (void **)&v3);
  if ( v3 )
  {
    v1 = (VirtualDesktopSwitcherHost *)((v3 - 8) & -(__int64)(v3 != 0));
    v4 = ((unsigned __int64)v1 + 32) & -(__int64)(v1 != 0LL);
    v2 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v4, 1);
    v5 = v2;
    *((_BYTE *)v1 + 456) = 1;
    *((_BYTE *)v1 + 458) = 1;
    VirtualDesktopSwitcherHost::StopPointerExitedTimer(v1);
    if ( v2 >= 0 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(((unsigned __int64)v1 + 32) & -(__int64)(v1 != 0LL)));
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v3);
}
