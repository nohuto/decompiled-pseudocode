/*
 * XREFs of ??_EWindowDragInputProvider@@UEAAPEAXI@Z @ 0x18067A590
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1WindowDragInputProvider@@UEAA@XZ @ 0x18068AD90 (--1WindowDragInputProvider@@UEAA@XZ.c)
 */

WindowDragInputProvider *__fastcall WindowDragInputProvider::`vector deleting destructor'(
        WindowDragInputProvider *this,
        char a2)
{
  WindowDragInputProvider::~WindowDragInputProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
