/*
 * XREFs of ??_ECompositionProjectedShadowReceiver@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1800123B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CompositionProjectedShadowReceiver@Composition@UI@Windows@@UEAA@XZ @ 0x1800123F4 (--1CompositionProjectedShadowReceiver@Composition@UI@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::CompositionProjectedShadowReceiver *__fastcall Windows::UI::Composition::CompositionProjectedShadowReceiver::`vector deleting destructor'(
        Windows::UI::Composition::CompositionProjectedShadowReceiver *this,
        char a2)
{
  Windows::UI::Composition::CompositionProjectedShadowReceiver::~CompositionProjectedShadowReceiver(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0xC0uLL);
    else
      operator delete(this);
  }
  return this;
}
