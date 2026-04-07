/*
 * XREFs of ??1Mesh2D@@QEAA@XZ @ 0x1800E1E90
 * Callers:
 *     ?UpdateInstructions@CTetherVisual@@IEAAJXZ @ 0x1800E2904 (-UpdateInstructions@CTetherVisual@@IEAAJXZ.c)
 *     _CTetherVisual::UpdateInstructions_::_1_::dtor$0 @ 0x1800E2B9F (_CTetherVisual--UpdateInstructions_--_1_--dtor$0.c)
 *     ?UpdateVisual@CTouchDragVisual@@AEAAJXZ @ 0x1800E70F8 (-UpdateVisual@CTouchDragVisual@@AEAAJXZ.c)
 *     _CTouchDragVisual::UpdateVisual_::_1_::dtor$0 @ 0x1800E725B (_CTouchDragVisual--UpdateVisual_--_1_--dtor$0.c)
 *     _CTouchDragVisual::UpdateVisual_::_1_::dtor$1 @ 0x1800E7267 (_CTouchDragVisual--UpdateVisual_--_1_--dtor$1.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18001FB8C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall Mesh2D::~Mesh2D(Mesh2D *this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 12);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 8);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 4);
  DynArrayImpl<0>::~DynArrayImpl<0>(this);
}
