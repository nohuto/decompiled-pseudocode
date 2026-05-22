/*
 * XREFs of ?Destroy@InvalidatableSurface@Composition@UI@Windows@@MEAAXXZ @ 0x180060F70
 * Callers:
 *     ?Destroy@DrawingSurfaceBase@Composition@UI@Windows@@UEAAXXZ @ 0x180061300 (-Destroy@DrawingSurfaceBase@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     ?RemoveInvalidatableDeviceObject@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAXPEAUIInvalidatableDeviceObject@234@@Z @ 0x180061328 (-RemoveInvalidatableDeviceObject@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAXPEAUIInv.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

void __fastcall Windows::UI::Composition::InvalidatableSurface::Destroy(
        Windows::UI::Composition::CompositionGraphicsDevice **this)
{
  Microsoft::WRL2::NestableRuntimeClass *v2; // rcx

  Windows::UI::Composition::CompositionGraphicsDevice::RemoveInvalidatableDeviceObject(
    this[20],
    (struct Windows::UI::Composition::IInvalidatableDeviceObject *)((unsigned __int64)(this + 19) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
  v2 = this[20];
  if ( v2 )
  {
    this[20] = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v2);
  }
  Windows::UI::Composition::BindableSurface::Destroy((Windows::UI::Composition::BindableSurface *)this);
}
