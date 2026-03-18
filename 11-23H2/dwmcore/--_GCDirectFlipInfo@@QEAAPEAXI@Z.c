/*
 * XREFs of ??_GCDirectFlipInfo@@QEAAPEAXI@Z @ 0x1801DB2B4
 * Callers:
 *     ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x1800FC754 (-ClearDirectFlip@COverlayContext@@AEAAXXZ.c)
 * Callees:
 *     ??1CDirectFlipInfo@@QEAA@XZ @ 0x1800FC804 (--1CDirectFlipInfo@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 */

CDirectFlipInfo *__fastcall CDirectFlipInfo::`scalar deleting destructor'(CDirectFlipInfo *this)
{
  CDirectFlipInfo::~CDirectFlipInfo(this);
  operator delete(this);
  return this;
}
