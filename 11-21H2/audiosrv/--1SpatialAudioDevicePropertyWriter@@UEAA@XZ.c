/*
 * XREFs of ??1SpatialAudioDevicePropertyWriter@@UEAA@XZ @ 0x180135624
 * Callers:
 *     ??_GSpatialAudioDevicePropertyWriter@@UEAAPEAXI@Z @ 0x180135720 (--_GSpatialAudioDevicePropertyWriter@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall SpatialAudioDevicePropertyWriter::~SpatialAudioDevicePropertyWriter(
        SpatialAudioDevicePropertyWriter *this)
{
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 13);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 11);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  *((_DWORD *)this + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)this + 4);
}
