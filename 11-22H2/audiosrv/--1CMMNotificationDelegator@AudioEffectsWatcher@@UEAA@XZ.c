/*
 * XREFs of ??1CMMNotificationDelegator@AudioEffectsWatcher@@UEAA@XZ @ 0x1800D590C
 * Callers:
 *     ??_ECMMNotificationDelegator@AudioEffectsWatcher@@UEAAPEAXI@Z @ 0x1800D5BB0 (--_ECMMNotificationDelegator@AudioEffectsWatcher@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800486BC (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall AudioEffectsWatcher::CMMNotificationDelegator::~CMMNotificationDelegator(
        AudioEffectsWatcher::CMMNotificationDelegator *this,
        void *a2)
{
  wil::details *v3; // rcx
  void *v4; // rcx

  v3 = (wil::details *)*((_QWORD *)this + 4);
  if ( v3 )
    wil::details::CloseHandle(v3, a2);
  v4 = (void *)*((_QWORD *)this + 3);
  if ( v4 )
    CoTaskMemFree(v4);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
