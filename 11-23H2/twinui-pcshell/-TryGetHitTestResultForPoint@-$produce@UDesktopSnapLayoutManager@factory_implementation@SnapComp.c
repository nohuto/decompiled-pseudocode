/*
 * XREFs of ?TryGetHitTestResultForPoint@?$produce@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIDesktopSnapLayoutManagerStatics@34567@@impl@winrt@@UEAAHUPoint@Foundation@Windows@3@PEAPEAX@Z @ 0x1806857C0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryGetHitTestResultForPoint@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AUIInspectable@Foundation@67@AEBUPoint@967@@Z @ 0x180685830 (-TryGetHitTestResultForPoint@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Interna.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerStatics>::TryGetHitTestResultForPoint(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 result; // rax
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = a1;
  *a3 = 0LL;
  try
  {
    winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::TryGetHitTestResultForPoint((const struct winrt::Windows::Foundation::Point *)&v5);
    *a3 = v5;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v5);
  }
  return result;
}
