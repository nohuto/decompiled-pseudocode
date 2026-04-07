/*
 * XREFs of ?NotifyWindowDestruction@CDesktopThumbnailBase@@UEAAXPEAVCWindowData@@@Z @ 0x180005730
 * Callers:
 *     ?NotifyWindowDestruction@CVirtualDesktopThumbnail@@UEAAXPEAVCWindowData@@@Z @ 0x180005660 (-NotifyWindowDestruction@CVirtualDesktopThumbnail@@UEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?_GetIndex@CDesktopThumbnailBase@@IEAAHPEBVCTopLevelWindow@@@Z @ 0x1800063A4 (-_GetIndex@CDesktopThumbnailBase@@IEAAHPEBVCTopLevelWindow@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180050730 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RemoveAt@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x1800B27A8 (-RemoveAt@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CDesktopThumbnailBase::NotifyWindowDestruction(
        CDesktopThumbnailBase *this,
        const struct CTopLevelWindow **a2)
{
  int Index; // eax
  __int64 v3; // rcx
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx

  Index = CDesktopThumbnailBase::_GetIndex(this, a2[55]);
  v4 = (unsigned int)Index;
  if ( Index >= 0 )
  {
    v5 = (_QWORD *)(v3 + 248);
    VisualCollection::Remove(
      (VisualCollection *)(v3 + 32),
      *(struct CVisual **)(*(_QWORD *)(v3 + 248) + 16LL * (unsigned int)Index + 8));
    v6 = *(CBaseObject **)(*v5 + 16 * v4);
    if ( v6 )
      CBaseObject::Release(v6);
    v7 = *(CBaseObject **)(*v5 + 16 * v4 + 8);
    if ( v7 )
      CBaseObject::Release(v7);
    DynArray<CIconicBitmapPending,0>::RemoveAt(v5, (unsigned int)v4);
  }
}
