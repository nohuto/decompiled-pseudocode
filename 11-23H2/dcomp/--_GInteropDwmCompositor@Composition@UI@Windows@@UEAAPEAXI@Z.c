/*
 * XREFs of ??_GInteropDwmCompositor@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18010E4B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1Compositor@Composition@UI@Windows@@MEAA@XZ @ 0x18003DDEC (--1Compositor@Composition@UI@Windows@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::InteropDwmCompositor *__fastcall Windows::UI::Composition::InteropDwmCompositor::`scalar deleting destructor'(
        Windows::UI::Composition::InteropDwmCompositor *this,
        char a2)
{
  Windows::UI::Composition::Compositor::~Compositor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
