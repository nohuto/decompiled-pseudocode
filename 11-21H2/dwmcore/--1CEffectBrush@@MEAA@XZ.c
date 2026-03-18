/*
 * XREFs of ??1CEffectBrush@@MEAA@XZ @ 0x180040464
 * Callers:
 *     ??_GCEffectBrush@@MEAAPEAXI@Z @ 0x180040350 (--_GCEffectBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseResources@CEffectBrush@@AEAAXXZ @ 0x180040394 (-ReleaseResources@CEffectBrush@@AEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCVector3Force@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EA9A4 (-InternalRelease@-$ComPtr@VCVector3Force@@@WRL@Microsoft@@IEAAKXZ.c)
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
  *(_DWORD *)((char *)this + v2 + 60) = v2 - 112;
  v3 = *(int *)(*((_QWORD *)this + 8) + 8LL);
  *(_DWORD *)((char *)this + v3 + 60) = v3 - 128;
  CEffectBrush::ReleaseResources(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 120);
  Microsoft::WRL::ComPtr<CVector3Force>::InternalRelease((char *)this + 112);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((char *)this + 104);
  CBrush::~CBrush(this);
}
