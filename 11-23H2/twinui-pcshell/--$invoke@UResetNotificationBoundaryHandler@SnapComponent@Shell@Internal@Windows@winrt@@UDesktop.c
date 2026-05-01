/*
 * XREFs of ??$invoke@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@UDesktopSnapLayoutManager@implementation@23456@@impl@winrt@@YA_NAEBUResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@1@AEBUDesktopSnapLayoutManager@implementation@34561@@Z @ 0x180682354
 * Callers:
 *     ??$?RUDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@?$event@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAAXAEBUDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@1@@Z @ 0x180680E88 (--$-RUDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@-$eve.c)
 * Callees:
 *     ??RResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@QEBA@AEBUDesktopSnapLayoutManager@12345@@Z @ 0x180683064 (--RResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@QEBA@AEBUDesktop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall winrt::impl::invoke<winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler,winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager>(
        __int64 a1,
        __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2 + 40;
  try
  {
    winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler::operator()();
  }
  catch ( ... )
  {
    v3 = *winrt::to_hresult(&v6);
    ___load_runtime_function_P6AHHHPEAX__EP6AHHH0__E_impl_winrt__YAXPEBGPEBDAEAP6AHHHPEAX__EP6AHHH2__E_Z(
      v5,
      v4,
      &`winrt::impl::invoke<winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler,winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager>'::`4'::handler);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))`winrt::impl::invoke<winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler,winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager>'::`4'::handler)(
      v3,
      0LL,
      0LL);
    return v3 != -2147417848 && v3 != -2147023174 && v3 != -1996357631;
  }
  return 1;
}
