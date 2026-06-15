/*
 * XREFs of ??1?$MakeAllocator@VCApoEndpoint@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14004F9B0
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice_Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice_void___&__::_1_::dtor$0 @ 0x140038DFF (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Media--Devices--Internal--AudioDeviceBroker.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CDeviceGraphObjectCache_CDeviceGraphObjectCache___int64_&_float_&_unsigned_int_&__tlgProvider_t_const___&__::_1_::dtor$0 @ 0x140039080 (_Microsoft--WRL--Details--MakeAndInitialize_CDeviceGraphObjectCache_CDeviceGraphObjectCache___in.c)
 *     _Microsoft::WRL::Details::Make_CAPOProcessingHost__::_1_::dtor$1 @ 0x140039184 (_Microsoft--WRL--Details--Make_CAPOProcessingHost__--_1_--dtor$1.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CRTThreadManager_CRTThreadManager__::_1_::dtor$0 @ 0x140039595 (_Microsoft--WRL--Details--MakeAndInitialize_CRTThreadManager_CRTThreadManager__--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CApoEndpoint_CApoEndpoint_IDeviceGraphObjectCache___&_BRIDGE_STREAM_DESCRIPTOR___&_IAudioProcessingObject___&_IAudioMediaType___&_unsigned_int_&__::_1_::dtor$0 @ 0x14004F89B (_Microsoft--WRL--Details--MakeAndInitialize_CApoEndpoint_CApoEndpoint_IDeviceGraphObjectCache___.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAPOEndpointNotificationsHandler_CAPOEndpointNotificationsHandler_unsigned_short_const___&_IMMDevice___&__::_1_::dtor$0 @ 0x140064245 (_Microsoft--WRL--Details--MakeAndInitialize_CAPOEndpointNotificationsHandler_CAPOEndpointNotific.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAudioSystemEffectsPropertyChangeNotificationsHandler_CAudioSystemEffectsPropertyChangeNotificationsHandler_unsigned_short_const___&__GUID_&_IMMDevice___&__::_1_::dtor$0 @ 0x140064359 (_Microsoft--WRL--Details--MakeAndInitialize_CAudioSystemEffectsPropertyChangeNotificationsHandle.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAPOEndpointNotificationsDelegator_CAPOEndpointNotificationsDelegator_CAPOEndpointNotificationsHandler____::_1_::dtor$0 @ 0x1400691FF (_Microsoft--WRL--Details--MakeAndInitialize_CAPOEndpointNotificationsDelegator_CAPOEndpointNotif.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAudioSystemEffectsPropertyChangeNotificationsDelegator_CAudioSystemEffectsPropertyChangeNotificationsDelegator_CAudioSystemEffectsPropertyChangeNotificationsHandler____::_1_::dtor$0 @ 0x14006A463 (_Microsoft--WRL--Details--MakeAndInitialize_CAudioSystemEffectsPropertyChangeNotificationsDelega.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CCPAudioHistoryControl_ICPAudioHistoryControl_ICrossProcessMemory___&__::_1_::dtor$0 @ 0x140087627 (_Microsoft--WRL--Details--MakeAndInitialize_CCPAudioHistoryControl_ICPAudioHistoryControl_ICross.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<CApoEndpoint>::~MakeAllocator<CApoEndpoint>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
