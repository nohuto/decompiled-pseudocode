/*
 * XREFs of ??1SearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UEAA@XZ @ 0x18019BE64
 * Callers:
 *     ??_E?$heap_implements@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x18019D6D0 (--_E-$heap_implements@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@UEAA.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001F7FC (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@USearchAppHost@Shell@UI.c)
 *     ??1?$event@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAA@XZ @ 0x18038E234 (--1-$event@U-$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@w.c)
 */

void __fastcall winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost::~SearchAppHost(unsigned int **this)
{
  unsigned int **v2; // rcx

  v2 = this + 11;
  if ( *v2 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::Windows::Foundation::IInspectable>>>::unconditional_release_ref(v2);
  winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>::~event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>(this + 8);
  if ( this[5] )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::Windows::Foundation::IInspectable>>>::unconditional_release_ref(this + 5);
  winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,FallbackFlyoutView *,HWND__ *>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::~root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,FallbackFlyoutView *,HWND__ *>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>((__int64)this);
}
