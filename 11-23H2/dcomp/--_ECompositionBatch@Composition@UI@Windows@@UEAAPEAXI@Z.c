/*
 * XREFs of ??_ECompositionBatch@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18015AE40
 * Callers:
 *     <none>
 * Callees:
 *     ??1CompositionBatch@Composition@UI@Windows@@UEAA@XZ @ 0x180011E64 (--1CompositionBatch@Composition@UI@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::CompositionBatch *__fastcall Windows::UI::Composition::CompositionBatch::`vector deleting destructor'(
        Windows::UI::Composition::CompositionBatch *this,
        char a2)
{
  Windows::UI::Composition::CompositionBatch::~CompositionBatch(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
