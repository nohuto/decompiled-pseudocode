/*
 * XREFs of ?CancelPendingAnimations@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHXZ @ 0x180014050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::CancelPendingAnimations(
        __int64 a1)
{
  __int64 v1; // rax

  v1 = a1 + 24;
  if ( !a1 )
    v1 = 32LL;
  *(_DWORD *)(*(_QWORD *)v1 + 388LL) = 0;
  return 0LL;
}
