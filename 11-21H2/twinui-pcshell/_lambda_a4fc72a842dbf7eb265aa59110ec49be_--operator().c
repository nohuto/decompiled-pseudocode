/*
 * XREFs of _lambda_a4fc72a842dbf7eb265aa59110ec49be_::operator() @ 0x180608654
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Xaml::Controls::ListViewBase_winrt::Windows::UI::Xaml::Controls::DragItemsCompletedEventArgs___lambda_a4fc72a842dbf7eb265aa59110ec49be___::Invoke @ 0x18060A200 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Xaml--Co.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180141840 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$try_query@UIVirtualDesktopSwitcherHost@@@?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIVirtualDesktopSwitcherHost@@Uerr_failfast_policy@wil@@@1@XZ @ 0x180607498 (--$try_query@UIVirtualDesktopSwitcherHost@@@-$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wi.c)
 *     ?StartPointerExitedTimer@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x18060C0D0 (-StartPointerExitedTimer@VirtualDesktopSwitcherHost@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall lambda_a4fc72a842dbf7eb265aa59110ec49be_::operator()(
        struct IWeakReference **a1,
        winrt::Windows::Foundation::IUnknown *a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  VirtualDesktopSwitcherHost *v5; // rbp
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  int v7; // r14d
  signed int v8; // eax
  int v9; // [rsp+60h] [rbp+8h] BYREF
  winrt::Windows::Foundation::IUnknown *v10; // [rsp+68h] [rbp+10h]
  winrt::Windows::Foundation::IUnknown *v11; // [rsp+70h] [rbp+18h]
  char *v12; // [rsp+78h] [rbp+20h] BYREF

  v11 = a3;
  v10 = a2;
  wil::com_ptr_t<IWeakReference,wil::err_failfast_policy>::try_query<IVirtualDesktopSwitcherHost>(a1, (void **)&v12);
  if ( v12 )
  {
    v5 = (VirtualDesktopSwitcherHost *)(v12 - 8);
    v6 = (struct _RTL_CRITICAL_SECTION *)((unsigned __int64)(v12 + 24) & -(__int64)(v12 != (char *)8));
    v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v6, 1);
    *((_BYTE *)v5 + 448) = 0;
    v9 = 0;
    v8 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)a3 + 56LL))(*(_QWORD *)a3, &v9);
    if ( v8 < 0 )
      winrt::throw_hresult(v8);
    if ( !v9 )
      VirtualDesktopSwitcherHost::StartPointerExitedTimer(v5);
    if ( v7 >= 0 )
      LeaveCriticalSection(v6);
  }
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v12);
  if ( *(_QWORD *)a2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a2);
  if ( *(_QWORD *)a3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a3);
}
