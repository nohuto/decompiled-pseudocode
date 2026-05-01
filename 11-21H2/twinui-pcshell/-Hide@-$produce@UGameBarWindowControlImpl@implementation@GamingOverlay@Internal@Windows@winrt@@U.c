/*
 * XREFs of ?Hide@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHXZ @ 0x180342190
 * Callers:
 *     <none>
 * Callees:
 *     ?Hide@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXXZ @ 0x1803421E8 (-Hide@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXXZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,winrt::Windows::Internal::GamingOverlay::IGameBarWindowControl>::Hide(
        __int64 a1)
{
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v1; // rcx
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *)((a1 - 16) & -(__int64)(a1 != 0));
  try
  {
    winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::Hide(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
