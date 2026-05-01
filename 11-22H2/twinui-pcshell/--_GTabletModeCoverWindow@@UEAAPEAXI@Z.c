/*
 * XREFs of ??_GTabletModeCoverWindow@@UEAAPEAXI@Z @ 0x1801B2BA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1TabletModeCoverWindow@@UEAA@XZ @ 0x1801B2BDC (--1TabletModeCoverWindow@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

TabletModeCoverWindow *__fastcall TabletModeCoverWindow::`scalar deleting destructor'(
        TabletModeCoverWindow *this,
        char a2)
{
  TabletModeCoverWindow::~TabletModeCoverWindow(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xE0uLL);
  return this;
}
