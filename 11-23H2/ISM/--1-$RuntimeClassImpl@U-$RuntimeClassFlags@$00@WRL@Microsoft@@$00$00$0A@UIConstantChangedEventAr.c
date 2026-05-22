/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180177BF0
 * Callers:
 *     ??_G?$RuntimeClass@UIConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@VFtmBase@WRL@Microsoft@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180178000 (--_G-$RuntimeClass@UIConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@VFtmBase@WRL@Mi.c)
 *     ??_EHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@UEAAPEAXI@Z @ 0x180178200 (--_EHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??_EServerConnectionArgs@MPCManager@Input@Internal@Windows@@UEAAPEAXI@Z @ 0x180178300 (--_EServerConnectionArgs@MPCManager@Input@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??1ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@UEAA@XZ @ 0x180184628 (--1ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@UEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialNavigationUpdatedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005A480 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IConstantChangedEventArgs,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IConstantChangedEventArgs,Microsoft::WRL::FtmBase>(
        __int64 a1,
        volatile int *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::Release(
      2 * v3,
      a2);
  return Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)(a1 + 40));
}
