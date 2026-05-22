/*
 * XREFs of ??1CSynchronousSuperWetInk@DirectComposition@@EEAA@XZ @ 0x1800FC0EC
 * Callers:
 *     ??_ECSynchronousSuperWetInk@DirectComposition@@EEAAPEAXI@Z @ 0x1800FC170 (--_ECSynchronousSuperWetInk@DirectComposition@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VCDelegatedInkTrailImpl@DirectComposition@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E6BD8 (-InternalRelease@-$ComPtr@VCDelegatedInkTrailImpl@DirectComposition@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall DirectComposition::CSynchronousSuperWetInk::~CSynchronousSuperWetInk(
        DirectComposition::CSynchronousSuperWetInk *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void *)*((_QWORD *)this + 7);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, *((_QWORD *)this + 9) - (_QWORD)v2);
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 6);
  if ( v3 )
    operator delete(v3);
  v4 = (void *)*((_QWORD *)this + 5);
  if ( v4 )
    operator delete(v4);
  Microsoft::WRL::ComPtr<DirectComposition::CDelegatedInkTrailImpl>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<DirectComposition::CDelegatedInkTrailImpl>::InternalRelease((__int64 *)this + 3);
  Microsoft::WRL::ComPtr<DirectComposition::CGenericInkProxy>::InternalRelease((DirectComposition::CTransformGroupProxy **)this + 2);
}
