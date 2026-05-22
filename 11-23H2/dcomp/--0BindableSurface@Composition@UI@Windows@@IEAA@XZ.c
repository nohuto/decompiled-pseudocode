/*
 * XREFs of ??0BindableSurface@Composition@UI@Windows@@IEAA@XZ @ 0x180061168
 * Callers:
 *     ??0DrawingSurfaceBase@Composition@UI@Windows@@IEAA@XZ @ 0x180061120 (--0DrawingSurfaceBase@Composition@UI@Windows@@IEAA@XZ.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::BindableSurface *__fastcall Windows::UI::Composition::BindableSurface::BindableSurface(
        Windows::UI::Composition::BindableSurface *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *(_QWORD *)this = &Windows::UI::Composition::BindableSurface::`vftable';
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  return this;
}
