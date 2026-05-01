/*
 * XREFs of ??_EMultitaskingViewGestureHandler@@UEAAPEAXI@Z @ 0x1800AAA40
 * Callers:
 *     <none>
 * Callees:
 *     ??1MultitaskingViewGestureHandler@@UEAA@XZ @ 0x1800AAA7C (--1MultitaskingViewGestureHandler@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

MultitaskingViewGestureHandler *__fastcall MultitaskingViewGestureHandler::`vector deleting destructor'(
        MultitaskingViewGestureHandler *this,
        char a2)
{
  MultitaskingViewGestureHandler::~MultitaskingViewGestureHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xE0uLL);
  return this;
}
