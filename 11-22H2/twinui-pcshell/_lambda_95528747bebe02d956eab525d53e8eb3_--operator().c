/*
 * XREFs of _lambda_95528747bebe02d956eab525d53e8eb3_::operator() @ 0x180772928
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Xaml::Controls::ListViewBase_winrt::Windows::UI::Xaml::Controls::DragItemsCompletedEventArgs___lambda_95528747bebe02d956eab525d53e8eb3___::Invoke @ 0x180774790 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Xaml--Co.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x18012C584 (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$try_query@UIVirtualDesktopSwitcherHost@@@?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIVirtualDesktopSwitcherHost@@Uerr_failfast_policy@wil@@@1@XZ @ 0x1807712B0 (--$try_query@UIVirtualDesktopSwitcherHost@@@-$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wi.c)
 *     ?StartPointerExitedTimer@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x1807768F4 (-StartPointerExitedTimer@VirtualDesktopSwitcherHost@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall lambda_95528747bebe02d956eab525d53e8eb3_::operator()(
        struct IWeakReference **a1,
        winrt::Windows::Foundation::IUnknown *a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  __int64 v5; // rsi
  int v6; // r15d
  signed int v7; // eax
  __int64 v8; // [rsp+70h] [rbp+38h] BYREF
  winrt::Windows::Foundation::IUnknown *v9; // [rsp+78h] [rbp+40h]
  winrt::Windows::Foundation::IUnknown *v10; // [rsp+80h] [rbp+48h]
  __int64 v11; // [rsp+88h] [rbp+50h] BYREF

  v10 = a3;
  v9 = a2;
  wil::com_ptr_t<IWeakReference,wil::err_failfast_policy>::try_query<IVirtualDesktopSwitcherHost>(a1, (void **)&v11);
  if ( v11 )
  {
    v5 = (v11 - 8) & -(__int64)(v11 != 0);
    v6 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((v5 + 32) & -(__int64)(v5 != 0), 1);
    *(_BYTE *)(v5 + 456) = 0;
    *(_BYTE *)(v5 + 458) = 0;
    v8 = 0LL;
    winrt::com_ptr<winrt::impl::IWeakReference>::operator=((__int64 *)(v5 + 296), &v8);
    if ( v8 )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v8);
    LODWORD(v8) = 0;
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)a3 + 56LL))(*(_QWORD *)a3, &v8);
    if ( v7 < 0 )
      winrt::throw_hresult(v7);
    if ( !(_DWORD)v8 )
      VirtualDesktopSwitcherHost::StartPointerExitedTimer((VirtualDesktopSwitcherHost *)v5);
    if ( v6 >= 0 )
      LeaveCriticalSection((LPCRITICAL_SECTION)((v5 + 32) & -(__int64)(v5 != 0)));
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v11);
  if ( *(_QWORD *)a2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a2);
  if ( *(_QWORD *)a3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a3);
}
