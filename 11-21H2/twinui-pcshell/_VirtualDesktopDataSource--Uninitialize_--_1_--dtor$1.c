/*
 * XREFs of _VirtualDesktopDataSource::Uninitialize_::_1_::dtor$1 @ 0x18048BCB8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopDataSource::Uninitialize_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)(a2 + 64));
}
