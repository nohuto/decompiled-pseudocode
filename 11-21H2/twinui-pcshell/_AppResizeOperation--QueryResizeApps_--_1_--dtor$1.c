/*
 * XREFs of _AppResizeOperation::QueryResizeApps_::_1_::dtor$1 @ 0x180511C98
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AppResizeOperation::QueryResizeApps_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)(a2 + 48));
}
