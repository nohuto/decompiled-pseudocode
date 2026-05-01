/*
 * XREFs of ??1?$ScopeExitFn@V_lambda_5412139df090f220eeb5e1a31b6fef59_@@@details@wil@@QEAA@XZ @ 0x18062A598
 * Callers:
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1_::_1_::dtor$4 @ 0x180219C78 (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_180219C78.c)
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1_::_1_::dtor$9 @ 0x180219D28 (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_180219D28.c)
 * Callees:
 *     ??R_lambda_5412139df090f220eeb5e1a31b6fef59_@@QEBA@XZ @ 0x18062A864 (--R_lambda_5412139df090f220eeb5e1a31b6fef59_@@QEBA@XZ.c)
 */

__int64 __fastcall wil::details::ScopeExitFn<_lambda_5412139df090f220eeb5e1a31b6fef59_>::~ScopeExitFn<_lambda_5412139df090f220eeb5e1a31b6fef59_>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return _lambda_5412139df090f220eeb5e1a31b6fef59_::operator()(a1);
  }
  return result;
}
