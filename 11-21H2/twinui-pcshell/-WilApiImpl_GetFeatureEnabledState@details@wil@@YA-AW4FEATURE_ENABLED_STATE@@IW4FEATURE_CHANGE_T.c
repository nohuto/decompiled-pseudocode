/*
 * XREFs of ?WilApiImpl_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x18009FF40
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_RtlStagingConfig_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHPEAH@Z @ 0x1800CB6E0 (-wil_RtlStagingConfig_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHPEAH@Z.c)
 *     ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x1800CB8C0 (-wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x1800F74A0 (-SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_.c)
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x18015C6A0 (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::WilApiImpl_GetFeatureEnabledState(wil::details *this, int a2, _DWORD *a3, int *a4)
{
  unsigned int v4; // edi
  volatile __int32 *v5; // rbx
  unsigned int v6; // r14d
  bool v8; // bp
  FARPROC ProcAddress; // rax
  int v10; // eax
  int v11; // ecx
  unsigned int v13; // r15d
  bool v14; // si
  __int32 v15; // eax
  char v16; // al
  HMODULE NtDllModuleHandle; // rax
  int v18; // [rsp+30h] [rbp-68h] BYREF
  __int128 v19; // [rsp+38h] [rbp-60h] BYREF
  __int64 v20; // [rsp+48h] [rbp-50h]
  _BYTE v21[8]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v22; // [rsp+58h] [rbp-40h] BYREF
  int v23; // [rsp+60h] [rbp-38h]

  v4 = 0;
  v5 = (volatile __int32 *)&`wil::details::IsFeatureConfigured'::`2'::userStoreProbe;
  v6 = (unsigned int)this;
  v19 = 0LL;
  v8 = (a2 & 0xFFFFFF7F) - 2 <= 1;
  v20 = 0LL;
  if ( (a2 & 0x80u) == 0 )
    v5 = (volatile __int32 *)&`wil::details::IsFeatureConfigured'::`2'::machineStoreProbe;
  if ( (*v5 & 9) == 1 )
    goto LABEL_8;
  if ( (*v5 & 1) == 0 )
  {
    v13 = dword_1807B3BB4;
    if ( !dword_1807B3BB4 )
      v13 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
    v18 = 0;
    *a3 = 1;
    v14 = (unsigned int)wil_RtlStagingConfig_QueryFeatureState((struct wil_FeatureState *)&v19, v6, v8, &v18) != 0;
    v15 = 3;
    if ( v18 )
      v15 = 11;
    v16 = _InterlockedExchange(v5, v15);
    if ( !v18 && (v16 & 2) == 0 )
      wil::details::EnabledStateManager::SubscribeFeatureStateCacheToConfigurationChanges(
        &wil::details::g_enabledStateManager,
        v5,
        0LL,
        v13);
    if ( v14 )
      v4 = v19;
    goto LABEL_8;
  }
  v22 = 0LL;
  v23 = 0;
  ProcAddress = (FARPROC)g_wil_details_pfnRtlQueryFeatureConfiguration;
  *a3 = 1;
  if ( !ProcAddress )
  {
    NtDllModuleHandle = wil_details_GetNtDllModuleHandle();
    ProcAddress = GetProcAddress(NtDllModuleHandle, "RtlQueryFeatureConfiguration");
    g_wil_details_pfnRtlQueryFeatureConfiguration = (__int64)ProcAddress;
    if ( !ProcAddress )
    {
LABEL_8:
      v11 = v20;
      goto LABEL_9;
    }
  }
  v10 = ((__int64 (__fastcall *)(_QWORD, bool, _BYTE *, __int64 *))ProcAddress)(v6, !v8, v21, &v22);
  if ( v10 )
  {
    if ( v10 != 279 )
      goto LABEL_8;
    v4 = v19;
    v11 = (HIDWORD(v22) >> 7) & 1;
  }
  else
  {
    v4 = (HIDWORD(v22) >> 4) & 3;
    HIDWORD(v20) = (HIDWORD(v22) >> 6) & 1;
    v11 = (HIDWORD(v22) >> 7) & 1;
  }
LABEL_9:
  if ( v11 )
    v4 |= 0x80u;
  if ( HIDWORD(v20) )
    v4 |= 0x40u;
  return v4;
}
