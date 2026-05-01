/*
 * XREFs of ??1DragAndDropArgs@@QEAA@XZ @ 0x1804D7350
 * Callers:
 *     _ElementDragData::DragOver_::_1_::dtor$0 @ 0x1804D790D (_ElementDragData--DragOver_--_1_--dtor$0.c)
 *     _ElementDragData::PointerUp_::_1_::dtor$1 @ 0x1804D83D4 (_ElementDragData--PointerUp_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall DragAndDropArgs::~DragAndDropArgs(DragAndDropArgs *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 1);
}
