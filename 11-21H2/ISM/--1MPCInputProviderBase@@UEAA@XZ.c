/*
 * XREFs of ??1MPCInputProviderBase@@UEAA@XZ @ 0x1800AD094
 * Callers:
 *     ??1MPCHandProcessor@@UEAA@XZ @ 0x1800A6584 (--1MPCHandProcessor@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VMPCInputProviderBase@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800A6AF0 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VMPCInputProviderBase@@@WRL@Microsoft.c)
 *     ??_EMPCInputProviderBase@@UEAAPEAXI@Z @ 0x1800A6B80 (--_EMPCInputProviderBase@@UEAAPEAXI@Z.c)
 *     ??_GMPCVoiceProcessor@@UEAAPEAXI@Z @ 0x180194950 (--_GMPCVoiceProcessor@@UEAAPEAXI@Z.c)
 *     ??1MPCSixDofProcessor@@UEAA@XZ @ 0x1801BDDE8 (--1MPCSixDofProcessor@@UEAA@XZ.c)
 *     ??1MPCGamepadProcessor@@UEAA@XZ @ 0x1801C44CC (--1MPCGamepadProcessor@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@VMPCInputProviderBase@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1801C47E4 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@VMPCInputProvider.c)
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@UIMouseProcessorForwarding@@VMPCInputProviderBase@@@WRL@Microsoft@@UEAA@XZ @ 0x1801C786C (--1-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@UIMouseProcessorFo.c)
 *     ??1MPCMouseProcessor@@UEAA@XZ @ 0x1801C7898 (--1MPCMouseProcessor@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@UIMouseProcessorForwarding@@VMPCInputProviderBase@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1801C7998 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@UIMouseProcessorF.c)
 *     ??_GMPCClickerProcessor@@UEAAPEAXI@Z @ 0x1801CB1C0 (--_GMPCClickerProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180090CA0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?MPCInputProviderBase_Destroy_@ISMTracing@@QEAAXPEBUDeviceInfo@@@Z @ 0x1800AE898 (-MPCInputProviderBase_Destroy_@ISMTracing@@QEAAXPEBUDeviceInfo@@@Z.c)
 */

void __fastcall MPCInputProviderBase::~MPCInputProviderBase(MPCInputProviderBase *this)
{
  __int64 v2; // rcx
  ISMTracing *v3; // rcx

  *(_QWORD *)this = &MPCInputProviderBase::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &MPCInputProviderBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 2) = &MPCInputProviderBase::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 3) = &MPCInputProviderBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    wil::details::static_lazy<ISMTracing>::get(v2, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCInputProviderBase_Destroy_(v3, *((const struct DeviceInfo **)this + 6));
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 455);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 454);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 453);
  std::deque<RayStabilizationResult>::~deque<RayStabilizationResult>((void **)this + 59);
}
