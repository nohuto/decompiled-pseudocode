/*
 * XREFs of _WindowEventDispatcher::OnShellHookMessage_::_1_::dtor$39 @ 0x180219C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowEventDispatcher::OnShellHookMessage_::_1_::dtor_39(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(*(void **)(a2 + 56));
}
