/*
 * XREFs of ?put_IsTitleBarEnabled@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAH_N@Z @ 0x180412CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsTitleBarEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAX_N@Z @ 0x180410154 (-IsTitleBarEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,winrt::Windows::Internal::GamingOverlay::IGameBarWindowControl>::put_IsTitleBarEnabled(
        __int64 a1,
        char a2)
{
  RTL_SRWLOCK *v2; // rcx
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = (RTL_SRWLOCK *)((a1 - 16) & -(__int64)(a1 != 0));
  try
  {
    winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::IsTitleBarEnabled(v2, a2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
