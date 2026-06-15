/*
 * XREFs of ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x14003833E
 * Callers:
 *     ??1CAPOProcessingHostObject@@UEAA@XZ @ 0x140004418 (--1CAPOProcessingHostObject@@UEAA@XZ.c)
 *     ?QueueInitialMicBoostNotification@@YAJAEAUAUDIO_MICROPHONE_BOOST_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x14002D6AC (-QueueInitialMicBoostNotification@@YAJAEAUAUDIO_MICROPHONE_BOOST_APO_NOTIFICATION_DESCRIPTOR@@PE.c)
 *     ??_G_WorkTask@@QEAAPEAXI@Z @ 0x140038702 (--_G_WorkTask@@QEAAPEAXI@Z.c)
 *     std::_Func_impl_no_alloc__lambda_d3d8473ab69012044bcca3ea676e23db__void_::_Delete_this @ 0x1400387A0 (std--_Func_impl_no_alloc__lambda_d3d8473ab69012044bcca3ea676e23db__void_--_Delete_this.c)
 *     ??0ReadWriteAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAA@V?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@@Z @ 0x14003B234 (--0ReadWriteAccess@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReaderLockP.c)
 *     ??1ReadWriteAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAA@XZ @ 0x14003B2FE (--1ReadWriteAccess@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReaderLockP.c)
 *     ??4?$shared_ptr@VCSerialWorkQueue@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x14003B338 (--4-$shared_ptr@VCSerialWorkQueue@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x14003B376 (--4-$shared_ptr@V-$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAAEAV01@A.c)
 *     ?reset@?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAXXZ @ 0x14003BA64 (-reset@-$shared_ptr@V-$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAXXZ.c)
 *     ??1?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x140064CBC (--1-$shared_any_t@V-$shared_storage@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6A.c)
 *     ?put@?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x140066024 (-put@-$shared_any_t@V-$shared_storage@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP.c)
 *     ?QueueInitialDeviceOrientationNotification@@YAJPEAVCAPOProcessingHostObject@@@Z @ 0x14006D70C (-QueueInitialDeviceOrientationNotification@@YAJPEAVCAPOProcessingHostObject@@@Z.c)
 *     ?QueueInitialEnhancementsEnabledNotification@@YAJAEAUAUDIO_ENDPOINT_PROPERTY_CHANGE_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x14006D860 (-QueueInitialEnhancementsEnabledNotification@@YAJAEAUAUDIO_ENDPOINT_PROPERTY_CHANGE_APO_NOTIFICA.c)
 *     ?QueueInitialVolumeNotification@@YAJW4APO_NOTIFICATION_TYPE@@AEAUAUDIO_ENDPOINT_VOLUME_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x14006DA2C (-QueueInitialVolumeNotification@@YAJW4APO_NOTIFICATION_TYPE@@AEAUAUDIO_ENDPOINT_VOLUME_APO_NOTIF.c)
 *     _lambda_c342fc516001507c28ba370cc30be3fa_::_lambda_invoker_cdecl_ @ 0x14006F560 (_lambda_c342fc516001507c28ba370cc30be3fa_--_lambda_invoker_cdecl_.c)
 *     ?Initialize@_WorkTask@@QEAAJV?$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z @ 0x14006FF6C (-Initialize@_WorkTask@@QEAAJV-$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z.c)
 *     ?StartSendingNotifications@CAPOProcessingHostObject@@QEAAJXZ @ 0x1400703A0 (-StartSendingNotifications@CAPOProcessingHostObject@@QEAAJXZ.c)
 *     ?OnNotifyVolume2@CAPOEndpointNotificationsHandler@@AEAAJPEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z @ 0x140071E1C (-OnNotifyVolume2@CAPOEndpointNotificationsHandler@@AEAAJPEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z.c)
 *     ?OnNotifyVolume@CAPOEndpointNotificationsHandler@@AEAAJPEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z @ 0x140072004 (-OnNotifyVolume@CAPOEndpointNotificationsHandler@@AEAAJPEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z.c)
 *     ?OnPropertyValueChanged@CAPOEndpointNotificationsHandler@@QEAAJU_tagpropertykey@@@Z @ 0x1400721F4 (-OnPropertyValueChanged@CAPOEndpointNotificationsHandler@@QEAAJU_tagpropertykey@@@Z.c)
 *     ?OnPropertyChanged@CAudioSystemEffectsPropertyChangeNotificationsHandler@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0008_0002@@U_tagpropertykey@@@Z @ 0x140073040 (-OnPropertyChanged@CAudioSystemEffectsPropertyChangeNotificationsHandler@@UEAAJW4__MIDL___MIDL_i.c)
 *     ?OnDeviceOrientationChanged@CDeviceOrientationNotificationsHandler@@UEAAJAEBUWNF_AUDIO_ORIENTATION_STATE@@@Z @ 0x140076F60 (-OnDeviceOrientationChanged@CDeviceOrientationNotificationsHandler@@UEAAJAEBUWNF_AUDIO_ORIENTATI.c)
 *     ?OnNotify@CMicBoostNotificationsHandler@@UEAAJKPEBU_GUID@@@Z @ 0x140078220 (-OnNotify@CMicBoostNotificationsHandler@@UEAAJKPEBU_GUID@@@Z.c)
 *     ??1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ @ 0x1400996DC (--1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ.c)
 *     ??$reset@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAXPEAV?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@Z @ 0x14009CC4C (--$reset@V-$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@-$shared_ptr@V-$AtomicOb.c)
 *     ??0ReadAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAA@V?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@@Z @ 0x14009CCE0 (--0ReadAccess@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReaderLockPolicy.c)
 *     ??1ReadAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAA@XZ @ 0x14009CE84 (--1ReadAccess@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReaderLockPolicy.c)
 *     ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUtWAVEFORMATEX@@PEBGIIIIIPEAPEAUICrossProcessMemory@@@Z @ 0x14009DF4C (-InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUt.c)
 *     ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z @ 0x14009E6C8 (-MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x140038380 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_Ref_count_base::_Decref(std::_Ref_count_base *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(std::_Ref_count_base *))this)(this);
    std::_Ref_count_base::_Decwref(this);
  }
}
