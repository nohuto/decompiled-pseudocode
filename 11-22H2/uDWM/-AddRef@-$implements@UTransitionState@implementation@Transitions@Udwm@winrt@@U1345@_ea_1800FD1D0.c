/*
 * XREFs of ?AddRef@?$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@34@UITransitionStateNativePrivate@34@@winrt@@UEAAKXZ @ 0x1800FD1D0
 * Callers:
 *     ?AddRef@?$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@34@UITransitionStateNativePrivate@34@@winrt@@W7EAAKXZ @ 0x180066620 (-AddRef@-$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Udwm::Transitions::implementation::TransitionState,winrt::Udwm::Transitions::TransitionState,Udwm::Transitions::ITransitionStateNative,Udwm::Transitions::ITransitionStateNativePrivate>::AddRef(
        __int64 a1)
{
  signed __int64 v1; // rdx
  unsigned int v2; // r8d
  bool v3; // zf
  signed __int64 v4; // rax

  v1 = *(_QWORD *)(a1 + 32);
  while ( v1 >= 0 )
  {
    v2 = v1 + 1;
    v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v1 + 1, v1);
    v3 = v1 == v4;
    v1 = v4;
    if ( v3 )
      return v2;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 24));
}
