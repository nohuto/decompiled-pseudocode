/*
 * XREFs of ??_EWhiteNoiseEffect@Effects@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1801461A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1WhiteNoiseEffect@Effects@Composition@UI@Windows@@UEAA@XZ @ 0x180146168 (--1WhiteNoiseEffect@Effects@Composition@UI@Windows@@UEAA@XZ.c)
 */

HSTRING *__fastcall Windows::UI::Composition::Effects::WhiteNoiseEffect::`vector deleting destructor'(
        HSTRING *this,
        char a2)
{
  Windows::UI::Composition::Effects::WhiteNoiseEffect::~WhiteNoiseEffect(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
