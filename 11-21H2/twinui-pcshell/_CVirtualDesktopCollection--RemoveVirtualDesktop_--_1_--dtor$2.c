/*
 * XREFs of _CVirtualDesktopCollection::RemoveVirtualDesktop_::_1_::dtor$2 @ 0x180541CE2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVirtualDesktopCollection::RemoveVirtualDesktop_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((__int64 *)(a2 + 64));
}
