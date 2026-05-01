/*
 * XREFs of ??_EDragInputHandler@@EEAAPEAXI@Z @ 0x1804D0030
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1DragInputHandler@@EEAA@XZ @ 0x1804CFF20 (--1DragInputHandler@@EEAA@XZ.c)
 */

DragInputHandler *__fastcall DragInputHandler::`vector deleting destructor'(DragInputHandler *this, char a2)
{
  DragInputHandler::~DragInputHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
