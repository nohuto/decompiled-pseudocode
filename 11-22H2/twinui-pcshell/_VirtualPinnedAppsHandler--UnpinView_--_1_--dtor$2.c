/*
 * XREFs of _VirtualPinnedAppsHandler::UnpinView_::_1_::dtor$2 @ 0x180615E1C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualPinnedAppsHandler::UnpinView_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((__int64 *)(a2 + 32));
}
