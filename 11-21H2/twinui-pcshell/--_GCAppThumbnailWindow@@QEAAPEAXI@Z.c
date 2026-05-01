/*
 * XREFs of ??_GCAppThumbnailWindow@@QEAAPEAXI@Z @ 0x1804963F4
 * Callers:
 *     ??1?$_Temporary_owner@VCAppThumbnailWindow@@@std@@QEAA@XZ @ 0x180495CB0 (--1-$_Temporary_owner@VCAppThumbnailWindow@@@std@@QEAA@XZ.c)
 *     ?_Destroy@?$_Ref_count@VCAppThumbnailWindow@@@std@@EEAAXXZ @ 0x1804978D0 (-_Destroy@-$_Ref_count@VCAppThumbnailWindow@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1CAppThumbnailWindow@@QEAA@XZ @ 0x180495CD0 (--1CAppThumbnailWindow@@QEAA@XZ.c)
 */

CAppThumbnailWindow *__fastcall CAppThumbnailWindow::`scalar deleting destructor'(CAppThumbnailWindow *this)
{
  CAppThumbnailWindow::~CAppThumbnailWindow(this);
  operator delete(this);
  return this;
}
