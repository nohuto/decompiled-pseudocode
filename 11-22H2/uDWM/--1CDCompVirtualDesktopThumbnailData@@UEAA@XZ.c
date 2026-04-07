/*
 * XREFs of ??1CDCompVirtualDesktopThumbnailData@@UEAA@XZ @ 0x180014EA8
 * Callers:
 *     ??_GCDCompVirtualDesktopThumbnailData@@UEAAPEAXI@Z @ 0x180014B70 (--_GCDCompVirtualDesktopThumbnailData@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180038C6C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CDCompVirtualDesktopThumbnailData::~CDCompVirtualDesktopThumbnailData(
        CDCompVirtualDesktopThumbnailData *this)
{
  CBaseObject *v2; // rcx

  *(_QWORD *)this = &CDCompVirtualDesktopThumbnailData::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 16);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 16) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 168);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 136);
}
