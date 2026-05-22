/*
 * XREFs of ??0DrawingSurfaceBase@Composition@UI@Windows@@IEAA@XZ @ 0x180061120
 * Callers:
 *     ??0CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAA@XZ @ 0x18003A6BC (--0CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??0CompositionDrawingSurface@Composition@UI@Windows@@QEAA@XZ @ 0x180061378 (--0CompositionDrawingSurface@Composition@UI@Windows@@QEAA@XZ.c)
 * Callees:
 *     ??0BindableSurface@Composition@UI@Windows@@IEAA@XZ @ 0x180061168 (--0BindableSurface@Composition@UI@Windows@@IEAA@XZ.c)
 */

Windows::UI::Composition::DrawingSurfaceBase *__fastcall Windows::UI::Composition::DrawingSurfaceBase::DrawingSurfaceBase(
        Windows::UI::Composition::DrawingSurfaceBase *this)
{
  Windows::UI::Composition::BindableSurface::BindableSurface(this);
  *((_QWORD *)this + 20) = 0LL;
  *(_QWORD *)this = &Windows::UI::Composition::DrawingSurfaceBase::`vftable'{for `Windows::UI::Composition::BindableSurface'};
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 19) = &Windows::UI::Composition::CompositionDrawingSurface::`vftable'{for `Windows::UI::Composition::IInvalidatableDeviceObject'};
  return this;
}
