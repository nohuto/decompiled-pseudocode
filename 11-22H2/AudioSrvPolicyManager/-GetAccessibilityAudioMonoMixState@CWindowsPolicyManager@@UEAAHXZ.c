/*
 * XREFs of ?GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ @ 0x18001C6F0
 * Callers:
 *     ?IsSpatializerAllowed@CProcess@@UEAA_NXZ @ 0x180014980 (-IsSpatializerAllowed@CProcess@@UEAA_NXZ.c)
 * Callees:
 *     ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x180002BB0 (-RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z.c)
 *     ?TsSessionIdGetAccessibilityAudioMonoMixState@@YA_NK@Z @ 0x180009060 (-TsSessionIdGetAccessibilityAudioMonoMixState@@YA_NK@Z.c)
 *     ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F560 (--1-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TsSessionIdAreAccessibilityAudioSettingsInitialized@@YA_NK@Z @ 0x18000F9EC (-TsSessionIdAreAccessibilityAudioSettingsInitialized@@YA_NK@Z.c)
 *     ?InitAccessibilityAudioSettings@CWindowsPolicyManager@@IEAAJK@Z @ 0x18001CB60 (-InitAccessibilityAudioSettings@CWindowsPolicyManager@@IEAAJK@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowsPolicyManager::GetAccessibilityAudioMonoMixState(CWindowsPolicyManager *this)
{
  unsigned int AccessibilityAudioMonoMixState; // edi
  DWORD v2; // eax
  unsigned int v3; // ebx
  CWindowsPolicyManager *v4; // rcx
  struct IAudioProcess *v6; // [rsp+30h] [rbp+8h] BYREF

  AccessibilityAudioMonoMixState = *((_DWORD *)this + 12);
  v6 = 0LL;
  if ( (int)CWindowsPolicyManager::RpcGetProcess(this, 0LL, &v6) >= 0 )
  {
    v2 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v6 + 48LL))(v6);
    v3 = v2;
    if ( v2 )
    {
      if ( !TsSessionIdAreAccessibilityAudioSettingsInitialized(v2) )
        CWindowsPolicyManager::InitAccessibilityAudioSettings(v4, v3);
      AccessibilityAudioMonoMixState = TsSessionIdGetAccessibilityAudioMonoMixState(v3);
    }
  }
  wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)&v6);
  return AccessibilityAudioMonoMixState;
}
