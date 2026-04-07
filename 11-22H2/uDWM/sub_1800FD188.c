/*
 * XREFs of sub_1800FD188 @ 0x1800FD188
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800FD188(__int64 a1, __int64 a2)
{
  char v2; // of

  if ( !v2 )
    JUMPOUT(0x1800FD162LL);
  BYTE1(a2) = 65;
  return winrt::implements<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::Udwm::Transitions::TransitionManager,winrt::Udwm::Transitions::Private::IRotationTransitionManager,winrt::Udwm::Transitions::Private::IWindowStateTransitionManager,winrt::Udwm::Transitions::Private::IAnimationsTransitionManager,Udwm::Transitions::ITransitionManagerNativePrivate>::AddRef(
           a1,
           a2);
}
