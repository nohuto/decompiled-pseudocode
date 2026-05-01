/*
 * XREFs of _ShellPositionerManager::PresentationRequested_::_1_::dtor$10 @ 0x1805A3C2F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ShellPositionerManager::PresentationRequested_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((__int64 *)(a2 + 96));
}
