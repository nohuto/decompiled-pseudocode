/*
 * XREFs of ??_GCAppThumbnailWindow@@QEAAPEAXI@Z @ 0x18054D2F0
 * Callers:
 *     ??1?$_Temporary_owner@VCAppThumbnailWindow@@@std@@QEAA@XZ @ 0x18054C438 (--1-$_Temporary_owner@VCAppThumbnailWindow@@@std@@QEAA@XZ.c)
 *     ?_Destroy@?$_Ref_count@VCAppThumbnailWindow@@@std@@EEAAXXZ @ 0x1805508B0 (-_Destroy@-$_Ref_count@VCAppThumbnailWindow@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1CAppThumbnailWindow@@QEAA@XZ @ 0x18054C540 (--1CAppThumbnailWindow@@QEAA@XZ.c)
 */

CAppThumbnailWindow *__fastcall CAppThumbnailWindow::`scalar deleting destructor'(CAppThumbnailWindow *this)
{
  CAppThumbnailWindow::~CAppThumbnailWindow(this);
  operator delete(this);
  return this;
}
