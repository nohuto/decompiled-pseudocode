/*
 * XREFs of ??1DragAndDropArgs@@QEAA@XZ @ 0x18058F114
 * Callers:
 *     _ElementDragData::DragOver_::_1_::dtor$0 @ 0x18058F6C8 (_ElementDragData--DragOver_--_1_--dtor$0.c)
 *     _ElementDragData::PointerUp_::_1_::dtor$1 @ 0x180590194 (_ElementDragData--PointerUp_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall DragAndDropArgs::~DragAndDropArgs(DragAndDropArgs *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 1);
}
