/*
 * XREFs of ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800089D0
 * Callers:
 *     _CApplicationManager::RegisterMixedRealitySpatialAudioFormatPolicyChange_::_1_::dtor$0 @ 0x1800459F8 (_CApplicationManager--RegisterMixedRealitySpatialAudioFormatPolicyChange_--_1_--dtor$0.c)
 *     _CPlaybackManager::QueueStreamStoppedWorkItem_::_1_::dtor$2 @ 0x180045A0A (_CPlaybackManager--QueueStreamStoppedWorkItem_--_1_--dtor$2.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BCA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 */

__int64 __fastcall wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release();
  return result;
}
