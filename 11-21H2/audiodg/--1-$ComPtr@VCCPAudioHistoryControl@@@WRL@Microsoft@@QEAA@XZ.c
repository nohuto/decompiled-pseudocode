/*
 * XREFs of ??1?$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ @ 0x14005C7C0
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAPOProcessingHostObject_CAPOProcessingHostObject_IAudioProcessingObject___&__::_1_::dtor$1 @ 0x140038E11 (_Microsoft--WRL--Details--MakeAndInitialize_CAPOProcessingHostObject_CAPOProcessingHostObject_IA.c)
 *     _Microsoft::WRL::Details::Make_CAPOProcessingHost__::_1_::dtor$0 @ 0x140039157 (_Microsoft--WRL--Details--Make_CAPOProcessingHost__--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAPOEndpointNotificationsHandler_CAPOEndpointNotificationsHandler_unsigned_short_const___&_IMMDevice___&__::_1_::dtor$1 @ 0x140064251 (_Microsoft--WRL--Details--MakeAndInitialize_CAPOEndpointNotificationsHandler_CAPOEn_ea_140064251.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAudioSystemEffectsPropertyChangeNotificationsHandler_CAudioSystemEffectsPropertyChangeNotificationsHandler_unsigned_short_const___&__GUID_&_IMMDevice___&__::_1_::dtor$1 @ 0x140064365 (_Microsoft--WRL--Details--MakeAndInitialize_CAudioSystemEffectsPropertyChangeNotifi_ea_140064365.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAPOEndpointNotificationsDelegator_CAPOEndpointNotificationsDelegator_CAPOEndpointNotificationsHandler____::_1_::dtor$1 @ 0x14006920B (_Microsoft--WRL--Details--MakeAndInitialize_CAPOEndpointNotificationsDelegator_CAPO_ea_14006920B.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAudioSystemEffectsPropertyChangeNotificationsDelegator_CAudioSystemEffectsPropertyChangeNotificationsDelegator_CAudioSystemEffectsPropertyChangeNotificationsHandler____::_1_::dtor$1 @ 0x14006A46F (_Microsoft--WRL--Details--MakeAndInitialize_CAudioSystemEffectsPropertyChangeNotifi_ea_14006A46F.c)
 *     _Windows::Internal::AsyncBaseFTM_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Media::Devices::ModuleCommandResult____1_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::CheckExecutionEnvironment_::_1_::dtor$0 @ 0x14007577B (_Windows--Internal--AsyncBaseFTM_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--M.c)
 *     _Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Media::Devices::ModuleCommandResult____Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::FireCompletion_::_1_::dtor$0 @ 0x14007676E (_Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--Media--.c)
 *     _Windows::Internal::AsyncBaseFTM_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Media::Devices::ModuleCommandResult____1_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::FireCompletion_::_1_::dtor$0 @ 0x14007694D (_Windows--Internal--AsyncBaseFTM_Windows--Foundation--IAsyncOperationCompletedHandl_ea_14007694D.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CCPAudioHistoryControl_ICPAudioHistoryControl_ICrossProcessMemory___&__::_1_::dtor$1 @ 0x140087633 (_Microsoft--WRL--Details--MakeAndInitialize_CCPAudioHistoryControl_ICPAudioHistoryC_ea_140087633.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Microsoft::WRL::ComPtr<CCPAudioHistoryControl>::~ComPtr<CCPAudioHistoryControl>(_QWORD *a1)
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
