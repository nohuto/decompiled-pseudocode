/*
 * XREFs of _CWin32ApplicationView::EnumerateOwnershipTree_::_1_::dtor$1 @ 0x180312450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CWin32ApplicationView::EnumerateOwnershipTree_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)(a2 + 64));
}
