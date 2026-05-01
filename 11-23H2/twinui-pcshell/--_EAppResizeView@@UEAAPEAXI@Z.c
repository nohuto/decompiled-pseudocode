/*
 * XREFs of ??_EAppResizeView@@UEAAPEAXI@Z @ 0x1805D68E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1AppResizeView@@UEAA@XZ @ 0x1805D6660 (--1AppResizeView@@UEAA@XZ.c)
 */

AppResizeView *__fastcall AppResizeView::`vector deleting destructor'(AppResizeView *this, char a2)
{
  AppResizeView::~AppResizeView(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
