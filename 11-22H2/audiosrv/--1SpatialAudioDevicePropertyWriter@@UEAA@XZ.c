/*
 * XREFs of ??1SpatialAudioDevicePropertyWriter@@UEAA@XZ @ 0x180142738
 * Callers:
 *     ??_GSpatialAudioDevicePropertyWriter@@UEAAPEAXI@Z @ 0x1801427F0 (--_GSpatialAudioDevicePropertyWriter@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPolicyConfig@@@WRL@Microsoft@@IEAAKXZ @ 0x180047D64 (-InternalRelease@-$ComPtr@UIPolicyConfig@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall SpatialAudioDevicePropertyWriter::~SpatialAudioDevicePropertyWriter(
        SpatialAudioDevicePropertyWriter *this)
{
  Microsoft::WRL::ComPtr<IPolicyConfig>::InternalRelease((__int64 *)this + 13);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 11);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  *((_DWORD *)this + 11) = -1073741823;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 4);
}
