/*
 * XREFs of _VirtualDesktopItemCollection::CurrentVirtualDesktopChanged_::_1_::dtor$1 @ 0x180565F1B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopItemCollection::CurrentVirtualDesktopChanged_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((__int64 *)(a2 + 32));
}
