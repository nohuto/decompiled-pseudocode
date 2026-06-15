/*
 * XREFs of ?QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV?$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z @ 0x1400681A0
 * Callers:
 *     ?QueueInitialEnhancementsEnabledNotification@@YAJAEAUAUDIO_ENDPOINT_PROPERTY_CHANGE_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x14006601C (-QueueInitialEnhancementsEnabledNotification@@YAJAEAUAUDIO_ENDPOINT_PROPERTY_CHANGE_APO_NOTIFICA.c)
 *     ?QueueInitialVolumeNotification@@YAJAEAUAUDIO_ENDPOINT_VOLUME_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x140066200 (-QueueInitialVolumeNotification@@YAJAEAUAUDIO_ENDPOINT_VOLUME_APO_NOTIFICATION_DESCRIPTOR@@PEAVC.c)
 *     ?OnNotify@CAPOEndpointNotificationsHandler@@UEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x140069A70 (-OnNotify@CAPOEndpointNotificationsHandler@@UEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 *     ?OnPropertyValueChanged@CAPOEndpointNotificationsHandler@@QEAAJU_tagpropertykey@@@Z @ 0x140069BD4 (-OnPropertyValueChanged@CAPOEndpointNotificationsHandler@@QEAAJU_tagpropertykey@@@Z.c)
 *     ?OnPropertyChanged@CAudioSystemEffectsPropertyChangeNotificationsHandler@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0008_0002@@U_tagpropertykey@@@Z @ 0x14006AA60 (-OnPropertyChanged@CAudioSystemEffectsPropertyChangeNotificationsHandler@@UEAAJW4__MIDL___MIDL_i.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$shared_ptr@UAPO_NOTIFICATION@@@std@@QEAA@AEBV01@@Z @ 0x140067B0C (--0-$shared_ptr@UAPO_NOTIFICATION@@@std@@QEAA@AEBV01@@Z.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x140068288 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAPOProcessingHostObject::QueueNotification(struct _RTL_CRITICAL_SECTION *a1, _QWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rbx
  __int64 SpinCount; // rcx
  __int64 v7; // rax
  __int64 v8; // [rsp+20h] [rbp-60h] BYREF
  __int128 v9; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v10[2]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v11; // [rsp+48h] [rbp-38h]
  _QWORD *v12; // [rsp+70h] [rbp-10h]
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+A0h] [rbp+20h] BYREF

  v4 = a1 + 1;
  EnterCriticalSection(a1 + 1);
  v13 = v4;
  DebugInfo = a1[2].DebugInfo;
  if ( DebugInfo )
  {
    SpinCount = a1->SpinCount;
    v8 = SpinCount;
    if ( SpinCount )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)SpinCount + 8LL))(SpinCount);
    std::shared_ptr<APO_NOTIFICATION>::shared_ptr<APO_NOTIFICATION>(&v9, a2);
    v10[0] = off_14009A788;
    v7 = v8;
    v8 = 0LL;
    v10[1] = v7;
    v11 = v9;
    v9 = 0LL;
    v12 = v10;
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v8);
    CSerialWorkQueue::QueueWorkItem(DebugInfo, v10);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v13);
}
