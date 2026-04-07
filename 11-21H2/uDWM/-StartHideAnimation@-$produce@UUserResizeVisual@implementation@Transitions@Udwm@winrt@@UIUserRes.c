/*
 * XREFs of ?StartHideAnimation@?$produce@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserResizeVisual@345@@impl@winrt@@UEAAHPEAX@Z @ 0x1800FF8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800126F8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ?StartHideAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXUUnloadDelegate@345@@Z @ 0x1800FF930 (-StartHideAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXUUnloadDelegate.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::UserResizeVisual,winrt::Udwm::Transitions::IUserResizeVisual>::StartHideAnimation(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v3);
  try
  {
    winrt::Udwm::Transitions::implementation::UserResizeVisual::StartHideAnimation();
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
