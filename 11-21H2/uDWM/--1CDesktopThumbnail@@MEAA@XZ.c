/*
 * XREFs of ??1CDesktopThumbnail@@MEAA@XZ @ 0x1800B1B9C
 * Callers:
 *     ??_ECDesktopThumbnail@@MEAAPEAXI@Z @ 0x1800B1DB0 (--_ECDesktopThumbnail@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18001FB8C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CDesktopThumbnail::~CDesktopThumbnail(CDesktopThumbnail *this)
{
  *(_QWORD *)this = &CDesktopThumbnail::`vftable';
  CDesktopThumbnail::s_pThumbnailNoRef = 0LL;
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 36);
  CDesktopThumbnailBase::~CDesktopThumbnailBase(this);
}
