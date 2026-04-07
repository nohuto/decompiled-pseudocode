/*
 * XREFs of ?UpdateMaxTextureSize@CDesktopManager@@AEAAXXZ @ 0x18005F408
 * Callers:
 *     ?CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ @ 0x18003BB2C (-CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ.c)
 *     ?CreateMonitorRenderTargetsDDisplay@CDesktopManager@@AEAAJXZ @ 0x1800AFCEC (-CreateMonitorRenderTargetsDDisplay@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDesktopManager::UpdateMaxTextureSize(CDesktopManager *this)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 5) + 24LL) + 32LL))(*(_QWORD *)(*((_QWORD *)this + 5)
                                                                                                  + 24LL));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 5) + 16LL) + 72LL))(*(_QWORD *)(*((_QWORD *)this + 5)
                                                                                                  + 16LL));
  *((_DWORD *)this + 37) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 5) + 24LL) + 480LL))(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL));
}
