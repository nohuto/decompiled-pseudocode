/*
 * XREFs of ?GetDeferral@SearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUDeferral@Foundation@Windows@6@XZ @ 0x1800F4A20
 * Callers:
 *     ?GetDeferral@?$produce@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppActivatedEventArgs@3456@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800F49D0 (-GetDeferral@-$produce@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UI.c)
 * Callees:
 *     ??$call@AEAV_lambda_05b02c468eda432e9e6db40beed076d3_@@@?$factory_cache_entry@UDeferral@Foundation@Windows@winrt@@UIDeferralFactory@234@@impl@winrt@@QEAA?AUDeferral@Foundation@Windows@2@AEAV_lambda_05b02c468eda432e9e6db40beed076d3_@@@Z @ 0x1800667BC (--$call@AEAV_lambda_05b02c468eda432e9e6db40beed076d3_@@@-$factory_cache_entry@UDeferral@Foundati.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@winrt@@AEAAXXZ @ 0x1800FA3F4 (-unconditional_release_ref@-$com_ptr@USearchAppActivatedEventArgs@implementation@Shell@UI@Window.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ?AddRef@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVFallbackFlyoutView@@AEBURect@234@AEBW4TaskbarLocation@Shell@UI@WindowsUdk@4@_JAEBVCorrelationVector@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@QEAAIXZ @ 0x18019E608 (-AddRef@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winr.c)
 *     ?AddRef@?$implements@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@U13456@UISearchAppActivatedEventArgs2@3456@UIActivatedEventArgs@Activation@ApplicationModel@Windows@6@UIInitializeActivatedEventArgs@9ApplicationModel@Windows@6@UILaunchActivatedEventArgs@9ApplicationModel@Windows@6@UILaunchActivatedEventArgs2@9ApplicationModel@Windows@6@UIActivatedEventArgsWithUser@9ApplicationModel@Windows@6@UIPrelaunchActivatedEventArgs@9ApplicationModel@Windows@6@@winrt@@QEAAKXZ @ 0x1801A46D4 (-AddRef@-$implements@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@U134.c)
 *     _lambda_e6a671098150e4fafb7216c3a0d06112_::__lambda_e6a671098150e4fafb7216c3a0d06112_ @ 0x18039FE38 (_lambda_e6a671098150e4fafb7216c3a0d06112_--__lambda_e6a671098150e4fafb7216c3a0d06112_.c)
 *     ??R_lambda_05b02c468eda432e9e6db40beed076d3_@@QEBA?AUDeferral@Foundation@Windows@winrt@@AEBUIDeferralFactory@234@@Z @ 0x18039FE70 (--R_lambda_05b02c468eda432e9e6db40beed076d3_@@QEBA-AUDeferral@Foundation@Windows@winrt@@AEBUIDef.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs::GetDeferral(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r9
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 *v7; // rax
  __int64 v8; // rcx
  void (__fastcall ***v9)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 *v11; // [rsp+50h] [rbp+20h] BYREF
  __int64 v12; // [rsp+58h] [rbp+28h] BYREF
  __int64 *v13; // [rsp+60h] [rbp+30h] BYREF
  __int64 v14; // [rsp+68h] [rbp+38h] BYREF

  v12 = a2;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 112));
  v4 = 0LL;
  v14 = 0LL;
  v5 = 0LL;
  if ( a1 )
  {
    v14 = a1;
    winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,FallbackFlyoutView *,winrt::Windows::Foundation::Rect const &,enum winrt::WindowsUdk::UI::Shell::TaskbarLocation const &,__int64,CorrelationVector const &>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::AddRef(
      a1,
      a2,
      a3,
      a1);
    v5 = v6;
  }
  v12 = v4;
  if ( v5 )
    winrt::implements<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs,winrt::WindowsUdk::UI::Shell::ISearchAppActivatedEventArgs2,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser,winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>::AddRef(v4);
  v13 = &v12;
  v7 = (__int64 *)operator new(0x18uLL);
  v13 = v7;
  v8 = v12;
  v12 = 0LL;
  v7[1] = v8;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v7 + 4) = 1;
  *v7 = (__int64)off_180632C50;
  v11 = v7;
  lambda_e6a671098150e4fafb7216c3a0d06112_::__lambda_e6a671098150e4fafb7216c3a0d06112_(&v12);
  v13 = (__int64 *)&v11;
  _InterlockedIncrement64(&qword_1807B3E88);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Deferral,winrt::Windows::Foundation::IDeferralFactory> )
  {
    _lambda_05b02c468eda432e9e6db40beed076d3_::operator()(
      &v13,
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Deferral,winrt::Windows::Foundation::IDeferralFactory>);
    _InterlockedDecrement64(&qword_1807B3E88);
  }
  else
  {
    _InterlockedDecrement64(&qword_1807B3E88);
    winrt::impl::factory_cache_entry<winrt::Windows::Foundation::Deferral,winrt::Windows::Foundation::IDeferralFactory>::call<_lambda_05b02c468eda432e9e6db40beed076d3_ &>(
      v9,
      a2,
      &v13);
  }
  if ( v11 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v11);
  if ( v5 )
    winrt::com_ptr<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs>::unconditional_release_ref(&v14);
  return a2;
}
