/*
 * XREFs of ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x180035648
 * Callers:
 *     ?WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x18003A7D0 (-WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_.c)
 * Callees:
 *     ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x18001AEB4 (-wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?UnregisterWilFeatureConfigurationChange@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003B4F4 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-UnregisterWilFeatureConfigurationCha.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall wil::details::FeatureStateManager::EnsureSubscribedToStateChangesUnderLock(
        wil::details::FeatureStateManager *this)
{
  char *v2; // rbx
  FARPROC ProcAddress; // rax
  HMODULE NtDllModuleHandle; // rax
  int v5; // eax

  v2 = (char *)this + 144;
  if ( *((_QWORD *)this + 18) )
  {
    v5 = 0;
  }
  else
  {
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::UnregisterWilFeatureConfigurationChange(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      (char *)this + 144,
      0LL);
    ProcAddress = (FARPROC)g_wil_details_pfnRtlRegisterFeatureConfigurationChangeNotification;
    if ( g_wil_details_pfnRtlRegisterFeatureConfigurationChangeNotification
      || (NtDllModuleHandle = wil_details_GetNtDllModuleHandle(),
          ProcAddress = GetProcAddress(NtDllModuleHandle, "RtlRegisterFeatureConfigurationChangeNotification"),
          (g_wil_details_pfnRtlRegisterFeatureConfigurationChangeNotification = (__int64)ProcAddress) != 0) )
    {
      v5 = ((__int64 (__fastcall *)(void (__fastcall *)(char *), wil::details::FeatureStateManager *, _QWORD, char *))ProcAddress)(
             _lambda_1ad7ecfab602a777ecf020873216a663_::_lambda_invoker_cdecl_,
             this,
             0LL,
             v2);
    }
    else
    {
      v5 = -1073741511;
    }
  }
  return v5 == 0;
}
