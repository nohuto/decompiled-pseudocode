/*
 * XREFs of ??_EEdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180130F30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@UEAA@XZ @ 0x180130E94 (--1EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@UEAA@XZ.c)
 */

Windows::UI::Composition::Interactions::Internal::EdgyExperienceSource *__fastcall Windows::UI::Composition::Interactions::Internal::EdgyExperienceSource::`vector deleting destructor'(
        Windows::UI::Composition::Interactions::Internal::EdgyExperienceSource *this,
        volatile int *a2)
{
  char v2; // di

  v2 = (char)a2;
  Windows::UI::Composition::Interactions::Internal::EdgyExperienceSource::~EdgyExperienceSource(this, a2);
  if ( (v2 & 1) != 0 )
  {
    if ( (v2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
