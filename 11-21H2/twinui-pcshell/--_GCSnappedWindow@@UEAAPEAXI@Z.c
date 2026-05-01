/*
 * XREFs of ??_GCSnappedWindow@@UEAAPEAXI@Z @ 0x1805AB390
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1CSnappedWindow@@UEAA@XZ @ 0x1805AB35C (--1CSnappedWindow@@UEAA@XZ.c)
 */

CSnappedWindow *__fastcall CSnappedWindow::`scalar deleting destructor'(CSnappedWindow *this, char a2)
{
  CSnappedWindow::~CSnappedWindow(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
