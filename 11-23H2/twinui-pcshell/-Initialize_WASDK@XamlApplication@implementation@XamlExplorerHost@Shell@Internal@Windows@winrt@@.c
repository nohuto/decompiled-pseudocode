/*
 * XREFs of ?Initialize_WASDK@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@SA?AUIInspectable@Foundation@67@XZ @ 0x1801F9FC4
 * Callers:
 *     ?Initialize_WASDK@?$produce@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlApplicationStatics@34567@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1801F9F50 (-Initialize_WASDK@-$produce@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Inter.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??0?$heap_implements@UWASDKInitializationWrapper@@@impl@winrt@@QEAA@XZ @ 0x1801F9CD0 (--0-$heap_implements@UWASDKInitializationWrapper@@@impl@winrt@@QEAA@XZ.c)
 *     ?query_interface@?$root_implements@UWASDKInitializationWrapper@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1801FA464 (-query_interface@-$root_implements@UWASDKInitializationWrapper@@UIInspectable@Foundation@Windows.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801FA5AC (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=3
struct IInspectable __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication::Initialize_WASDK(
        winrt::Windows::Foundation::IUnknown *a1)
{
  _OWORD *v2; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rdi
  int v5; // eax
  _QWORD v7[2]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v8; // [rsp+38h] [rbp-18h] BYREF

  v7[1] = a1;
  *(_QWORD *)a1 = 0LL;
  v2 = operator new(0x28uLL);
  *v2 = 0LL;
  v2[1] = 0LL;
  *((_QWORD *)v2 + 4) = 0LL;
  v3 = winrt::impl::heap_implements<WASDKInitializationWrapper>::heap_implements<WASDKInitializationWrapper>(v2);
  v4 = v3;
  v7[0] = v3;
  v8 = 0LL;
  if ( v3 )
  {
    v5 = winrt::impl::root_implements<WASDKInitializationWrapper,winrt::Windows::Foundation::IInspectable>::query_interface(
           v3,
           &winrt::impl::guid_v<IInspectable>,
           &v8);
    if ( v5 < 0 )
      winrt::throw_hresult((unsigned int)v5);
  }
  winrt::Windows::Foundation::IUnknown::operator=(a1, (winrt::Windows::Foundation::IUnknown *)&v8);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v8);
  if ( v4 )
    winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(v7);
  return (struct IInspectable)a1;
}
