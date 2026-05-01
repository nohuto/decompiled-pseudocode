/*
 * XREFs of ?QueueNotifyGameBarForKGLUpdateIfNecessary@BroadcastDVRComponent@@AEAAJPEAK0@Z @ 0x1800A6F90
 * Callers:
 *     ?StaticKGLSettingsRegistryChangeNotificationCallback@BroadcastDVRComponent@@CAXPEAXE@Z @ 0x180148780 (-StaticKGLSettingsRegistryChangeNotificationCallback@BroadcastDVRComponent@@CAXPEAXE@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?IsNewKGLVersionAvailable@BroadcastDVRComponent@@AEAA_NPEAK@Z @ 0x1800A6F08 (-IsNewKGLVersionAvailable@BroadcastDVRComponent@@AEAA_NPEAK@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BroadcastDVRComponent_OlderOneSettingsKGL@GameDVRTraceProvider@@SAXXZ @ 0x1801486EC (-BroadcastDVRComponent_OlderOneSettingsKGL@GameDVRTraceProvider@@SAXXZ.c)
 *     ?IsGameDVREnabled@BroadcastDVRComponent@@AEAA_NXZ @ 0x180182CF8 (-IsGameDVREnabled@BroadcastDVRComponent@@AEAA_NXZ.c)
 *     ?IsGameDVRGroupPolicyEnabled@BroadcastDVRComponent@@AEAA_NXZ @ 0x180182EB0 (-IsGameDVRGroupPolicyEnabled@BroadcastDVRComponent@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_a34c8618806693e8e74fc06704696ec1___ @ 0x1803D1E34 (Windows--Internal--ComTaskPool--QueueTask__lambda_a34c8618806693e8e74fc06704696ec1___.c)
 *     ?BroadcastDVRComponent_ActivateForKGLUpdate_Queueing@GameDVRTraceProvider@@SAXXZ @ 0x1803D5C10 (-BroadcastDVRComponent_ActivateForKGLUpdate_Queueing@GameDVRTraceProvider@@SAXXZ.c)
 *     ?BroadcastDVRComponent_NoRecentGameActivity@GameDVRTraceProvider@@SAX_KK@Z @ 0x1803D5E80 (-BroadcastDVRComponent_NoRecentGameActivity@GameDVRTraceProvider@@SAX_KK@Z.c)
 *     ?GetDifferenceInMinutes@BroadcastDVRComponent@@AEAAJPEBU_SYSTEMTIME@@PEBU_FILETIME@@PEA_K@Z @ 0x1803D81AC (-GetDifferenceInMinutes@BroadcastDVRComponent@@AEAAJPEBU_SYSTEMTIME@@PEBU_FILETIME@@PEA_K@Z.c)
 *     ?SHRegGetFILETIME@@YAJPEAUHKEY__@@PEBG1PEAU_FILETIME@@@Z @ 0x1803DB728 (-SHRegGetFILETIME@@YAJPEAUHKEY__@@PEBG1PEAU_FILETIME@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BroadcastDVRComponent::QueueNotifyGameBarForKGLUpdateIfNecessary(
        BroadcastDVRComponent *this,
        unsigned int *a2,
        unsigned int *a3)
{
  BroadcastDVRComponent *v6; // rcx
  __int64 v8; // rdx
  unsigned int v9; // ebx
  HKEY v10; // rcx
  BroadcastDVRComponent *v11; // rcx
  int DifferenceInMinutes; // eax
  unsigned __int64 v13; // rax
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-38h] BYREF
  unsigned int v19; // [rsp+30h] [rbp-30h]
  struct _FILETIME v20; // [rsp+38h] [rbp-28h] BYREF
  struct _SYSTEMTIME SystemTime; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  if ( !a2 )
  {
    v8 = 1201LL;
LABEL_16:
    v9 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
      (const char *)0x80004003LL,
      v17);
    return v9;
  }
  if ( !a3 )
  {
    v8 = 1202LL;
    goto LABEL_16;
  }
  *a2 = 0;
  *a3 = 0;
  if ( (int)SHRegGetDWORD(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\KGL\\OneSettings", L"ActivateOnUpdate", a3) < 0 )
    return 0LL;
  if ( !*a3 )
    return 0LL;
  if ( !BroadcastDVRComponent::IsGameDVRGroupPolicyEnabled(this) )
    return 0LL;
  v17 = 1;
  if ( (int)SHRegGetDWORD(
              HKEY_LOCAL_MACHINE,
              L"Software\\Policies\\Microsoft\\Windows\\GameDVR",
              L"AllowKGLUpdates",
              &v17) >= 0 )
  {
    if ( v17 )
      return 0LL;
  }
  if ( *a3 != -1 )
  {
    SystemTime = 0LL;
    GetSystemTime(&SystemTime);
    v20 = 0LL;
    if ( (int)SHRegGetFILETIME(v10, L"Software\\Microsoft\\Windows\\CurrentVersion\\GameDVR", L"LastGameActivity", &v20) < 0 )
      return 0LL;
    v18 = 0LL;
    DifferenceInMinutes = BroadcastDVRComponent::GetDifferenceInMinutes(v11, &SystemTime, &v20, &v18);
    if ( DifferenceInMinutes < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4E3,
        (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        (const char *)(unsigned int)DifferenceInMinutes,
        v17);
      return 0LL;
    }
    v13 = *a3;
    v6 = (BroadcastDVRComponent *)v18;
    if ( v18 > v13 )
    {
      GameDVRTraceProvider::BroadcastDVRComponent_NoRecentGameActivity(v18, v13);
      return 0LL;
    }
  }
  if ( !BroadcastDVRComponent::IsNewKGLVersionAvailable(v6, a2) || !BroadcastDVRComponent::IsGameDVREnabled(this) )
  {
    GameDVRTraceProvider::BroadcastDVRComponent_OlderOneSettingsKGL();
    return 0LL;
  }
  GameDVRTraceProvider::BroadcastDVRComponent_ActivateForKGLUpdate_Queueing();
  v18 = (unsigned __int64)this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
  v14 = *a2;
  v18 = (unsigned __int64)this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
  v19 = v14;
  v9 = Windows::Internal::ComTaskPool::QueueTask__lambda_a34c8618806693e8e74fc06704696ec1___(
         v16,
         v15,
         *((unsigned int *)this + 60),
         &v18);
  if ( v18 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( this )
    (*(void (__fastcall **)(BroadcastDVRComponent *))(*(_QWORD *)this + 16LL))(this);
  return v9;
}
