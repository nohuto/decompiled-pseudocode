/*
 * XREFs of ??1SpatialAudioDeviceStateWriter@@UEAA@XZ @ 0x18013806C
 * Callers:
 *     ??_ESpatialAudioDeviceStateWriter@@UEAAPEAXI@Z @ 0x180138100 (--_ESpatialAudioDeviceStateWriter@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C58 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall SpatialAudioDeviceStateWriter::~SpatialAudioDeviceStateWriter(SpatialAudioDeviceStateWriter *this)
{
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 616));
  *((_DWORD *)this + 153) = -1073741823;
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)this + 75);
  *(_QWORD *)this = &SpatialAudioStateIO::`vftable';
  SpatialAudioIO::~SpatialAudioIO(this);
}
