/*
 * XREFs of ??_ECSpatialAudioDtsxHeadphones@@UEAAPEAXI@Z @ 0x180154120
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ??1CSpatialAudioTech@@UEAA@XZ @ 0x180154048 (--1CSpatialAudioTech@@UEAA@XZ.c)
 */

CSpatialAudioDtsxHeadphones *__fastcall CSpatialAudioDtsxHeadphones::`vector deleting destructor'(
        CSpatialAudioDtsxHeadphones *this,
        char a2)
{
  CSpatialAudioTech::~CSpatialAudioTech(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
