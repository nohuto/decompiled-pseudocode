/*
 * XREFs of ??1CLivePreview@@MEAA@XZ @ 0x1800C65B0
 * Callers:
 *     ??_GCLivePreview@@MEAAPEAXI@Z @ 0x1800C6770 (--_GCLivePreview@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180038C6C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800558D4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x1800C7B80 (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ @ 0x1800C8CD8 (-_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ.c)
 */

void __fastcall CLivePreview::~CLivePreview(CBaseObject **this)
{
  int v2; // eax
  __int64 v3; // rsi
  __int64 v4; // rdi
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rcx
  CBaseObject *v11; // rcx
  CBaseObject *v12; // rcx
  CBaseObject *v13; // rax
  bool v14; // zf
  char v15; // al
  CBaseObject *v16; // rcx
  CBaseObject *v17; // rcx

  *this = (CBaseObject *)&CLivePreview::`vftable';
  CLivePreview::_ClearAnimationOpaqueVisuals((CLivePreview *)this);
  v2 = *((_DWORD *)this + 84) - 1;
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = 40LL * v2;
    do
    {
      v5 = *(CBaseObject **)((char *)this[39] + v4 + 8);
      if ( v5 )
      {
        CBaseObject::Release(v5);
        *(_QWORD *)((char *)this[39] + v4 + 8) = 0LL;
      }
      v6 = *(CBaseObject **)((char *)this[39] + v4 + 16);
      if ( v6 )
      {
        CBaseObject::Release(v6);
        *(_QWORD *)((char *)this[39] + v4 + 16) = 0LL;
      }
      v4 -= 40LL;
      --v3;
    }
    while ( v3 >= 0 );
  }
  v7 = this[56];
  if ( v7 )
    CBaseObject::Release(v7);
  v8 = this[57];
  if ( v8 )
    CBaseObject::Release(v8);
  v9 = this[58];
  if ( v9 )
    CBaseObject::Release(v9);
  v10 = this[59];
  if ( v10 )
    CBaseObject::Release(v10);
  v11 = this[60];
  if ( v11 )
    CBaseObject::Release(v11);
  v12 = this[61];
  if ( v12 )
    CBaseObject::Release(v12);
  v13 = this[55];
  if ( v13 )
  {
    v14 = (*((_DWORD *)v13 + 2))-- == 1;
    v15 = CDesktopManager::s_fTimelineDirty;
    if ( v14 )
      v15 = 1;
    CDesktopManager::s_fTimelineDirty = v15;
  }
  v16 = this[66];
  if ( v16 )
    CBaseObject::Release(v16);
  CLivePreview::_ReleasePerMonitorResources((CLivePreview *)this);
  v17 = this[62];
  if ( v17 )
  {
    std::_Deallocate<16,0>(v17, (this[64] - v17) & 0xFFFFFFFFFFFFFFF8uLL);
    this[62] = 0LL;
    this[63] = 0LL;
    this[64] = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 51);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 47);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 43);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 39);
  CRenderDataVisual::~CRenderDataVisual(this);
}
