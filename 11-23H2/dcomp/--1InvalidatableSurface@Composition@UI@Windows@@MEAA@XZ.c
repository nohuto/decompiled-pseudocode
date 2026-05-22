/*
 * XREFs of ??1InvalidatableSurface@Composition@UI@Windows@@MEAA@XZ @ 0x180061078
 * Callers:
 *     ??1DrawingSurfaceBase@Composition@UI@Windows@@MEAA@XZ @ 0x1800610E0 (--1DrawingSurfaceBase@Composition@UI@Windows@@MEAA@XZ.c)
 *     ??_GInvalidatableSurface@Composition@UI@Windows@@MEAAPEAXI@Z @ 0x180152B20 (--_GInvalidatableSurface@Composition@UI@Windows@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveInvalidatableDeviceObject@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAXPEAUIInvalidatableDeviceObject@234@@Z @ 0x180061328 (-RemoveInvalidatableDeviceObject@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAXPEAUIInv.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

void __fastcall Windows::UI::Composition::InvalidatableSurface::~InvalidatableSurface(
        Windows::UI::Composition::InvalidatableSurface *this)
{
  struct Windows::UI::Composition::IInvalidatableDeviceObject *v2; // rdx
  Windows::UI::Composition::CompositionGraphicsDevice *v3; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v4; // rcx

  *(_QWORD *)this = &Windows::UI::Composition::InvalidatableSurface::`vftable'{for `Windows::UI::Composition::BindableSurface'};
  v2 = (Windows::UI::Composition::InvalidatableSurface *)((char *)this + 152);
  v3 = (Windows::UI::Composition::CompositionGraphicsDevice *)*((_QWORD *)this + 20);
  *(_QWORD *)v2 = &Windows::UI::Composition::InvalidatableSurface::`vftable'{for `Windows::UI::Composition::IInvalidatableDeviceObject'};
  if ( v3 )
    Windows::UI::Composition::CompositionGraphicsDevice::RemoveInvalidatableDeviceObject(v3, v2);
  v4 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 20);
  if ( v4 )
  {
    *((_QWORD *)this + 20) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v4);
  }
  Windows::UI::Composition::BindableSurface::~BindableSurface(this);
}
