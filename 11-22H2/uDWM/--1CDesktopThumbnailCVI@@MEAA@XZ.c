/*
 * XREFs of ??1CDesktopThumbnailCVI@@MEAA@XZ @ 0x18001651C
 * Callers:
 *     ??_ECVirtualDesktopThumbnailCVI@@UEAAPEAXI@Z @ 0x1800164C0 (--_ECVirtualDesktopThumbnailCVI@@UEAAPEAXI@Z.c)
 *     ??1CPerMonitorDesktopThumbnail@@EEAA@XZ @ 0x1800B60E0 (--1CPerMonitorDesktopThumbnail@@EEAA@XZ.c)
 *     ??_GCDesktopThumbnailCVI@@MEAAPEAXI@Z @ 0x1800B6260 (--_GCDesktopThumbnailCVI@@MEAAPEAXI@Z.c)
 *     ??_GCDCompDesktopThumbnailCVI@@UEAAPEAXI@Z @ 0x180107F00 (--_GCDCompDesktopThumbnailCVI@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CDesktopThumbnailCVI::~CDesktopThumbnailCVI(CDesktopThumbnailCVI *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx

  *(_QWORD *)this = &CDesktopThumbnailCVI::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 3);
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v3 )
    CBaseObject::Release(v3);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
