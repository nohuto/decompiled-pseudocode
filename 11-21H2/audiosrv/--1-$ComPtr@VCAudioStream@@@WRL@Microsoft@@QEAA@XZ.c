/*
 * XREFs of ??1?$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C69EC
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180013460 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 *     ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixProxy@@@Z @ 0x180016FE0 (-GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixPro.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_BluetoothControls::BluetoothMute_BluetoothControls::BluetoothMute_unsigned_short___&_BluetoothControls::BluetoothMute___IControlChangeNotify___&__::_1_::dtor$1 @ 0x180062E47 (_Microsoft--WRL--Details--MakeAndInitialize_BluetoothControls--BluetoothMute_Blueto_ea_180062E47.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_BluetoothControls::BluetoothVolume_BluetoothControls::BluetoothVolume_unsigned_short___&_BluetoothControls::BluetoothVolume___IControlChangeNotify___&__::_1_::dtor$1 @ 0x180062F57 (_Microsoft--WRL--Details--MakeAndInitialize_BluetoothControls--BluetoothVolume_Blue_ea_180062F57.c)
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$4 @ 0x18006CF90 (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--dtor$4.c)
 *     _AtmosCheck::RegisterAppDeploymentNotifications_::_1_::dtor$6 @ 0x18006D760 (_AtmosCheck--RegisterAppDeploymentNotifications_--_1_--dtor$6.c)
 *     _AtmosCheck::RegisterAppDeploymentNotifications_::_1_::dtor$8 @ 0x18006DEA0 (_AtmosCheck--RegisterAppDeploymentNotifications_--_1_--dtor$8.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CEndpointCharacteristics_CEndpointCharacteristics_unsigned_short_const___&__tlgProvider_t_const___&__::_1_::dtor$2 @ 0x18006EB31 (_Microsoft--WRL--Details--MakeAndInitialize_CEndpointCharacteristics_CEndpointChara_ea_18006EB31.c)
 *     _AtmosCheck::RegisterAppDeploymentNotifications_::_1_::dtor$4 @ 0x180071BC8 (_AtmosCheck--RegisterAppDeploymentNotifications_--_1_--dtor$4.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_BluetoothControls::BluetoothMute_IMuteControlHandler_IMMDevice___&_IControlChangeNotify___&__::_1_::dtor$1 @ 0x1800C63A8 (_Microsoft--WRL--Details--MakeAndInitialize_BluetoothControls--BluetoothMute_IMuteC_ea_1800C63A8.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_BluetoothControls::BluetoothVolume_IVolumeControlHandler_IMMDevice___&_IControlChangeNotify___&__::_1_::dtor$1 @ 0x1800C64A8 (_Microsoft--WRL--Details--MakeAndInitialize_BluetoothControls--BluetoothVolume_IVol_ea_1800C64A8.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_AudioEffectsWatcher::CMMNotificationDelegator_IMMNotificationClient_unsigned_short_const___&_void____::_1_::dtor$1 @ 0x1800D26F1 (_Microsoft--WRL--Details--MakeAndInitialize_AudioEffectsWatcher--CMMNotificationDel_ea_1800D26F1.c)
 *     _Microsoft::WRL::Details::Make_ResourceGroupInstance_unsigned___int64_&_ATL::CComPtr_IKsControl__&_unsigned_short_(&)[257]_unsigned_long_&__::_1_::dtor$0 @ 0x180109552 (_Microsoft--WRL--Details--Make_ResourceGroupInstance_unsigned___int64_-_ATL--CComPtr_IKsControl_.c)
 *     _wil::MakeOrThrow_ResourceGroupInstance_unsigned___int64_&_ATL::CComPtr_IKsControl__&_unsigned_short_(&)[257]_unsigned_long_&__::_1_::dtor$0 @ 0x1801095F8 (_wil--MakeOrThrow_ResourceGroupInstance_unsigned___int64_-_ATL--CComPtr_IKsControl__-_unsigned_s.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CVirtualAudioStream_CVirtualAudioStream_IAudioProcess___&_enum__AUDIO_STREAM_EXTENDED_CATEGORY_unsigned_short_const___&_enum___MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001_&__::_1_::dtor$1 @ 0x18010F183 (_Microsoft--WRL--Details--MakeAndInitialize_CVirtualAudioStream_CVirtualAudioStream_ea_18010F183.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_DialogSession_DialogSession_IAudioProcess___unsigned_short_const___&__::_1_::dtor$1 @ 0x18010F28B (_Microsoft--WRL--Details--MakeAndInitialize_DialogSession_DialogSession_IAudioProce_ea_18010F28B.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_VirtualAudioSessionInfo_VirtualAudioSessionInfo_IAudioProcess___&_unsigned_short_const___&_bool_bool_enum__AudioSessionState__::_1_::dtor$1 @ 0x18010FA81 (_Microsoft--WRL--Details--MakeAndInitialize_VirtualAudioSessionInfo_VirtualAudioSes_ea_18010FA81.c)
 *     _Microsoft::WRL::Details::Make_CBtAudioResourceManager__GUID_const_&__::_1_::dtor$0 @ 0x180113670 (_Microsoft--WRL--Details--Make_CBtAudioResourceManager__GUID_const_-__--_1_--dtor$0.c)
 *     _CMonitorManager::AddMonitor_::_1_::dtor$0 @ 0x180119C2A (_CMonitorManager--AddMonitor_--_1_--dtor$0.c)
 *     _util::InterfaceMap_IAudioStreamInfo_Sarm::CStreamResource_::Add_::_1_::dtor$0 @ 0x1801260BF (_util--InterfaceMap_IAudioStreamInfo_Sarm--CStreamResource_--Add_--_1_--dtor$0.c)
 *     _CExclusiveModeListener::RuntimeClassInitialize_::_1_::dtor$1 @ 0x18012DCB4 (_CExclusiveModeListener--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _CExclusiveModeListener::RuntimeClassInitialize_::_1_::dtor$2 @ 0x18012DCC0 (_CExclusiveModeListener--RuntimeClassInitialize_--_1_--dtor$2.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_AvoidEndpointPolicyRule_IPolicyRule_IAudioProcess___&__DynamicRoutingRule___&__::_1_::dtor$2 @ 0x1801309E7 (_Microsoft--WRL--Details--MakeAndInitialize_AvoidEndpointPolicyRule_IPolicyRule_IAu_ea_1801309E7.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CommunicationsRemapPolicyRule_IPolicyRule_IAudioProcess___&__DynamicRoutingRule___&__::_1_::dtor$2 @ 0x180130AF2 (_Microsoft--WRL--Details--MakeAndInitialize_CommunicationsRemapPolicyRule_IPolicyRu_ea_180130AF2.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_RemapPolicyRule_IPolicyRule_IAudioProcess___&__DynamicRoutingRule___&__::_1_::dtor$2 @ 0x180130BF3 (_Microsoft--WRL--Details--MakeAndInitialize_RemapPolicyRule_IPolicyRule_IAudioProce_ea_180130BF3.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CHybridPropertyStore_IPropertyStore_IMMDevice___&_unsigned_int_&__tagpropertykey_const___&__::_1_::dtor$1 @ 0x18014E202 (_Microsoft--WRL--Details--MakeAndInitialize_CHybridPropertyStore_IPropertyStore_IMM_ea_18014E202.c)
 *     _AtmosCheck::RegisterForUserWatcherNotifications_::_1_::dtor$5 @ 0x180156551 (_AtmosCheck--RegisterForUserWatcherNotifications_--_1_--dtor$5.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Microsoft::WRL::ComPtr<CAudioStream>::~ComPtr<CAudioStream>(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
