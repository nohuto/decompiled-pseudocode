/*
 * XREFs of ?RemoveInvalidatableDeviceObject@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAXPEAUIInvalidatableDeviceObject@234@@Z @ 0x180061328
 * Callers:
 *     ?Destroy@InvalidatableSurface@Composition@UI@Windows@@MEAAXXZ @ 0x180060F70 (-Destroy@InvalidatableSurface@Composition@UI@Windows@@MEAAXXZ.c)
 *     ??1InvalidatableSurface@Composition@UI@Windows@@MEAA@XZ @ 0x180061078 (--1InvalidatableSurface@Composition@UI@Windows@@MEAA@XZ.c)
 * Callees:
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 */

void __fastcall Windows::UI::Composition::CompositionGraphicsDevice::RemoveInvalidatableDeviceObject(
        Windows::UI::Composition::CompositionGraphicsDevice *this,
        struct Windows::UI::Composition::IInvalidatableDeviceObject *a2)
{
  struct Windows::UI::Composition::IInvalidatableDeviceObject **v2; // r8
  struct Windows::UI::Composition::IInvalidatableDeviceObject **v4; // rcx
  struct Windows::UI::Composition::IInvalidatableDeviceObject **v6; // rdx

  v2 = (struct Windows::UI::Composition::IInvalidatableDeviceObject **)*((_QWORD *)this + 34);
  v4 = (struct Windows::UI::Composition::IInvalidatableDeviceObject **)*((_QWORD *)this + 33);
  if ( v4 != v2 )
  {
    while ( 1 )
    {
      v6 = v4 + 1;
      if ( *v4 == a2 )
        break;
      ++v4;
      if ( v6 == v2 )
        return;
    }
    memmove_0(v4, v6, (char *)v2 - (char *)v6);
    *((_QWORD *)this + 34) -= 8LL;
  }
}
