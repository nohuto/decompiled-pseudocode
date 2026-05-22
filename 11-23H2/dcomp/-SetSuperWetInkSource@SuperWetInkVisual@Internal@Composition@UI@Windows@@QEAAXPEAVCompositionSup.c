/*
 * XREFs of ?SetSuperWetInkSource@SuperWetInkVisual@Internal@Composition@UI@Windows@@QEAAXPEAVCompositionSuperWetInkSource@2345@@Z @ 0x180184B74
 * Callers:
 *     ?Destroy@SuperWetInkVisual@Internal@Composition@UI@Windows@@UEAAXXZ @ 0x180184B50 (-Destroy@SuperWetInkVisual@Internal@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?put_SuperWetInkSource@Api@SuperWetInkVisual@Internal@Composition@UI@Windows@@UEAAJPEAUICompositionSuperWetInkSource@3456@@Z @ 0x180184CC0 (-put_SuperWetInkSource@Api@SuperWetInkVisual@Internal@Composition@UI@Windows@@UEAAJPEAUIComposit.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 */

void __fastcall Windows::UI::Composition::Internal::SuperWetInkVisual::SetSuperWetInkSource(
        Windows::UI::Composition::Internal::SuperWetInkVisual *this,
        struct Windows::UI::Composition::Internal::CompositionSuperWetInkSource *a2)
{
  int v4; // edi
  Microsoft::WRL2::NestableRuntimeClass *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 != *((struct Windows::UI::Composition::Internal::CompositionSuperWetInkSource **)this + 41) )
  {
    v4 = 0;
    if ( a2 )
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(a2);
    v5 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 41);
    *((_QWORD *)this + 41) = a2;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v5);
    if ( a2 )
      v4 = *((_DWORD *)a2 + 32);
    DirectComposition::CDevice::ResourceSetReferenceProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      0,
      v4);
  }
}
