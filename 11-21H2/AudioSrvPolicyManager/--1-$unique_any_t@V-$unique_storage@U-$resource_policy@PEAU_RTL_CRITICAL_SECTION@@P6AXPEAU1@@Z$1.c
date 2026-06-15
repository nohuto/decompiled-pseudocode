/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180008B80
 * Callers:
 *     _TsSessionIdAddAppManagerClient_::_1_::dtor$0 @ 0x180044AE6 (_TsSessionIdAddAppManagerClient_--_1_--dtor$0.c)
 *     _TsSessionIdDeleteNotify_::_1_::dtor$0 @ 0x180044B3A (_TsSessionIdDeleteNotify_--_1_--dtor$0.c)
 *     _TsSessionIdDeleteAppManagerClient_::_1_::dtor$0 @ 0x180044B4C (_TsSessionIdDeleteAppManagerClient_--_1_--dtor$0.c)
 *     _TsSessionIdUpdateStreamClassPolicyGains_::_1_::dtor$0 @ 0x180044B5E (_TsSessionIdUpdateStreamClassPolicyGains_--_1_--dtor$0.c)
 *     _ApplicationSpecificEndpointInfo::GetRelatedProcesses_::_1_::dtor$0 @ 0x180044C6D (_ApplicationSpecificEndpointInfo--GetRelatedProcesses_--_1_--dtor$0.c)
 *     _TsSessionLaunchBackgroundTask_::_1_::dtor$0 @ 0x180044CD4 (_TsSessionLaunchBackgroundTask_--_1_--dtor$0.c)
 *     _TsSessionIdAddNotify_::_1_::dtor$2 @ 0x180044D5F (_TsSessionIdAddNotify_--_1_--dtor$2.c)
 *     _TsSessionIdGetAudioProtocol_::_1_::dtor$0 @ 0x180044DBF (_TsSessionIdGetAudioProtocol_--_1_--dtor$0.c)
 *     _ApplicationSpecificEndpointInfo::AddRelatedProcess_::_1_::dtor$0 @ 0x180044F56 (_ApplicationSpecificEndpointInfo--AddRelatedProcess_--_1_--dtor$0.c)
 *     _std::_Func_impl_no_alloc__lambda_450436a14271dedc9936bb949bbf07b2__void_::_Do_call_::_1_::dtor$0 @ 0x1800451D6 (_std--_Func_impl_no_alloc__lambda_450436a14271dedc9936bb949bbf07b2__void_--_Do_call_--_1_--dtor$.c)
 *     _TsSessionIdRemoveActiveMediaApp_::_1_::dtor$0 @ 0x180045248 (_TsSessionIdRemoveActiveMediaApp_--_1_--dtor$0.c)
 *     _CApplication::StartGoodFaithPLMExemptionTimer_::_1_::dtor$0 @ 0x18004529D (_CApplication--StartGoodFaithPLMExemptionTimer_--_1_--dtor$0.c)
 *     _std::_Func_impl_no_alloc__lambda_1f55666334b8184c6ae1399bb7301650__void_::_Do_call_::_1_::dtor$0 @ 0x1800452AF (_std--_Func_impl_no_alloc__lambda_1f55666334b8184c6ae1399bb7301650__void_--_Do_call_--_1_--dtor$.c)
 *     _std::_Func_impl_no_alloc__lambda_2f91230d5263cfdecd1c9667b3e483e9__void_::_Do_call_::_1_::dtor$0 @ 0x180045364 (_std--_Func_impl_no_alloc__lambda_2f91230d5263cfdecd1c9667b3e483e9__void_--_Do_call_--_1_--dtor$.c)
 *     _CApplicationManager::GetApplication_::_1_::dtor$0 @ 0x180045448 (_CApplicationManager--GetApplication_--_1_--dtor$0.c)
 *     _CApplicationManager::Register_::_1_::dtor$0 @ 0x180045905 (_CApplicationManager--Register_--_1_--dtor$0.c)
 *     _CApplicationManager::GetSoundLevel_::_1_::dtor$0 @ 0x180045917 (_CApplicationManager--GetSoundLevel_--_1_--dtor$0.c)
 *     _CApplicationManager::ProcessInteractivityNotification_::_1_::dtor$0 @ 0x18004593B (_CApplicationManager--ProcessInteractivityNotification_--_1_--dtor$0.c)
 *     _CApplicationManager::ProcessTerminated_::_1_::dtor$0 @ 0x1800459D4 (_CApplicationManager--ProcessTerminated_--_1_--dtor$0.c)
 *     _CApplicationManager::ProcessTerminated_::_1_::dtor$3 @ 0x1800459E6 (_CApplicationManager--ProcessTerminated_--_1_--dtor$3.c)
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$1 @ 0x180045A1C (_CApplicationManager--RpcGetProcess_--_1_--dtor$1.c)
 *     _std::_Func_impl_no_alloc__lambda_55bbdd01f859b2b681de89e14de0bd19__void_::_Do_call_::_1_::dtor$0 @ 0x180045C5F (_std--_Func_impl_no_alloc__lambda_55bbdd01f859b2b681de89e14de0bd19__void_--_Do_call_--_1_--dtor$.c)
 *     _CStreamClassPolicyGains::UpdateStreamClassGainStage_::_1_::dtor$0 @ 0x1800464F4 (_CStreamClassPolicyGains--UpdateStreamClassGainStage_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(
        struct _RTL_CRITICAL_SECTION **a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rcx

  v1 = *a1;
  if ( v1 )
    LeaveCriticalSection(v1);
}
