/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_ad045d4b5c3bf658d2720d8e49b9b5c2___::Invoke @ 0x180280EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x180190BA0 (--0-$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Q.c)
 *     ?lock@?$weak_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@QEBA?AV?$shared_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x18055D070 (-lock@-$weak_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@QEBA-.c)
 *     ?OnNetworkChanged@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUTransitionScreen@7CloudDesktop@3456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18072E000 (-OnNetworkChanged@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUTr.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_ad045d4b5c3bf658d2720d8e49b9b5c2___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  winrt::Windows::Foundation::IUnknown *v4; // rdi
  winrt::Windows::Foundation::IUnknown *v5; // rsi
  winrt::Windows::Internal::Shell::implementation::BootProviderActivator *v6; // rcx
  __int64 result; // rax
  winrt::Windows::Internal::Shell::implementation::BootProviderActivator *v8; // [rsp+30h] [rbp-28h] BYREF
  std::_Ref_count_base *v9; // [rsp+38h] [rbp-20h]
  int v10; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF
  char v13; // [rsp+78h] [rbp+20h] BYREF

  v12 = a3;
  v11 = a2;
  v3 = a1 + 8;
  v4 = winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>(
         (winrt::Windows::Foundation::IUnknown *)&v10,
         &v12);
  v5 = winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>(
         (winrt::Windows::Foundation::IUnknown *)&v13,
         &v11);
  std::weak_ptr<winrt::Windows::Internal::Shell::implementation::BootProviderActivator>::lock(v3, &v8);
  try
  {
    v6 = v8;
    if ( v8 )
    {
      *((_BYTE *)v8 + 64) = 1;
      winrt::Windows::Internal::Shell::implementation::BootProviderActivator::OnNetworkChanged(
        v6,
        (const struct winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen *)(v3 + 16),
        (const struct winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo *)(v3 + 24));
    }
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(v5);
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v10);
  }
  return result;
}
