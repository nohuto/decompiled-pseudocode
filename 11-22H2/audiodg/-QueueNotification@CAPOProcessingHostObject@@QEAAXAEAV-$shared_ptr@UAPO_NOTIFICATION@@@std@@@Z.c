/*
 * XREFs of ?QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV?$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z @ 0x140070080
 * Callers:
 *     ?QueueInitialMicBoostNotification@@YAJAEAUAUDIO_MICROPHONE_BOOST_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x14002D6AC (-QueueInitialMicBoostNotification@@YAJAEAUAUDIO_MICROPHONE_BOOST_APO_NOTIFICATION_DESCRIPTOR@@PE.c)
 *     ?QueueInitialDeviceOrientationNotification@@YAJPEAVCAPOProcessingHostObject@@@Z @ 0x14006D70C (-QueueInitialDeviceOrientationNotification@@YAJPEAVCAPOProcessingHostObject@@@Z.c)
 *     ?QueueInitialEnhancementsEnabledNotification@@YAJAEAUAUDIO_ENDPOINT_PROPERTY_CHANGE_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x14006D860 (-QueueInitialEnhancementsEnabledNotification@@YAJAEAUAUDIO_ENDPOINT_PROPERTY_CHANGE_APO_NOTIFICA.c)
 *     ?QueueInitialVolumeNotification@@YAJW4APO_NOTIFICATION_TYPE@@AEAUAUDIO_ENDPOINT_VOLUME_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x14006DA2C (-QueueInitialVolumeNotification@@YAJW4APO_NOTIFICATION_TYPE@@AEAUAUDIO_ENDPOINT_VOLUME_APO_NOTIF.c)
 *     ?OnNotifyVolume2@CAPOEndpointNotificationsHandler@@AEAAJPEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z @ 0x140071E1C (-OnNotifyVolume2@CAPOEndpointNotificationsHandler@@AEAAJPEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z.c)
 *     ?OnNotifyVolume@CAPOEndpointNotificationsHandler@@AEAAJPEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z @ 0x140072004 (-OnNotifyVolume@CAPOEndpointNotificationsHandler@@AEAAJPEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z.c)
 *     ?OnPropertyValueChanged@CAPOEndpointNotificationsHandler@@QEAAJU_tagpropertykey@@@Z @ 0x1400721F4 (-OnPropertyValueChanged@CAPOEndpointNotificationsHandler@@QEAAJU_tagpropertykey@@@Z.c)
 *     ?OnPropertyChanged@CAudioSystemEffectsPropertyChangeNotificationsHandler@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0008_0002@@U_tagpropertykey@@@Z @ 0x140073040 (-OnPropertyChanged@CAudioSystemEffectsPropertyChangeNotificationsHandler@@UEAAJW4__MIDL___MIDL_i.c)
 *     ?OnDeviceOrientationChanged@CDeviceOrientationNotificationsHandler@@UEAAJAEBUWNF_AUDIO_ORIENTATION_STATE@@@Z @ 0x140076F60 (-OnDeviceOrientationChanged@CDeviceOrientationNotificationsHandler@@UEAAJAEBUWNF_AUDIO_ORIENTATI.c)
 *     ?OnNotify@CMicBoostNotificationsHandler@@UEAAJKPEBU_GUID@@@Z @ 0x140078220 (-OnNotify@CMicBoostNotificationsHandler@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400381A0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_weak_query_nothrow@AEAV?$com_ptr_t@UIAudioProcessingObjectNotifications@@Uerr_returncode_policy@wil@@@wil@@@wil@@YAJAEAV?$com_ptr_t@UIAudioProcessingObjectNotifications@@Uerr_returncode_policy@wil@@@0@PEAPEAUIWeakReference@@@Z @ 0x1400384CA (--$com_weak_query_nothrow@AEAV-$com_ptr_t@UIAudioProcessingObjectNotifications@@Uerr_returncode_.c)
 *     ??0?$shared_ptr@UAPO_NOTIFICATION@@@std@@QEAA@AEBV01@@Z @ 0x1400385AC (--0-$shared_ptr@UAPO_NOTIFICATION@@@std@@QEAA@AEBV01@@Z.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1400701BC (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CAPOProcessingHostObject::QueueNotification(__int64 a1, _QWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  int v5; // eax
  __int64 v6; // r14
  __int64 v7; // rbx
  __int128 v8; // [rsp+20h] [rbp-60h] BYREF
  __int64 v9; // [rsp+30h] [rbp-50h] BYREF
  __int64 (__fastcall **v10)(); // [rsp+38h] [rbp-48h] BYREF
  __int128 v11; // [rsp+40h] [rbp-40h]
  __int64 v12; // [rsp+50h] [rbp-30h]
  __int64 (__fastcall ***v13)(); // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  __int64 v15; // [rsp+B0h] [rbp+30h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+C0h] [rbp+40h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 40);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
  v16 = v4;
  if ( *(_QWORD *)(a1 + 80) )
  {
    v15 = 0LL;
    v5 = wil::com_weak_query_nothrow<wil::com_ptr_t<IAudioProcessingObjectNotifications,wil::err_returncode_policy> &>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 32),
           &v15);
    if ( v5 >= 0 )
    {
      v6 = *(_QWORD *)(a1 + 80);
      std::shared_ptr<APO_NOTIFICATION>::shared_ptr<APO_NOTIFICATION>(&v8, a2);
      v7 = v15;
      v9 = v15;
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      v10 = off_1400A5A10;
      v11 = v8;
      v8 = 0LL;
      v9 = 0LL;
      v12 = v7;
      v13 = &v10;
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v9);
      CSerialWorkQueue::QueueWorkItem(v6, &v10);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x15E,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp",
        (const char *)(unsigned int)v5);
    }
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v15);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
}
