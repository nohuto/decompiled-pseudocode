/*
 * XREFs of ??1CDCompVirtualDesktopThumbnailData@@UEAA@XZ @ 0x1801016B4
 * Callers:
 *     ??_GCDCompVirtualDesktopThumbnailData@@UEAAPEAXI@Z @ 0x180101CA0 (--_GCDCompVirtualDesktopThumbnailData@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18001FB8C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CDCompVirtualDesktopThumbnailData::~CDCompVirtualDesktopThumbnailData(
        CDCompVirtualDesktopThumbnailData *this)
{
  CBaseObject *v2; // rcx

  *(_QWORD *)this = &CDCompVirtualDesktopThumbnailData::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 15);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 15) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 20);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 16);
}
