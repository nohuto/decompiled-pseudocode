/*
 * XREFs of ?StopGameInputWatcher@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x1801DB680
 * Callers:
 *     ?StopXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAXXZ @ 0x1801AC434 (-StopXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGameInput@@@WRL@Microsoft@@IEAAKXZ @ 0x1801DAC1C (-InternalRelease@-$ComPtr@UIGameInput@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?StopShortPressTimer@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x18040878C (-StopShortPressTimer@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z.c)
 */

void __fastcall GamingOverlayExperienceManager::StopGameInputWatcher(__int64 a1)
{
  __int64 *v1; // rdi
  __int64 v3; // rcx
  __int64 v4; // rdx

  v1 = (__int64 *)(a1 + 248);
  v3 = *(_QWORD *)(a1 + 248);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 256);
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v3 + 104LL))(v3, v4, -1LL);
      *(_QWORD *)(a1 + 256) = 0LL;
      GamingOverlayExperienceManager::StopShortPressTimer(a1);
    }
  }
  Microsoft::WRL::ComPtr<IGameInput>::InternalRelease(v1);
  *(_QWORD *)(a1 + 272) = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>::reset(
    (HMODULE *)(a1 + 264),
    0LL);
}
