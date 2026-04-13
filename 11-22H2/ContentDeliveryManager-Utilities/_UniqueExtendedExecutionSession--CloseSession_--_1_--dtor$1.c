/*
 * XREFs of _UniqueExtendedExecutionSession::CloseSession_::_1_::dtor$1 @ 0x1800D6A57
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UniqueExtendedExecutionSession::CloseSession_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>((void *)(a2 + 64));
}
