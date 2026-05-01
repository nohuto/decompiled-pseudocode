/*
 * XREFs of _CVirtualDesktopForegroundPolicy::_FindDesktopForView_::_1_::dtor$1 @ 0x180542456
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVirtualDesktopForegroundPolicy::_FindDesktopForView_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((__int64 *)(a2 + 128));
}
