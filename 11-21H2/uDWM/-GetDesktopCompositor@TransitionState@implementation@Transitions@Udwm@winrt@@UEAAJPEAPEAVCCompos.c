/*
 * XREFs of ?GetDesktopCompositor@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCCompositor@@@Z @ 0x1800FD210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::Udwm::Transitions::implementation::TransitionState::GetDesktopCompositor(
        winrt::Udwm::Transitions::implementation::TransitionState *this,
        struct CCompositor **a2)
{
  volatile signed __int32 *v2; // rax

  v2 = (volatile signed __int32 *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5);
  if ( v2 )
    _InterlockedIncrement(v2 + 2);
  *a2 = (struct CCompositor *)v2;
  return 0LL;
}
