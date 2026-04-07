/*
 * XREFs of ??1CLivePreview@@MEAA@XZ @ 0x1800C1954
 * Callers:
 *     ??_GCLivePreview@@MEAAPEAXI@Z @ 0x1800C1AA0 (--_GCLivePreview@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000FF20 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18001FB8C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x1800C328C (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ @ 0x1800C43B8 (-_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ.c)
 */

void __fastcall CLivePreview::~CLivePreview(CBaseObject **this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rax
  bool v9; // zf
  char v10; // al
  CBaseObject *v11; // rcx
  CBaseObject *v12; // rcx

  *this = (CBaseObject *)&CLivePreview::`vftable';
  CLivePreview::_ClearAnimationOpaqueVisuals((CLivePreview *)this);
  v2 = this[60];
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = this[61];
  if ( v3 )
    CBaseObject::Release(v3);
  v4 = this[62];
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = this[63];
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = this[64];
  if ( v6 )
    CBaseObject::Release(v6);
  v7 = this[65];
  if ( v7 )
    CBaseObject::Release(v7);
  v8 = this[59];
  if ( v8 )
  {
    v9 = (*((_DWORD *)v8 + 2))-- == 1;
    v10 = CDesktopManager::s_fTimelineDirty;
    if ( v9 )
      v10 = 1;
    CDesktopManager::s_fTimelineDirty = v10;
  }
  v11 = this[70];
  if ( v11 )
    CBaseObject::Release(v11);
  CLivePreview::_ReleasePerMonitorResources((CLivePreview *)this);
  v12 = this[66];
  if ( v12 )
  {
    std::_Deallocate<16,0>(v12, (this[68] - v12) & 0xFFFFFFFFFFFFFFF8uLL);
    this[66] = 0LL;
    this[67] = 0LL;
    this[68] = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 55);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 51);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 47);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 43);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 39);
  CRenderDataVisual::~CRenderDataVisual((CRenderDataVisual *)this);
}
