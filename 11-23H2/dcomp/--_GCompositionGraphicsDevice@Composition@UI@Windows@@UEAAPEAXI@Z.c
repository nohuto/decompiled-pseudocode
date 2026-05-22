/*
 * XREFs of ??_GCompositionGraphicsDevice@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18008B8E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1CompositionGraphicsDevice@Composition@UI@Windows@@UEAA@XZ @ 0x18008B924 (--1CompositionGraphicsDevice@Composition@UI@Windows@@UEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::CompositionGraphicsDevice *__fastcall Windows::UI::Composition::CompositionGraphicsDevice::`scalar deleting destructor'(
        Windows::UI::Composition::CompositionGraphicsDevice *this,
        char a2)
{
  Windows::UI::Composition::CompositionGraphicsDevice::~CompositionGraphicsDevice(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x120uLL);
    else
      operator delete(this);
  }
  return this;
}
