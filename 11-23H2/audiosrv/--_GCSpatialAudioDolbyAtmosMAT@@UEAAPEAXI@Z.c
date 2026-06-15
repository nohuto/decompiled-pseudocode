/*
 * XREFs of ??_GCSpatialAudioDolbyAtmosMAT@@UEAAPEAXI@Z @ 0x180154090
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     ??1CSpatialAudioTech@@UEAA@XZ @ 0x180153FF8 (--1CSpatialAudioTech@@UEAA@XZ.c)
 */

CSpatialAudioDolbyAtmosMAT *__fastcall CSpatialAudioDolbyAtmosMAT::`scalar deleting destructor'(
        CSpatialAudioDolbyAtmosMAT *this,
        char a2)
{
  CSpatialAudioTech::~CSpatialAudioTech(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
