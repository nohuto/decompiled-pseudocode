/*
 * XREFs of ??1DrawingSurfaceBase@Composition@UI@Windows@@MEAA@XZ @ 0x1800610E0
 * Callers:
 *     ??_ECompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180061C70 (--_ECompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??_GDrawingSurfaceBase@Composition@UI@Windows@@MEAAPEAXI@Z @ 0x180156A80 (--_GDrawingSurfaceBase@Composition@UI@Windows@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall Windows::UI::Composition::DrawingSurfaceBase::~DrawingSurfaceBase(
        Windows::UI::Composition::DrawingSurfaceBase *this)
{
  *(_QWORD *)this = &Windows::UI::Composition::DrawingSurfaceBase::`vftable'{for `Windows::UI::Composition::BindableSurface'};
  *((_QWORD *)this + 19) = &Windows::UI::Composition::CompositionDrawingSurface::`vftable'{for `Windows::UI::Composition::IInvalidatableDeviceObject'};
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((char *)this + 184);
  Windows::UI::Composition::InvalidatableSurface::~InvalidatableSurface(this);
}
