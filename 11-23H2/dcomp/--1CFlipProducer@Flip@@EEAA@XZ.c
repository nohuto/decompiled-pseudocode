/*
 * XREFs of ??1CFlipProducer@Flip@@EEAA@XZ @ 0x1801AA1E4
 * Callers:
 *     ??_ECFlipProducer@Flip@@EEAAPEAXI@Z @ 0x1801AA280 (--_ECFlipProducer@Flip@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ?HRESULTFromNTSTATUS@@YAJJ@Z @ 0x1801B246C (-HRESULTFromNTSTATUS@@YAJJ@Z.c)
 */

void __fastcall Flip::CFlipProducer::~CFlipProducer(Flip::CFlipProducer *this)
{
  bool v1; // zf
  int v3; // eax
  int v4; // eax
  void *v5; // rcx
  __int64 *v6; // rdi
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_BYTE *)this + 16) == 0;
  *(_QWORD *)this = &Flip::CFlipProducer::`vftable';
  if ( !v1 )
  {
    v3 = NtFlipObjectDisconnectEndpoint(*((_QWORD *)this + 3), 1LL);
    v4 = HRESULTFromNTSTATUS(v3);
    if ( v4 < 0 )
      ModuleFailFastForHRESULT(v4, retaddr);
  }
  v5 = (void *)*((_QWORD *)this + 3);
  if ( v5 )
    CloseHandle(v5);
  v6 = (__int64 *)*((_QWORD *)this + 11);
  if ( v6 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(v6 + 1);
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(v6);
    operator delete(v6);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 6);
}
