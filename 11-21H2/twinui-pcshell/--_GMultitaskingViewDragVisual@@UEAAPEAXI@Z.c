/*
 * XREFs of ??_GMultitaskingViewDragVisual@@UEAAPEAXI@Z @ 0x1804DD7C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1MultitaskingViewDragVisual@@UEAA@XZ @ 0x1804DD72C (--1MultitaskingViewDragVisual@@UEAA@XZ.c)
 */

MultitaskingViewDragVisual *__fastcall MultitaskingViewDragVisual::`scalar deleting destructor'(
        MultitaskingViewDragVisual *this,
        char a2)
{
  MultitaskingViewDragVisual::~MultitaskingViewDragVisual(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
