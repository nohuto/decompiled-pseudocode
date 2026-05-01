/*
 * XREFs of _VirtualDesktopController::SetDesktopWallpaper_::_1_::dtor$1 @ 0x18048DF84
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopController::SetDesktopWallpaper_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((__int64 *)(a2 + 72));
}
