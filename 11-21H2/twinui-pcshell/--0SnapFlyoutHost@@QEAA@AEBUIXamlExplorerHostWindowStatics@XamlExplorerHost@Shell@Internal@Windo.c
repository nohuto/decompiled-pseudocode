/*
 * XREFs of ??0SnapFlyoutHost@@QEAA@AEBUIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@@Z @ 0x1800CA1CC
 * Callers:
 *     ??$make_self@VSnapFlyoutHost@@AEAUIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@@winrt@@YA?AU?$com_ptr@VSnapFlyoutHost@@@0@AEAUIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windows@0@@Z @ 0x1800C9C64 (--$make_self@VSnapFlyoutHost@@AEAUIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800CA2C4 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800F4BD8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803B424C (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=11
SnapFlyoutHost *__fastcall SnapFlyoutHost::SnapFlyoutHost(
        SnapFlyoutHost *this,
        const struct winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindowStatics *a2)
{
  winrt::Windows::Foundation::IUnknown *v3; // rcx
  HANDLE Event; // rsi
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_QWORD *)this + 2) = &winrt::impl::produce<SnapFlyoutHost,winrt::Windows::Foundation::IInspectable>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_QWORD *)this + 1) = 1LL;
  *(_QWORD *)this = &winrt::impl::heap_implements<SnapFlyoutHost>::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  v3 = (SnapFlyoutHost *)((char *)this + 96);
  *(_QWORD *)v3 = *(_QWORD *)a2;
  winrt::Windows::Foundation::IUnknown::add_ref(v3);
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 34) = 0;
  *((_QWORD *)this + 18) = 0LL;
  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( !Event )
    wil::details::in1diag3::Throw_GetLastError(
      retaddr,
      (void *)0x17FA,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      v5);
  GetLastError();
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    (char *)this + 80,
    Event);
  return this;
}
