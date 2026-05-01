/*
 * XREFs of ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1804F9D38
 * Callers:
 *     ?StartActivity@VAPositioner_ControlGainedForActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1804F670C (-StartActivity@VAPositioner_ControlGainedForActivationActivity@VoiceAssistantPositionerTelemetry.c)
 *     ?StartActivity@VAPositioner_ControlLostActivity@VoiceAssistantPositionerTelemetry@@QEAAXW4SHELL_POSITIONER_TYPE@@@Z @ 0x1804F681C (-StartActivity@VAPositioner_ControlLostActivity@VoiceAssistantPositionerTelemetry@@QEAAXW4SHELL_.c)
 *     ?StartActivity@VAPositioner_DisplaySettingsChangeActivity@VoiceAssistantPositionerTelemetry@@QEAAXXZ @ 0x1804F68D4 (-StartActivity@VAPositioner_DisplaySettingsChangeActivity@VoiceAssistantPositionerTelemetry@@QEA.c)
 *     ?StartActivity@VAPositioner_GetCortanaAppDefaultLaunchPositionActivity@VoiceAssistantPositionerTelemetry@@QEAAXXZ @ 0x1804F6984 (-StartActivity@VAPositioner_GetCortanaAppDefaultLaunchPositionActivity@VoiceAssistantPositionerT.c)
 *     ?StartActivity@VAPositioner_HandleSwitchToViewActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@@Z @ 0x1804F6A34 (-StartActivity@VAPositioner_HandleSwitchToViewActivity@VoiceAssistantPositionerTelemetry@@QEAAXP.c)
 *     ?StartActivity@VAPositioner_InitializePositionActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1804F6AF8 (-StartActivity@VAPositioner_InitializePositionActivity@VoiceAssistantPositionerTelemetry@@QEAAXP.c)
 *     ?StartActivity@VAPositioner_InputHostHidingActivity@VoiceAssistantPositionerTelemetry@@QEAAXXZ @ 0x1804F6C08 (-StartActivity@VAPositioner_InputHostHidingActivity@VoiceAssistantPositionerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@VAPositioner_InputHostShowingActivity@VoiceAssistantPositionerTelemetry@@QEAAXXZ @ 0x1804F6CB8 (-StartActivity@VAPositioner_InputHostShowingActivity@VoiceAssistantPositionerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@VAPositioner_OnViewClosingActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@@Z @ 0x1804F6E5C (-StartActivity@VAPositioner_OnViewClosingActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIA.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?LockExclusive@?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18022AC64 (-LockExclusive@-$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04.c)
 */

void __fastcall wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  _DWORD *v4; // rcx
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &v5);
  v2 = *(_QWORD *)(a1 + 48);
  v4 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                   v3,
                   _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v4 > 4u && tlgKeywordOn((__int64)v4, 0x400000000000LL) )
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  else
    *(_OWORD *)(v2 + 8) = 0LL;
  *(_DWORD *)v2 = 1;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v5);
}
