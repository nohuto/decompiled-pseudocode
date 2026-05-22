/*
 * XREFs of ??$ToPartner@UICompositionInteractionPartner@Composition@UI@Windows@@@CompositionPointerEventRouter@Composition@UI@Windows@@SAXPEAV0123@V?$ComPtrRef@V?$ComPtr@UICompositionInteractionPartner@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18001EC48
 * Callers:
 *     ?GetOrCreateNonDefaultPointerEventRouter@Visual@Composition@UI@Windows@@QEAAJPEAPEAUICompositionInteractionPartner@234@@Z @ 0x18001CA44 (-GetOrCreateNonDefaultPointerEventRouter@Visual@Composition@UI@Windows@@QEAAJPEAPEAUIComposition.c)
 *     ?GetPointerEventRouter@Partner@Visual@Composition@UI@Windows@@UEAAJPEAPEAUICompositionInteractionPartner@345@@Z @ 0x18001EBA0 (-GetPointerEventRouter@Partner@Visual@Composition@UI@Windows@@UEAAJPEAPEAUICompositionInteractio.c)
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 */

unsigned int __fastcall Windows::UI::Composition::CompositionPointerEventRouter::ToPartner<Windows::UI::Composition::ICompositionInteractionPartner>(
        Microsoft::WRL2::NestableRuntimeClass *this,
        _QWORD *a2)
{
  unsigned int result; // eax

  if ( this )
  {
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(a2);
    *a2 = (char *)this + 136;
    return Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(this);
  }
  return result;
}
