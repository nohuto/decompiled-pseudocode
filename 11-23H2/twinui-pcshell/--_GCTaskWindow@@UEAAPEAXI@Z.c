/*
 * XREFs of ??_GCTaskWindow@@UEAAPEAXI@Z @ 0x1800666F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTaskWindow@@UEAA@XZ @ 0x18006672C (--1CTaskWindow@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

CTaskWindow *__fastcall CTaskWindow::`scalar deleting destructor'(CTaskWindow *this, char a2)
{
  CTaskWindow::~CTaskWindow(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x98uLL);
  return this;
}
