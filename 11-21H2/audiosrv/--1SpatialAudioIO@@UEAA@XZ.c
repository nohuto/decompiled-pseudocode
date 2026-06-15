/*
 * XREFs of ??1SpatialAudioIO@@UEAA@XZ @ 0x1801380BC
 * Callers:
 *     ??1SpatialAudioDeviceStateWriter@@UEAA@XZ @ 0x18013806C (--1SpatialAudioDeviceStateWriter@@UEAA@XZ.c)
 *     ??_GSpatialAudioIO@@UEAAPEAXI@Z @ 0x180138140 (--_GSpatialAudioIO@@UEAAPEAXI@Z.c)
 *     ??_GSpatialAudioStateIO@@UEAAPEAXI@Z @ 0x180138180 (--_GSpatialAudioStateIO@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall SpatialAudioIO::~SpatialAudioIO(SpatialAudioIO *this)
{
  *(_QWORD *)this = &SpatialAudioIO::`vftable';
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 67);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 66);
}
