/*
 * XREFs of ??1CDesktopThumbnailCVIVisual@@MEAA@XZ @ 0x1800B1CB8
 * Callers:
 *     ??_GCDesktopThumbnailCVIVisual@@MEAAPEAXI@Z @ 0x1800B1EF0 (--_GCDesktopThumbnailCVIVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18000C710 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CDesktopThumbnailCVIVisual::~CDesktopThumbnailCVIVisual(CDesktopThumbnailCVIVisual *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx

  *(_QWORD *)this = &CDesktopThumbnailCVIVisual::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 36);
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = (CBaseObject *)*((_QWORD *)this + 38);
  if ( v3 )
    CBaseObject::Release(v3);
  v4 = (CBaseObject *)*((_QWORD *)this + 39);
  if ( v4 )
    CBaseObject::Release(v4);
  VisualCollection::RemoveAll((CDesktopThumbnailCVIVisual *)((char *)this + 32));
  CRenderDataVisual::~CRenderDataVisual(this);
}
