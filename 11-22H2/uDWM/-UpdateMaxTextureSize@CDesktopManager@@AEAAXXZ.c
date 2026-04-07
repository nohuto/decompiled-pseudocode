/*
 * XREFs of ?UpdateMaxTextureSize@CDesktopManager@@AEAAXXZ @ 0x180057F14
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18003BBE8 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDesktopManager::UpdateMaxTextureSize(CDesktopManager *this)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 6) + 32LL) + 32LL))(*(_QWORD *)(*((_QWORD *)this + 6)
                                                                                                  + 32LL));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 6) + 24LL) + 64LL))(*(_QWORD *)(*((_QWORD *)this + 6)
                                                                                                  + 24LL));
  *((_DWORD *)this + 39) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 6) + 32LL) + 480LL))(*(_QWORD *)(*((_QWORD *)this + 6) + 32LL));
}
