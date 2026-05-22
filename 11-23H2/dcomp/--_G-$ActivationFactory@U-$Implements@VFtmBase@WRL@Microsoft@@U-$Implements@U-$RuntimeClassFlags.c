/*
 * XREFs of ??_G?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIInspectable@@UICompositionCapabilitiesStatics@Composition@UI@Windows@@U?$CloakedIid@UICompositionCapabilitiesInteropFactory@Desktop@Composition@UI@Windows@@@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180101E60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

void *__fastcall Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IInspectable,Windows::UI::Composition::ICompositionCapabilitiesStatics,Microsoft::WRL::CloakedIid<Windows::UI::Composition::Desktop::ICompositionCapabilitiesInteropFactory>>>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  *((_DWORD *)a1 + 25) = -1073741823;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)a1 + 4);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
