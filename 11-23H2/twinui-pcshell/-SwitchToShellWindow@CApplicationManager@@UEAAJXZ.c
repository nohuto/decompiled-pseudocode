/*
 * XREFs of ?SwitchToShellWindow@CApplicationManager@@UEAAJXZ @ 0x1803A13A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x180012680 (-SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::SwitchToShellWindow(CApplicationManager *this)
{
  __int64 v2; // rdi
  void (__fastcall *v3)(__int64, _QWORD, GUID *, GUID *, __int64 *); // rbx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  v2 = *((_QWORD *)this + 51);
  v3 = *(void (__fastcall **)(__int64, _QWORD, GUID *, GUID *, __int64 *))(*(_QWORD *)v2 + 72LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v5);
  v3(v2, 0LL, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v5);
  LODWORD(v3) = CApplicationManager::SwitchToDesktopOnMonitor(this, v5, 1);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v5);
  return (unsigned int)v3;
}
