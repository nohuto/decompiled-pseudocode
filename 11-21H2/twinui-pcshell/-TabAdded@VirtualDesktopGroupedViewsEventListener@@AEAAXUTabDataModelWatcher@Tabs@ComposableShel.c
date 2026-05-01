/*
 * XREFs of ?TabAdded@VirtualDesktopGroupedViewsEventListener@@AEAAXUTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@UTabDataModelTabsChangedEventArgs@34567@@Z @ 0x18055BC78
 * Callers:
 *     _lambda_e7cb1c7feb0aed16ae3583cdaaa2b92f_::operator() @ 0x18055AF94 (_lambda_e7cb1c7feb0aed16ae3583cdaaa2b92f_--operator().c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ??$as@UIInspectable@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIInspectable@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800514A4 (--$as@UIInspectable@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@win.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddedTab@?$consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelTabsChangedEventArgs@UITabDataModelTabsChangedEventArgs@Tabs@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUShellTab@Tabs@ComposableShell@Internal@Windows@3@XZ @ 0x18055B1EC (-AddedTab@-$consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelTabsChangedEventArgs@UITa.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall VirtualDesktopGroupedViewsEventListener::TabAdded(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2,
        __int64 *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rsi
  int (__fastcall *v8)(__int64, __int64, __int64 *); // rdi
  __int64 *AddressOf; // rax
  int v10; // eax
  int v11; // [rsp+20h] [rbp-28h]
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  RTL_SRWLOCK *v13[2]; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+30h]
  __int64 v15; // [rsp+80h] [rbp+38h] BYREF
  winrt::Windows::Foundation::IUnknown *v16; // [rsp+88h] [rbp+40h]
  __int64 *v17; // [rsp+90h] [rbp+48h]
  __int64 v18; // [rsp+98h] [rbp+50h] BYREF

  v17 = a3;
  v16 = a2;
  v18 = 0LL;
  v6 = winrt::impl::consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelTabsChangedEventArgs<winrt::Windows::Internal::ComposableShell::Tabs::ITabDataModelTabsChangedEventArgs>::AddedTab(
         a3,
         &v12);
  winrt::impl::as<IInspectable,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v15,
    (__int64 (__fastcall ***)(_QWORD, __int64 *, __int64 *))*v6);
  if ( v12 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  v7 = *(_QWORD *)(a1 + 64);
  v8 = *(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v7 + 24LL);
  AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(&v18);
  if ( v8(v7, v15, AddressOf) >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**(_QWORD **)(a1 + 96) + 32LL))(*(_QWORD *)(a1 + 96), v13);
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 88) + 48LL))(
            *(_QWORD *)(a1 + 88),
            v18,
            *(_QWORD *)(a1 + 72),
            *(_QWORD *)(a1 + 80));
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x33,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgroupedviewseventlistener.cpp",
        (const char *)(unsigned int)v10,
        v11);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v13);
  }
  if ( v15 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v15);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v18);
  if ( *(_QWORD *)a2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a2);
  if ( *a3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)a3);
}
