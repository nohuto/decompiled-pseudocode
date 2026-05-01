/*
 * XREFs of ??1CTrustedComponentForegroundControl@@EEAA@XZ @ 0x18018A94C
 * Callers:
 *     ??_GCTrustedComponentForegroundControl@@EEAAPEAXI@Z @ 0x18018A910 (--_GCTrustedComponentForegroundControl@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CTrustedComponentForegroundControl::~CTrustedComponentForegroundControl(
        CTrustedComponentForegroundControl *this)
{
  *(_QWORD *)this = &CTrustedComponentForegroundControl::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,ITrustedComponentForegroundControl>>'};
  *((_QWORD *)this + 4) = &CTrustedComponentForegroundControl::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITrustedComponentForegroundControl>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,ITrustedComponentForegroundControl>>'};
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 6);
  *((_DWORD *)this + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 3);
}
