/*
 * XREFs of ??1EM_EventQueuedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18004B254
 * Callers:
 *     ?OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18004A4A0 (-OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING.c)
 *     ?OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18004AAD0 (-OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 *     _CControlCenterExperienceManager::OnEventQueued_::_1_::dtor$0 @ 0x18021A39B (_CControlCenterExperienceManager--OnEventQueued_--_1_--dtor$0.c)
 *     _CActionCenterExperienceManager::OnEventQueued_::_1_::dtor$0 @ 0x18021A449 (_CActionCenterExperienceManager--OnEventQueued_--_1_--dtor$0.c)
 *     ?OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180363960 (-OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__.c)
 *     _CToastCenterExperienceManager::OnEventQueued_::_1_::dtor$0 @ 0x180363F58 (_CToastCenterExperienceManager--OnEventQueued_--_1_--dtor$0.c)
 * Callees:
 *     ?reset@?$shared_object@V?$ActivityData@VNotificationCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180032B80 (-reset@-$shared_object@V-$ActivityData@VNotificationCenterLogging@@U_TlgReflectorTag_Param0IsPro.c)
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18004B7A0 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VNotificationCenterLogging@@@details@wil@@QEAAPEAVNotificationCenterLogging@@P6AXXZ@Z @ 0x1800A6D60 (-get@-$static_lazy@VNotificationCenterLogging@@@details@wil@@QEAAPEAVNotificationCenterLogging@@.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18013A0EC (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1802DEE4C (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_EventQueuedActivity::~EM_EventQueuedActivity(
        volatile signed __int32 **this)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v5; // rax

  *this = (volatile signed __int32 *)&NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_EventQueuedActivity::`vftable';
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::details::shared_object<wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<NotificationCenterLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(this + 39);
  wil::details::shared_buffer::reset((wil::details::shared_buffer *)(this + 36));
  if ( *((_BYTE *)this + 120) )
  {
    v3 = this[14];
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, (LPVOID)v3);
    *((_BYTE *)this + 120) = 0;
  }
  this[14] = 0LL;
  if ( *((_DWORD *)this + 14) == 1 )
  {
    *((_DWORD *)this + 14) = 2;
    v5 = wil::details::static_lazy<NotificationCenterLogging>::get(
           v2,
           _lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_);
    _tlgWriteActivityAutoStop<0,5>(*(_QWORD *)(v5 + 8), this + 8);
  }
  *((_DWORD *)this + 14) = 3;
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(this + 1));
}
