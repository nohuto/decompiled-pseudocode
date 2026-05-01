/*
 * XREFs of ??_GCSnappedWindow@@UEAAPEAXI@Z @ 0x1802E99F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1CSnappedWindow@@UEAA@XZ @ 0x180686AB4 (--1CSnappedWindow@@UEAA@XZ.c)
 */

CSnappedWindow *__fastcall CSnappedWindow::`scalar deleting destructor'(CSnappedWindow *this, char a2)
{
  CSnappedWindow::~CSnappedWindow(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
