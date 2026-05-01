/*
 * XREFs of ??_EWindowArrangementView@@UEAAPEAXI@Z @ 0x1805D0F90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1WindowArrangementView@@UEAA@XZ @ 0x1805D0C30 (--1WindowArrangementView@@UEAA@XZ.c)
 */

WindowArrangementView *__fastcall WindowArrangementView::`vector deleting destructor'(
        WindowArrangementView *this,
        char a2)
{
  WindowArrangementView::~WindowArrangementView(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
