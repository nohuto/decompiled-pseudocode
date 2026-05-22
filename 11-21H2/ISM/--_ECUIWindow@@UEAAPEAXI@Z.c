/*
 * XREFs of ??_ECUIWindow@@UEAAPEAXI@Z @ 0x180084A70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1CUIWindow@@UEAA@XZ @ 0x1800848B8 (--1CUIWindow@@UEAA@XZ.c)
 */

CUIWindow *__fastcall CUIWindow::`vector deleting destructor'(CUIWindow *this, char a2)
{
  CUIWindow::~CUIWindow(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
