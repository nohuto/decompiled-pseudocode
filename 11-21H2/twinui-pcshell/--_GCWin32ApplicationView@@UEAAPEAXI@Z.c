/*
 * XREFs of ??_GCWin32ApplicationView@@UEAAPEAXI@Z @ 0x180168570
 * Callers:
 *     <none>
 * Callees:
 *     ??1CWin32ApplicationView@@UEAA@XZ @ 0x1801685AC (--1CWin32ApplicationView@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

CWin32ApplicationView *__fastcall CWin32ApplicationView::`scalar deleting destructor'(
        CWin32ApplicationView *this,
        char a2)
{
  CWin32ApplicationView::~CWin32ApplicationView(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x110uLL);
  return this;
}
