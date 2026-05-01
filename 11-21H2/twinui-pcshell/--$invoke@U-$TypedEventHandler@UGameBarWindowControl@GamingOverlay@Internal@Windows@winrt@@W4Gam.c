/*
 * XREFs of ??$invoke@U?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@winrt@@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@34@W4GameBarWindowState@7834@@impl@winrt@@YA_NAEBU?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@1@AEBUGameBarWindowControlImpl@implementation@GamingOverlay@Internal@41@AEBW4GameBarWindowState@7841@@Z @ 0x1803412A0
 * Callers:
 *     ??$?RUGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@?$event@U?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@1@AEBW4GameBarWindowState@4561@@Z @ 0x180340EA0 (--$-RUGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@W4GameBarWin.c)
 * Callees:
 *     ??R?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@winrt@@QEBAXAEBUGameBarWindowControl@GamingOverlay@Internal@23@AEBW4GameBarWindowState@5623@@Z @ 0x18034177C (--R-$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWind.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::GamingOverlay::GameBarWindowControl,enum winrt::Windows::Internal::GamingOverlay::GameBarWindowState>,winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,enum winrt::Windows::Internal::GamingOverlay::GameBarWindowState>(
        __int64 a1,
        __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2 + 16;
  try
  {
    winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::GamingOverlay::GameBarWindowControl,enum winrt::Windows::Internal::GamingOverlay::GameBarWindowState>::operator()();
  }
  catch ( ... )
  {
    v3 = *winrt::to_hresult(&v5);
    ___load_runtime_function_P6AHHHPEAX__EP6AHHH0__E_impl_winrt__YAXPEBDAEAP6AHHHPEAX__EP6AHHH1__E_Z(
      v4,
      &`winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::GamingOverlay::GameBarWindowControl,enum winrt::Windows::Internal::GamingOverlay::GameBarWindowState>,winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,enum winrt::Windows::Internal::GamingOverlay::GameBarWindowState>'::`4'::handler);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))`winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::GamingOverlay::GameBarWindowControl,enum winrt::Windows::Internal::GamingOverlay::GameBarWindowState>,winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,enum winrt::Windows::Internal::GamingOverlay::GameBarWindowState>'::`4'::handler)(
      v3,
      0LL,
      0LL);
    return v3 != -2147417848 && v3 != -2147023174 && v3 != -1996357631;
  }
  return 1;
}
