/*
 * XREFs of ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008980
 * Callers:
 *     _CApplicationManager::UpdateEndpointVolume_::_1_::dtor$1 @ 0x180044C37 (_CApplicationManager--UpdateEndpointVolume_--_1_--dtor$1.c)
 *     _ApplicationSpecificEndpointInfo::AttemptToUpdateEndpointInterfaceId_::_1_::dtor$5 @ 0x180044C49 (_ApplicationSpecificEndpointInfo--AttemptToUpdateEndpointInterfaceId_--_1_--dtor$5.c)
 *     _GetPolicyVolumeForAudioStream_::_1_::dtor$0 @ 0x180044F32 (_GetPolicyVolumeForAudioStream_--_1_--dtor$0.c)
 *     _GetPolicyVolumeForAudioStream_::_1_::dtor$1 @ 0x180044F44 (_GetPolicyVolumeForAudioStream_--_1_--dtor$1.c)
 *     _ApplicationSpecificEndpointInfo::AttemptToUpdateEndpointInterfaceId_::_1_::dtor$6 @ 0x18004509D (_ApplicationSpecificEndpointInfo--AttemptToUpdateEndpointInterfaceId_--_1_--dtor$6.c)
 *     _CAastPreStartContext::RuntimeClassInitialize_::_1_::dtor$1 @ 0x1800450AF (_CAastPreStartContext--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _CAastPreStartContext::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1800451E8 (_CAastPreStartContext--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _ApplicationSpecificEndpointInfo::GetPersistentId_::_1_::dtor$0 @ 0x1800451FA (_ApplicationSpecificEndpointInfo--GetPersistentId_--_1_--dtor$0.c)
 *     _CProcess::RecalculateVolume_::_1_::dtor$1 @ 0x180045436 (_CProcess--RecalculateVolume_--_1_--dtor$1.c)
 *     _CPlaybackManager::QueueStreamStoppedWorkItem_::_1_::dtor$0 @ 0x180045C3B (_CPlaybackManager--QueueStreamStoppedWorkItem_--_1_--dtor$0.c)
 *     _CPlaybackManager::QueueStreamStoppedWorkItem_::_1_::dtor$1 @ 0x180045C4D (_CPlaybackManager--QueueStreamStoppedWorkItem_--_1_--dtor$1.c)
 *     _CStreamClassPolicyManager::GetPolicyVolumeForStreamClass_::_1_::dtor$0 @ 0x180045D04 (_CStreamClassPolicyManager--GetPolicyVolumeForStreamClass_--_1_--dtor$0.c)
 *     _ApplicationSpecificEndpointInfo::AttemptToUpdateEndpointInterfaceId_::_1_::dtor$4 @ 0x1800462A5 (_ApplicationSpecificEndpointInfo--AttemptToUpdateEndpointInterfaceId_--_1_--dtor$4.c)
 *     _CEndpointVolumeState::CEndpointVolumeState_::_1_::dtor$0 @ 0x1800465B4 (_CEndpointVolumeState--CEndpointVolumeState_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
