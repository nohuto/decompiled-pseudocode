/*
 * XREFs of ?find_interface@?$implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@34@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180044320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::TopLevelWindow3DWrapper,Udwm::Transitions::ITransitionAnimationVisualNative>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 result; // rax

  v2 = *a2 - winrt::impl::guid_v<winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>;
  if ( *a2 == winrt::impl::guid_v<winrt::Udwm::Transitions::ITopLevelWindow3DWrapper> )
    v2 = a2[1] - 0x61932F470691AC9CLL;
  if ( v2 )
  {
    v3 = *a2 - winrt::impl::guid_v<Udwm::Transitions::ITransitionAnimationVisualNative>;
    if ( *a2 == winrt::impl::guid_v<Udwm::Transitions::ITransitionAnimationVisualNative> )
      v3 = a2[1] - 0x73F63BA0C2CDDDB6LL;
    return (a1 - 16) & -(__int64)(v3 == 0);
  }
  else
  {
    result = a1 - 8;
    if ( a1 == 16 )
      return 0LL;
  }
  return result;
}
