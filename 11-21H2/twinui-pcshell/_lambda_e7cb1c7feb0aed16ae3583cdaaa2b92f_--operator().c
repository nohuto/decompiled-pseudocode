/*
 * XREFs of _lambda_e7cb1c7feb0aed16ae3583cdaaa2b92f_::operator() @ 0x18055AF94
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher_winrt::Windows::Internal::ComposableShell::Tabs::TabDataModelTabsChangedEventArgs___lambda_e7cb1c7feb0aed16ae3583cdaaa2b92f___::Invoke @ 0x18055B490 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_18055B490.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800F4BD8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$try_query@UIUnknown@@@?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@1@XZ @ 0x1805440F0 (--$try_query@UIUnknown@@@-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEBA-AV-.c)
 *     ?AddedTab@?$consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelTabsChangedEventArgs@UITabDataModelTabsChangedEventArgs@Tabs@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUShellTab@Tabs@ComposableShell@Internal@Windows@3@XZ @ 0x18055B1EC (-AddedTab@-$consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelTabsChangedEventArgs@UITa.c)
 *     ?TabAdded@VirtualDesktopGroupedViewsEventListener@@AEAAXUTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@UTabDataModelTabsChangedEventArgs@34567@@Z @ 0x18055BC78 (-TabAdded@VirtualDesktopGroupedViewsEventListener@@AEAAXUTabDataModelWatcher@Tabs@ComposableShel.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_e7cb1c7feb0aed16ae3583cdaaa2b92f_::operator()(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  winrt::Windows::Foundation::IUnknown *v3; // rsi
  winrt::Windows::Foundation::IUnknown *v4; // r14
  void **v6; // rax
  const char *v7; // r9
  char v8; // bl
  bool v9; // r15
  __int64 v10; // rbx
  void *v11[7]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  winrt::Windows::Foundation::IUnknown *v14; // [rsp+68h] [rbp+10h]
  winrt::Windows::Foundation::IUnknown *v15; // [rsp+70h] [rbp+18h]
  __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  v15 = a3;
  v14 = a2;
  v3 = a3;
  v4 = a2;
  LODWORD(v13) = 0;
  v6 = wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>::try_query<IUnknown>((struct IWeakReference **)a1, v11);
  try
  {
    v8 = 1;
    LODWORD(v13) = 1;
    v9 = 0;
    if ( *v6 )
    {
      v8 = 3;
      if ( *(_QWORD *)winrt::impl::consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelTabsChangedEventArgs<winrt::Windows::Internal::ComposableShell::Tabs::ITabDataModelTabsChangedEventArgs>::AddedTab(
                        v3,
                        &v16) )
        v9 = 1;
    }
    if ( (v8 & 2) != 0 )
    {
      v8 &= ~2u;
      if ( v16 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
    }
    if ( (v8 & 1) != 0 )
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)v11);
    if ( v9 )
    {
      v10 = *(_QWORD *)(a1 + 8);
      v13 = *(_QWORD *)v3;
      winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v13);
      v16 = *(_QWORD *)v4;
      winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v16);
      VirtualDesktopGroupedViewsEventListener::TabAdded(v10, &v16, &v13);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x60,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgroupedviewseventlistener.cpp",
      v7);
    v3 = v15;
    v4 = v14;
  }
  if ( *(_QWORD *)v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v4);
  if ( *(_QWORD *)v3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v3);
}
