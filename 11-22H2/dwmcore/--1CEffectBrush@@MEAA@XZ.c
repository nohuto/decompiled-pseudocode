/*
 * XREFs of ??1CEffectBrush@@MEAA@XZ @ 0x1800B6374
 * Callers:
 *     ??_GCEffectBrush@@MEAAPEAXI@Z @ 0x1800B6330 (--_GCEffectBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180097870 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ReleaseResources@CEffectBrush@@AEAAXXZ @ 0x1800B6250 (-ReleaseResources@CEffectBrush@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E12E0 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F3C10 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CEffectBrush::~CEffectBrush(CEffectBrush *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CEffectBrush::`vftable'{for `CBrush'};
  *((_QWORD *)this + 11) = &CEffectBrush::`vftable'{for `CPropertySet::IValueChangeListener'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &CEffectBrush::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CEffectBrush::`vftable'{for `IContent'};
  v2 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v2 + 60) = v2 - 120;
  v3 = *(int *)(*((_QWORD *)this + 8) + 8LL);
  *(_DWORD *)((char *)this + v3 + 60) = v3 - 136;
  CEffectBrush::ReleaseResources(this);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 120);
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((char *)this + 112);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((char *)this + 104);
  CBrush::~CBrush(this);
}
