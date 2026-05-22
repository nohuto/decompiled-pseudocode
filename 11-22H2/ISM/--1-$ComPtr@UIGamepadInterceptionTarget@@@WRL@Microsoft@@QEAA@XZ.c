/*
 * XREFs of ??1?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@QEAA@XZ @ 0x18006A0D8
 * Callers:
 *     _GamepadInterceptionHelper::GamepadInterceptionHelper_::_1_::dtor$1 @ 0x180069F4F (_GamepadInterceptionHelper--GamepadInterceptionHelper_--_1_--dtor$1.c)
 *     _GamepadInterceptionHelper::ClearGamepadInterceptionTarget_::_1_::dtor$0 @ 0x18006A82B (_GamepadInterceptionHelper--ClearGamepadInterceptionTarget_--_1_--dtor$0.c)
 *     _GamepadInterceptionHelper::SetGamepadInterceptionTarget_::_1_::dtor$0 @ 0x18006ACC3 (_GamepadInterceptionHelper--SetGamepadInterceptionTarget_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_ShellHandwritingProcessor_IContextualProcessor__::_1_::dtor$1 @ 0x18007787A (_Microsoft--WRL--Details--MakeAndInitialize_ShellHandwritingProcessor_IContextualPr_ea_18007787A.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Microsoft::WRL::ComPtr<IGamepadInterceptionTarget>::~ComPtr<IGamepadInterceptionTarget>(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
