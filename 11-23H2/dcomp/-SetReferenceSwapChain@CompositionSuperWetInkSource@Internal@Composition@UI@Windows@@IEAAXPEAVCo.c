/*
 * XREFs of ?SetReferenceSwapChain@CompositionSuperWetInkSource@Internal@Composition@UI@Windows@@IEAAXPEAVCompositionSurfaceBrush@345@PEAVCompositionSwapChain@345@@Z @ 0x1801A1934
 * Callers:
 *     ?Destroy@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAXXZ @ 0x180185200 (-Destroy@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?put_ReferenceSwapChain@Api@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAJPEAUICompositionSurfaceBrush@456@@Z @ 0x180185870 (-put_ReferenceSwapChain@Api@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Wind.c)
 *     ?Destroy@CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAXXZ @ 0x1801859D0 (-Destroy@CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?put_ReferenceSwapChain@Api@CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAJPEAUICompositionSurfaceBrush@456@@Z @ 0x180185F60 (-put_ReferenceSwapChain@Api@CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@UE.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

void __fastcall Windows::UI::Composition::Internal::CompositionSuperWetInkSource::SetReferenceSwapChain(
        Windows::UI::Composition::Internal::CompositionSuperWetInkSource *this,
        struct Windows::UI::Composition::CompositionSurfaceBrush *a2,
        struct Windows::UI::Composition::CompositionSwapChain *a3)
{
  Microsoft::WRL2::NestableRuntimeClass *v6; // rcx
  int v7; // r9d
  Microsoft::WRL2::NestableRuntimeClass *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( a3 != *((struct Windows::UI::Composition::CompositionSwapChain **)this + 19) )
  {
    if ( a3 )
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(a3);
    v6 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 19);
    *((_QWORD *)this + 19) = a3;
    if ( v6 )
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v6);
    v7 = 0;
    if ( a3 )
      v7 = *(_DWORD *)(*((_QWORD *)a3 + 18) + 12LL);
    DirectComposition::CDevice::ResourceSetReferenceProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      0,
      v7);
  }
  if ( a2 != *((struct Windows::UI::Composition::CompositionSurfaceBrush **)this + 20) )
  {
    if ( a2 )
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(a2);
    v8 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 20);
    *((_QWORD *)this + 20) = a2;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v8);
  }
}
