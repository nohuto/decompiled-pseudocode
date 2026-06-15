/*
 * XREFs of ?HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA?AW4AccessibilityStateChange@@XZ @ 0x180009FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InitAccessibilityAudioSettings@CWindowsPolicyManager@@IEAAJK@Z @ 0x18000A100 (-InitAccessibilityAudioSettings@CWindowsPolicyManager@@IEAAJK@Z.c)
 *     ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x18000C630 (-RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18002DF74 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionIdAreAccessibilityAudioSettingsInitialized@@YA_NK@Z @ 0x18002E4D0 (-TsSessionIdAreAccessibilityAudioSettingsInitialized@@YA_NK@Z.c)
 *     ?TsSessionIdGetAccessibilityAudioMonoMixState@@YA_NK@Z @ 0x18002ECF0 (-TsSessionIdGetAccessibilityAudioMonoMixState@@YA_NK@Z.c)
 *     ?TsSessionIdGetAudioProtocol@@YAJKPEAIPEAK@Z @ 0x18002EE4C (-TsSessionIdGetAudioProtocol@@YAJKPEAIPEAK@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowsPolicyManager::HasAccessibilityAudioStateChanged(volatile __int32 *a1)
{
  unsigned int v2; // r15d
  struct IAudioProcess *v3; // rbx
  DWORD v4; // eax
  DWORD v5; // ebp
  CWindowsPolicyManager *v6; // rcx
  struct _RTL_CRITICAL_SECTION *v7; // rsi
  int v8; // edi
  struct TSSession *v10; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v11; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v12; // [rsp+70h] [rbp+18h] BYREF
  struct IAudioProcess *v13; // [rsp+78h] [rbp+20h] BYREF

  v2 = 0;
  v13 = 0LL;
  if ( CWindowsPolicyManager::RpcGetProcess((CWindowsPolicyManager *)a1, 0LL, &v13) < 0 )
  {
LABEL_19:
    v3 = v13;
    goto LABEL_20;
  }
  v3 = v13;
  v4 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v13 + 48LL))(v13);
  v5 = v4;
  if ( v4
    && (TsSessionIdAreAccessibilityAudioSettingsInitialized(v4)
     || (int)CWindowsPolicyManager::InitAccessibilityAudioSettings(v6, v5) >= 0) )
  {
    TsSessionIdGetAudioProtocol(v5, &v11, &v12);
    v7 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
    v8 = 1;
    if ( (int)TsSessionFromSessionId(v5, 1, &v10) < 0 )
    {
      if ( v7 )
        LeaveCriticalSection(v7);
      goto LABEL_17;
    }
    if ( !*(_DWORD *)v10 || !*((_DWORD *)v10 + 278) )
      v8 = 0;
    if ( v7 )
      LeaveCriticalSection(v7);
    if ( v8 || v11 && v11 != 0xFFFF )
    {
LABEL_17:
      if ( _InterlockedExchange(a1 + 12, TsSessionIdGetAccessibilityAudioMonoMixState(v5)) != *((_DWORD *)a1 + 12) )
        v2 = v8 + 1;
      goto LABEL_19;
    }
  }
LABEL_20:
  if ( v3 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v3 + 16LL))(v3);
  return v2;
}
