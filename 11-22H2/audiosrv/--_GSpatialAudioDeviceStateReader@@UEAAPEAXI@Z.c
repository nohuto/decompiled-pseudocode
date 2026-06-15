/*
 * XREFs of ??_GSpatialAudioDeviceStateReader@@UEAAPEAXI@Z @ 0x1800219A0
 * Callers:
 *     ??_ESpatialAudioDeviceStateReader@@WCDI@EAAPEAXI@Z @ 0x1800777E0 (--_ESpatialAudioDeviceStateReader@@WCDI@EAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPolicyConfig@@@WRL@Microsoft@@IEAAKXZ @ 0x180047D64 (-InternalRelease@-$ComPtr@UIPolicyConfig@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 */

SpatialAudioDeviceStateReader *__fastcall SpatialAudioDeviceStateReader::`scalar deleting destructor'(
        SpatialAudioDeviceStateReader *this,
        char a2)
{
  *((_DWORD *)this + 153) = -1073741823;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((char *)this + 600);
  *(_QWORD *)this = &SpatialAudioIO::`vftable';
  Microsoft::WRL::ComPtr<IPolicyConfig>::InternalRelease((char *)this + 536);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((char *)this + 528);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x268uLL);
  return this;
}
