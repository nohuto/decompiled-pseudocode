/*
 * XREFs of ??_GDrawingSurfaceBase@Composition@UI@Windows@@MEAAPEAXI@Z @ 0x180156A80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1DrawingSurfaceBase@Composition@UI@Windows@@MEAA@XZ @ 0x1800610E0 (--1DrawingSurfaceBase@Composition@UI@Windows@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::DrawingSurfaceBase *__fastcall Windows::UI::Composition::DrawingSurfaceBase::`scalar deleting destructor'(
        Windows::UI::Composition::DrawingSurfaceBase *this,
        char a2)
{
  Windows::UI::Composition::DrawingSurfaceBase::~DrawingSurfaceBase(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
