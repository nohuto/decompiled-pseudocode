/*
 * XREFs of ??1MPCInputProviderBase@@UEAA@XZ @ 0x1800C5548
 * Callers:
 *     ??1MPCHandProcessor@@UEAA@XZ @ 0x1800BE170 (--1MPCHandProcessor@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VMPCInputProviderBase@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800BE6E0 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VMPCInputProviderBase@@@WRL@Microsoft.c)
 *     ??_EMPCInputProviderBase@@UEAAPEAXI@Z @ 0x1800BE770 (--_EMPCInputProviderBase@@UEAAPEAXI@Z.c)
 *     ??_GMPCVoiceProcessor@@UEAAPEAXI@Z @ 0x1801B2880 (--_GMPCVoiceProcessor@@UEAAPEAXI@Z.c)
 *     ??1MPCSixDofProcessor@@UEAA@XZ @ 0x1801DC604 (--1MPCSixDofProcessor@@UEAA@XZ.c)
 *     ??1MPCGamepadProcessor@@UEAA@XZ @ 0x1801E3058 (--1MPCGamepadProcessor@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@VMPCInputProviderBase@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1801E3370 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@VMPCInputProvider.c)
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@UIMouseProcessorForwarding@@VMPCInputProviderBase@@@WRL@Microsoft@@UEAA@XZ @ 0x1801E6638 (--1-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@UIMouseProcessorFo.c)
 *     ??1MPCMouseProcessor@@UEAA@XZ @ 0x1801E6664 (--1MPCMouseProcessor@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@UIMouseProcessorForwarding@@VMPCInputProviderBase@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1801E6764 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@UIMouseProcessorF.c)
 *     ??_GMPCClickerProcessor@@UEAAPEAXI@Z @ 0x1801EA200 (--_GMPCClickerProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MPCInputProviderBase_Destroy@AEAPEAUDeviceInfo@@@ISMTracing@@SAXAEAPEAUDeviceInfo@@@Z @ 0x1800C44F8 (--$MPCInputProviderBase_Destroy@AEAPEAUDeviceInfo@@@ISMTracing@@SAXAEAPEAUDeviceInfo@@@Z.c)
 */

void __fastcall MPCInputProviderBase::~MPCInputProviderBase(MPCInputProviderBase *this)
{
  *(_QWORD *)this = &MPCInputProviderBase::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &MPCInputProviderBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 2) = &MPCInputProviderBase::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 3) = &MPCInputProviderBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  ISMTracing::MPCInputProviderBase_Destroy<DeviceInfo * &>((const struct DeviceInfo **)this + 6);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 455);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 454);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 453);
  std::deque<RayStabilizationResult>::~deque<RayStabilizationResult>((void **)this + 59);
}
