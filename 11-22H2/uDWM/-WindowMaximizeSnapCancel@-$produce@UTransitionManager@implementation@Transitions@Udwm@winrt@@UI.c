/*
 * XREFs of ?WindowMaximizeSnapCancel@?$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIWindowStateTransitionManager@Private@345@@impl@winrt@@UEAAHXZ @ 0x1800FF730
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18002FA10 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x18002FA40 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?GetHandler@TransitionManager@implementation@Transitions@Udwm@winrt@@AEAA?AUITransitionHandler@345@W4ShellTransition@345@@Z @ 0x1800406CC (-GetHandler@TransitionManager@implementation@Transitions@Udwm@winrt@@AEAA-AUITransitionHandler@3.c)
 *     ?Cancel@?$consume_Udwm_Transitions_ITransitionHandler@UITransitionHandler@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x180040B94 (-Cancel@-$consume_Udwm_Transitions_ITransitionHandler@UITransitionHandler@Transitions@Udwm@winrt.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::Udwm::Transitions::Private::IWindowStateTransitionManager>::WindowMaximizeSnapCancel(
        __int64 a1)
{
  char v1; // al
  __int64 result; // rax
  void (__fastcall ***v3)(_QWORD, __int64 *, __int64 *); // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  winrt::Udwm::Transitions::implementation::TransitionManager::GetHandler(
    (a1 - 24) & -(__int64)(a1 != 0),
    (winrt::Windows::Foundation::IUnknown *)&v3,
    2);
  v4 = 0LL;
  v1 = winrt::Windows::Foundation::operator==(&v3, &v4);
  try
  {
    if ( !v1 )
      winrt::impl::consume_Udwm_Transitions_ITransitionHandler<winrt::Udwm::Transitions::ITransitionHandler>::Cancel(&v3);
    if ( v3 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v3);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
