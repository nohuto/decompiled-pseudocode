/*
 * XREFs of ??_ECSpatialAudioDtsxHeadphones@@UEAAPEAXI@Z @ 0x1801540D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     ??1CSpatialAudioTech@@UEAA@XZ @ 0x180153FF8 (--1CSpatialAudioTech@@UEAA@XZ.c)
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
