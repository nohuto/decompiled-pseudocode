/*
 * XREFs of ??0TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAA@PEAUIWICImagingFactory@@PEAUITaskbarList4@@AEBUITileStore@Tiles@345@AEBUWindowTabDataModel@2UI@345@AEBUWindowTabView@2UI@345@_K@Z @ 0x180034E58
 * Callers:
 *     ??$make_self@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@PEAUIWICImagingFactory@@PEAUITaskbarList4@@AEAUITileStore@Tiles@456@AEBUWindowTabDataModel@3UI@456@AEBUWindowTabView@3UI@456@AEA_K@winrt@@YA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@0@$$QEAPEAUIWICImagingFactory@@$$QEAPEAUITaskbarList4@@AEAUITileStore@Tiles@Internal@Windows@0@AEBUWindowTabDataModel@Shell@UI@670@AEBUWindowTabView@9UI@670@AEA_K@Z @ 0x1800344C0 (--$make_self@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@PEAUIWICImagingFactory.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800A6C70 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18048D96C (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=14
winrt::Windows::Internal::Shell::implementation::TabProxyWindow *__fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TabProxyWindow(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow *this,
        struct IWICImagingFactory *a2,
        struct ITaskbarList4 *a3,
        const struct winrt::Windows::Internal::Tiles::ITileStore *a4,
        const struct winrt::Windows::Internal::UI::Shell::WindowTabDataModel *a5,
        const struct winrt::Windows::Internal::UI::Shell::WindowTabView *a6,
        unsigned __int64 a7)
{
  winrt::Windows::Foundation::IUnknown *v11; // rcx
  char *v12; // rax
  HANDLE Event; // rbx
  const char *v14; // r9
  HANDLE v15; // rbx
  const char *v16; // r9
  __m128d v18; // [rsp+20h] [rbp-58h]
  __int128 v19; // [rsp+30h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  *(_QWORD *)this = &IAppViewDataSourceAdapter::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)this + 4) = 1;
  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)this = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,std::tuple<Windows::Internal::Shell::ITabProxyWindowInternal>>'};
  *((_QWORD *)this + 1) = &winrt::Windows::Internal::Shell::implementation::TabProxyWindow::`vftable'{for `winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>'};
  *((_QWORD *)this + 3) = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>::`vftable';
  v11 = (winrt::Windows::Internal::Shell::implementation::TabProxyWindow *)((char *)this + 40);
  *(_QWORD *)v11 = *(_QWORD *)a5;
  winrt::Windows::Foundation::IUnknown::add_ref(v11);
  *((_QWORD *)this + 6) = *(_QWORD *)a6;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Internal::Shell::implementation::TabProxyWindow *)((char *)this + 48));
  *((_QWORD *)this + 7) = a7;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = a2;
  if ( a2 )
    ((void (__fastcall *)(struct IWICImagingFactory *))a2->lpVtbl->AddRef)(a2);
  *((_QWORD *)this + 14) = a3;
  if ( a3 )
    ((void (__fastcall *)(struct ITaskbarList4 *))a3->lpVtbl->AddRef)(a3);
  *((_QWORD *)this + 15) = *(_QWORD *)a4;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Internal::Shell::implementation::TabProxyWindow *)((char *)this + 120));
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 34) = 0;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_WORD *)this + 92) = 1;
  *(_QWORD *)&v18.m128d_f64[0] = winrt::Windows::Internal::Shell::implementation::TabProxyWindow::OnTabChanged;
  LODWORD(v18.m128d_f64[1]) = 0;
  *(_QWORD *)&v19 = this;
  *((_QWORD *)&v19 + 1) = winrt::Windows::Internal::Shell::implementation::TabProxyWindow::OnTabChanged;
  v12 = (char *)operator new(0x28uLL);
  *(_OWORD *)(v12 + 8) = v19;
  *((_QWORD *)v12 + 3) = *(_OWORD *)&_mm_unpackhi_pd(v18, v18);
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v12 + 8) = 1;
  *(_QWORD *)v12 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::WindowTabView,winrt::Windows::Internal::UI::Shell::WindowTabViewPropertyChangedEventArgs>,_lambda_183baf27b090b4cfecd741efea205505_>::`vftable';
  a5 = (const struct winrt::Windows::Internal::UI::Shell::WindowTabDataModel *)v12;
  winrt::Windows::Foundation::IUnknown::operator=((char *)this + 144, &a5);
  if ( a5 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&a5);
  Event = CreateEventExW(0LL, 0LL, 2u, 0x1F0003u);
  if ( !Event )
    wil::details::in1diag3::Throw_GetLastError(
      retaddr,
      (void *)0x1817,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      v14);
  GetLastError();
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    (char *)this + 160,
    Event);
  v15 = CreateEventExW(0LL, 0LL, 2u, 0x1F0003u);
  if ( !v15 )
    wil::details::in1diag3::Throw_GetLastError(
      retaddr,
      (void *)0x1817,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      v16);
  GetLastError();
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    (char *)this + 176,
    v15);
  return this;
}
