/*
 * XREFs of _winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::PostTransition_::_1_::dtor$2 @ 0x1800656A9
 * Callers:
 *     <none>
 * Callees:
 *     ??1IScreenRotationRejuvTransitionHandler@Private@Transitions@Udwm@winrt@@QEAA@XZ @ 0x180062B54 (--1IScreenRotationRejuvTransitionHandler@Private@Transitions@Udwm@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::PostTransition_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 200) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 200) &= ~1u;
    winrt::Udwm::Transitions::Private::IScreenRotationRejuvTransitionHandler::~IScreenRotationRejuvTransitionHandler((winrt::Udwm::Transitions::Private::IScreenRotationRejuvTransitionHandler *)(a2 + 208));
  }
}
