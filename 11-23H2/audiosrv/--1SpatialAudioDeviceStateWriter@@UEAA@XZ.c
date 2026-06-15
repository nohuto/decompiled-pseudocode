/*
 * XREFs of ??1SpatialAudioDeviceStateWriter@@UEAA@XZ @ 0x18000601C
 * Callers:
 *     ??_ESpatialAudioDeviceStateWriter@@UEAAPEAXI@Z @ 0x180005FE0 (--_ESpatialAudioDeviceStateWriter@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall SpatialAudioDeviceStateWriter::~SpatialAudioDeviceStateWriter(SpatialAudioDeviceStateWriter *this)
{
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 616));
  *((_DWORD *)this + 153) = -1073741823;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((char *)this + 600);
  *(_QWORD *)this = &SpatialAudioStateIO::`vftable';
  SpatialAudioIO::~SpatialAudioIO(this);
}
