/*
 * XREFs of ??_ECompositionSkyBoxBrush@Private@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180123CD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CompositionSkyBoxBrush@Private@Composition@UI@Windows@@UEAA@XZ @ 0x180123048 (--1CompositionSkyBoxBrush@Private@Composition@UI@Windows@@UEAA@XZ.c)
 */

Windows::UI::Composition::Private::CompositionSkyBoxBrush *__fastcall Windows::UI::Composition::Private::CompositionSkyBoxBrush::`vector deleting destructor'(
        Windows::UI::Composition::Private::CompositionSkyBoxBrush *this,
        __int64 a2)
{
  char v2; // di

  v2 = a2;
  Windows::UI::Composition::Private::CompositionSkyBoxBrush::~CompositionSkyBoxBrush(this, a2);
  if ( (v2 & 1) != 0 )
  {
    if ( (v2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
