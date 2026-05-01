/*
 * XREFs of _CSplashScreen::OnActivationEnd_::_1_::dtor$1 @ 0x18030EA6F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSplashScreen::OnActivationEnd_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((__int64 *)(a2 + 48));
}
