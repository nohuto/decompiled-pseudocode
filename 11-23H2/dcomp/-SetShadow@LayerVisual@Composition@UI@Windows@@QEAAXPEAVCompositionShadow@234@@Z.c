/*
 * XREFs of ?SetShadow@LayerVisual@Composition@UI@Windows@@QEAAXPEAVCompositionShadow@234@@Z @ 0x180086634
 * Callers:
 *     ?put_Shadow@Api@LayerVisual@Composition@UI@Windows@@UEAAJPEAUICompositionShadow@345@@Z @ 0x180086490 (-put_Shadow@Api@LayerVisual@Composition@UI@Windows@@UEAAJPEAUICompositionShadow@345@@Z.c)
 *     ?Destroy@LayerVisual@Composition@UI@Windows@@UEAAXXZ @ 0x180086530 (-Destroy@LayerVisual@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

void __fastcall Windows::UI::Composition::LayerVisual::SetShadow(
        Windows::UI::Composition::LayerVisual *this,
        struct Windows::UI::Composition::CompositionShadow *a2)
{
  int v4; // r9d
  Microsoft::WRL2::NestableRuntimeClass *v5; // rcx

  if ( a2 != *((struct Windows::UI::Composition::CompositionShadow **)this + 45) )
  {
    v4 = a2 ? *((_DWORD *)a2 + 32) : 0;
    DirectComposition::CDevice::ResourceSetReferenceProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      53,
      v4);
    if ( *((struct Windows::UI::Composition::CompositionShadow **)this + 45) != a2 )
    {
      if ( a2 )
        Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(a2);
      v5 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 45);
      *((_QWORD *)this + 45) = a2;
      if ( v5 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v5);
    }
  }
}
