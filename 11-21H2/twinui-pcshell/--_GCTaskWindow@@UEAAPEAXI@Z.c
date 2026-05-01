/*
 * XREFs of ??_GCTaskWindow@@UEAAPEAXI@Z @ 0x18012DA40
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTaskWindow@@UEAA@XZ @ 0x18012DA7C (--1CTaskWindow@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

CTaskWindow *__fastcall CTaskWindow::`scalar deleting destructor'(CTaskWindow *this, char a2)
{
  CTaskWindow::~CTaskWindow(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x98uLL);
  return this;
}
