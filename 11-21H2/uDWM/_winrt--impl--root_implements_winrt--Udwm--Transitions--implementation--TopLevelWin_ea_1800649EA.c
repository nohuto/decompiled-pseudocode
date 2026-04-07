/*
 * XREFs of _winrt::impl::root_implements_winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper_winrt::Udwm::Transitions::TopLevelWindow3DWrapper_Udwm::Transitions::ITransitionAnimationVisualNative_::get_weak_winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper__::_1_::dtor$1 @ 0x1800649EA
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800D2044 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::impl::root_implements_winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper_winrt::Udwm::Transitions::TopLevelWindow3DWrapper_Udwm::Transitions::ITransitionAnimationVisualNative_::get_weak_winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper__::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(*(_QWORD *)(a2 + 88));
  }
  return result;
}
