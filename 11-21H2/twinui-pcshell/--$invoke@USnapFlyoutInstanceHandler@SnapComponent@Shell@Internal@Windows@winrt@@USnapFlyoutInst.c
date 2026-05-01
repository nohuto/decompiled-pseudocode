/*
 * XREFs of ??$invoke@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@USnapFlyoutInstance@implementation@23456@@impl@winrt@@YA_NAEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@1@AEBUSnapFlyoutInstance@implementation@34561@@Z @ 0x1805B7F94
 * Callers:
 *     ??$?RUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAAXAEBUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@1@@Z @ 0x1805B6F68 (--$-RUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@-$event@USn.c)
 * Callees:
 *     ??RSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@QEBAXAEBUSnapFlyoutInstance@12345@@Z @ 0x1805AEFC8 (--RSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@QEBAXAEBUSnapFlyoutInst.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall winrt::impl::invoke<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>(
        _QWORD *a1,
        __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2 + 16;
  try
  {
    winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler::operator()(a1, &v5);
  }
  catch ( ... )
  {
    v3 = *winrt::to_hresult(&v5);
    ___load_runtime_function_P6AHHHPEAX__EP6AHHH0__E_impl_winrt__YAXPEBDAEAP6AHHHPEAX__EP6AHHH1__E_Z(
      v4,
      &`winrt::impl::invoke<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>'::`4'::handler);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))`winrt::impl::invoke<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>'::`4'::handler)(
      v3,
      0LL,
      0LL);
    return v3 != -2147417848 && v3 != -2147023174 && v3 != -1996357631;
  }
  return 1;
}
