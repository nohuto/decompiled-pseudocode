/*
 * XREFs of ?GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ @ 0x1800098D0
 * Callers:
 *     ?IsSpatializerAllowed@CProcess@@UEAA_NXZ @ 0x180018770 (-IsSpatializerAllowed@CProcess@@UEAA_NXZ.c)
 * Callees:
 *     ?InitAccessibilityAudioSettings@CWindowsPolicyManager@@IEAAJK@Z @ 0x18000A100 (-InitAccessibilityAudioSettings@CWindowsPolicyManager@@IEAAJK@Z.c)
 *     ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x18000C630 (-RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z.c)
 *     ?TsSessionIdAreAccessibilityAudioSettingsInitialized@@YA_NK@Z @ 0x18002E4D0 (-TsSessionIdAreAccessibilityAudioSettingsInitialized@@YA_NK@Z.c)
 *     ?TsSessionIdGetAccessibilityAudioMonoMixState@@YA_NK@Z @ 0x18002ECF0 (-TsSessionIdGetAccessibilityAudioMonoMixState@@YA_NK@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowsPolicyManager::GetAccessibilityAudioMonoMixState(CWindowsPolicyManager *this)
{
  unsigned int AccessibilityAudioMonoMixState; // esi
  int Process; // eax
  struct IAudioProcess *v3; // rbx
  DWORD v4; // eax
  unsigned int v5; // edi
  CWindowsPolicyManager *v6; // rcx
  struct IAudioProcess *v8; // [rsp+30h] [rbp+8h] BYREF

  AccessibilityAudioMonoMixState = *((_DWORD *)this + 12);
  v8 = 0LL;
  Process = CWindowsPolicyManager::RpcGetProcess(this, 0LL, &v8);
  v3 = v8;
  if ( Process >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v8 + 48LL))(v8);
    v5 = v4;
    if ( v4 )
    {
      if ( !TsSessionIdAreAccessibilityAudioSettingsInitialized(v4) )
        CWindowsPolicyManager::InitAccessibilityAudioSettings(v6, v5);
      AccessibilityAudioMonoMixState = TsSessionIdGetAccessibilityAudioMonoMixState(v5);
    }
  }
  if ( v3 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v3 + 16LL))(v3);
  return AccessibilityAudioMonoMixState;
}
