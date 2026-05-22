/*
 * XREFs of _GamepadInterceptionHelper::GamepadInterceptionHelper_::_1_::dtor$1 @ 0x180069F4F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GamepadInterceptionHelper::GamepadInterceptionHelper_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IGamepadInterceptionTarget>::~ComPtr<IGamepadInterceptionTarget>(*(_QWORD *)(a2 + 48) + 16LL);
}
