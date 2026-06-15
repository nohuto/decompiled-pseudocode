/*
 * XREFs of ??1SpatialAudioDevicePropertyReader@@UEAA@XZ @ 0x18002D61C
 * Callers:
 *     ??_ESpatialAudioDevicePropertyReader@@UEAAPEAXI@Z @ 0x18002D5E0 (--_ESpatialAudioDevicePropertyReader@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?CleanUp@SpatialAudioDevicePropertyReader@@AEAAXXZ @ 0x18002E5F0 (-CleanUp@SpatialAudioDevicePropertyReader@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall SpatialAudioDevicePropertyReader::~SpatialAudioDevicePropertyReader(
        SpatialAudioDevicePropertyReader *this)
{
  *(_QWORD *)this = &SpatialAudioDevicePropertyReader::`vftable'{for `ISpatialAudioDevicePropertyReader'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioDevicePropertyReader,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  SpatialAudioDevicePropertyReader::CleanUp(this);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((char *)this + 416);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((char *)this + 408);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((char *)this + 400);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  *((_DWORD *)this + 11) = -1073741823;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((char *)this + 32);
}
