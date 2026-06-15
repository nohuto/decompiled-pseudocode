/*
 * XREFs of ??1CSpatialAudioTech@@UEAA@XZ @ 0x180153FF8
 * Callers:
 *     ??_GCSpatialAudioDolbyAtmosMAT@@UEAAPEAXI@Z @ 0x180154090 (--_GCSpatialAudioDolbyAtmosMAT@@UEAAPEAXI@Z.c)
 *     ??_ECSpatialAudioDtsxHeadphones@@UEAAPEAXI@Z @ 0x1801540D0 (--_ECSpatialAudioDtsxHeadphones@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeAtmosCheck@CSpatialAudioTech@@KAXXZ @ 0x18015410C (-FreeAtmosCheck@CSpatialAudioTech@@KAXXZ.c)
 */

void __fastcall CSpatialAudioTech::~CSpatialAudioTech(CSpatialAudioTech *this)
{
  *(_QWORD *)this = &CSpatialAudioTech::`vftable';
  if ( *((_QWORD *)this + 1) )
  {
    CSpatialAudioTech::FreeAtmosCheck();
    *((_QWORD *)this + 1) = 0LL;
  }
}
