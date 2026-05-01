/*
 * XREFs of _AppResizeView::CommitResize_::_1_::dtor$1 @ 0x1805D6E7A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall AppResizeView::CommitResize_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IAppLayoutOperation>::~ComPtr<IAppLayoutOperation>((_QWORD *)(a2 + 40));
}
