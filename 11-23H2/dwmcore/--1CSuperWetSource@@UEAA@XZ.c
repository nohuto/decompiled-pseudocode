/*
 * XREFs of ??1CSuperWetSource@@UEAA@XZ @ 0x1801C1B80
 * Callers:
 *     ??1CGenericInk@@EEAA@XZ @ 0x18022C7D8 (--1CGenericInk@@EEAA@XZ.c)
 *     ??1?$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCSuperWetSource@@@@MEAA@XZ @ 0x180252CF8 (--1-$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCSuperWetSource@@@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x180072578 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E20AC (-InternalRelease@-$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CSuperWetSource::~CSuperWetSource(CSuperWetSource *this)
{
  void *v2; // rcx
  void *v3; // rcx
  CResource *v4; // rcx

  v2 = (void *)*((_QWORD *)this + 15);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_QWORD *)this + 14);
  if ( v3 )
    operator delete(v3);
  v4 = (CResource *)*((_QWORD *)this + 13);
  if ( v4 )
  {
    *((_QWORD *)this + 13) = 0LL;
    CResource::InternalRelease(v4);
  }
  Microsoft::WRL::ComPtr<CGenericInkTipPointSource>::InternalRelease((volatile signed __int32 **)this + 11);
  CResource::~CResource(this);
}
