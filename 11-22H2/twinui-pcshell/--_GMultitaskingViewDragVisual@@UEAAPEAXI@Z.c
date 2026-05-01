/*
 * XREFs of ??_GMultitaskingViewDragVisual@@UEAAPEAXI@Z @ 0x1805955A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1MultitaskingViewDragVisual@@UEAA@XZ @ 0x18059550C (--1MultitaskingViewDragVisual@@UEAA@XZ.c)
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
