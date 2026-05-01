/*
 * XREFs of _lambda_941eca72fc43b2c4835a5fc6680f0a4a_::operator() @ 0x1807727F8
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Xaml::UIElement_winrt::Windows::UI::Xaml::DragStartingEventArgs___lambda_941eca72fc43b2c4835a5fc6680f0a4a___::Invoke @ 0x1807748B0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_1807748B0.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x18012C584 (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??$from_com_ref@AEBUDragStartingEventArgs@Xaml@UI@Windows@winrt@@@?$weak_ref@UDragStartingEventArgs@Xaml@UI@Windows@winrt@@@winrt@@AEAAXAEBUDragStartingEventArgs@Xaml@UI@Windows@1@@Z @ 0x180770A1C (--$from_com_ref@AEBUDragStartingEventArgs@Xaml@UI@Windows@winrt@@@-$weak_ref@UDragStartingEventA.c)
 *     ??$try_query@UIVirtualDesktopSwitcherHost@@@?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIVirtualDesktopSwitcherHost@@Uerr_failfast_policy@wil@@@1@XZ @ 0x1807712B0 (--$try_query@UIVirtualDesktopSwitcherHost@@@-$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wi.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall lambda_941eca72fc43b2c4835a5fc6680f0a4a_::operator()(
        struct IWeakReference **a1,
        winrt::Windows::Foundation::IUnknown *a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  __int64 v5; // rbx
  int v6; // r15d
  __int64 v7; // [rsp+70h] [rbp+38h] BYREF
  winrt::Windows::Foundation::IUnknown *v8; // [rsp+78h] [rbp+40h]
  winrt::Windows::Foundation::IUnknown *v9; // [rsp+80h] [rbp+48h]
  __int64 v10; // [rsp+88h] [rbp+50h] BYREF

  v9 = a3;
  v8 = a2;
  wil::com_ptr_t<IWeakReference,wil::err_failfast_policy>::try_query<IVirtualDesktopSwitcherHost>(a1, (void **)&v10);
  if ( v10 )
  {
    v5 = (v10 - 8) & -(__int64)(v10 != 0);
    v6 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((v5 + 32) & -(__int64)(v5 != 0), 1);
    *(_BYTE *)(v5 + 458) = 1;
    v7 = 0LL;
    winrt::weak_ref<winrt::Windows::UI::Xaml::DragStartingEventArgs>::from_com_ref<winrt::Windows::UI::Xaml::DragStartingEventArgs const &>(
      &v7,
      (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))a3);
    winrt::com_ptr<winrt::impl::IWeakReference>::operator=((__int64 *)(v5 + 296), &v7);
    if ( v7 )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v7);
    if ( v6 >= 0 )
      LeaveCriticalSection((LPCRITICAL_SECTION)((v5 + 32) & -(__int64)(v5 != 0)));
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v10);
  if ( *(_QWORD *)a2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a2);
  if ( *(_QWORD *)a3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a3);
}
