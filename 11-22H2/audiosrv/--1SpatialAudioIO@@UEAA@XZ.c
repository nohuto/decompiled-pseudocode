/*
 * XREFs of ??1SpatialAudioIO@@UEAA@XZ @ 0x18000606C
 * Callers:
 *     ??1SpatialAudioDeviceStateWriter@@UEAA@XZ @ 0x18000601C (--1SpatialAudioDeviceStateWriter@@UEAA@XZ.c)
 *     ??_GSpatialAudioIO@@UEAAPEAXI@Z @ 0x180144F90 (--_GSpatialAudioIO@@UEAAPEAXI@Z.c)
 *     ??_GSpatialAudioStateIO@@UEAAPEAXI@Z @ 0x180144FD0 (--_GSpatialAudioStateIO@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPolicyConfig@@@WRL@Microsoft@@IEAAKXZ @ 0x180047D64 (-InternalRelease@-$ComPtr@UIPolicyConfig@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall SpatialAudioIO::~SpatialAudioIO(SpatialAudioIO *this)
{
  *(_QWORD *)this = &SpatialAudioIO::`vftable';
  Microsoft::WRL::ComPtr<IPolicyConfig>::InternalRelease((char *)this + 536);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((char *)this + 528);
}
