/*
 * XREFs of ??_GCClassicWindow@@MEAAPEAXI@Z @ 0x180052840
 * Callers:
 *     <none>
 * Callees:
 *     ??1CClassicWindow@@MEAA@XZ @ 0x18005287C (--1CClassicWindow@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

CClassicWindow *__fastcall CClassicWindow::`scalar deleting destructor'(CClassicWindow *this, char a2)
{
  CClassicWindow::~CClassicWindow(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x58uLL);
  return this;
}
